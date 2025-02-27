# FPGA Playground
A place to keep track of code used to program FPGAs. The FPGA I have is the Nandland Go Board, and I am following the book "Getting Started with FPGAs" by Russell Merrick. I intend to focus on coding with VDHL.

I intend to download [OSS CAD suite](https://github.com/YosysHQ/oss-cad-suite-build) instead of the iCEcube2 + Diamond Programmer combo suggested by Merrick. This includes some formal verification tools that I'd like to use as well (Symbiyosys). 

I intend to develop the code on VSCode and do simulations using verilator. If I want VDHL code to run to verilator, I need to use GDHL to convert it. Then I can synthesize the code (yosys), set up the place and route (nextnpr), and then upload it to the FPGA with Project Icestorm using icepack (convert to bitstream) and iceprog (upload bitstream). Its unclear which part of this does not work on MacOS.

## Converting from VDHL to Verilog
First, since we used vhdl and yosys expects verilog, we should move it over to verilog using the following code.

We first need to analyze the code, which does a bunch of syntactic and semantic checks, and stores the analyzed design objects in a library. The default library is the “work” library.
```
ghdl analyze project1.vhdl
```
If all goes well, ghdl won’t print anything on the screen, but you’ll notice that a work-obj93.cf file was created. That’s the work library with the analyzed design. Then you can read to verilog, and print it to project.v
```
ghdl --synth --out=verilog Switches_To_LEDs > project1.v 
```
If you rather, you can combine the analyze and synthesize steps with the following command
```
ghdl --synth --out=verilog project.vhdl -e > project1.v
```
Here, it guesses the top entity or you can put it in manually after -e.

## An Example: Uploading Project 1
Imagine that you have project 1.pcf and project1.v and now you wish to upload the design to your FPGA. 
Next, we need to synthesize the code with yosys. You can just run yosys to enter the CLI, but you can also use the flag -p to run a code without entering. Use yosys --help to see all other flags.
```
yosys -p 'synth_ice40 -top Switches_To_LEDs -json project1.json' project1.v
```
-top designates project1 as the top module. If you don't include it, then it will guess quietly. and -json writes the design to a specified JSON file, which is needed for nextpnr. This does a [lot of yosys commands](https://yosyshq.readthedocs.io/projects/yosys/en/0.47/cmd/synth_ice40.html) in sequence intelligently, and if anything goes wrong, you might need to dig into why here: [yosys synth help](https://yosyshq.readthedocs.io/projects/yosys/en/latest/getting_started/example_synth.html). 

Now that we have our json, we need to run our place and route, which uses project1.pcf. This can be done with the following:
```
nextpnr-ice40 --hx1k --package vq100 --json project1.json --pcf project1.pcf --asc project1.asc   # run place and route
```
--hx1k sets the sort of lattice ice40 fpga I have. The package vq100 is also specific to my nandland go board. The --json and --pcf point it to the files it needs to read, and --asc tells it what file to write the ascii bitstream to. Optionally, you can add the option --gui to the end to see a schematic of the the physical connections (you need to manually click some buttons on the top to place all the routes and seem them show up).

Now, we can take the ascii schematics and convert it into a binary bistream file .bin.
```
icepack project1.asc project1.bin
```
and this can be uploaded 
```
iceprog project1.bin
```

So, all together its
```
ghdl --synth --out=verilog project1.vhdl -e Switches_To_LEDs > project1.v # optionally convert VDHL to Verilog
yosys -p 'synth_ice40 -top Switches_To_LEDs -json project1.json' project1.v # synthesize the code to a json
nextpnr-ice40 --hx1k --package vq100 --json project1.json --pcf project1.pcf --asc project1.asc   # run place and route
icepack project1.asc project1.bin # convert ascii bitstream to binary 
iceprog project1.bin # upload binary bitstream to device
```
or with guessing the top module:
```
ghdl --synth --out=verilog project1.vhdl -e > project1.v # optionally convert VDHL to Verilog
yosys -p 'synth_ice40 -json project1.json' project1.v # synthesize the code to a json
nextpnr-ice40 --hx1k --package vq100 --json project1.json --pcf project1.pcf --asc project1.asc   # run place and route
icepack project1.asc project1.bin # convert ascii bitstream to binary 
iceprog project1.bin # upload binary bitstream to device
```

## Other things to do with iceproject tools

You can do a timing analysis report 
```
icetime -tmd hx1k project1.asc
```
The recommended approach for learning how to use this documentation is to synthesize very simple circuits using Yosys and Arachne-pnr, run the icestorm tool icebox_explain on the resulting bitstream files, and analyze the results using the HTML export of the database mentioned above. icebox_vlog can be used to convert the bitstream to Verilog. The output file of this tool will also outline the signal paths in comments added to the generated Verilog code.

yosys can also generate visualizations of the entire network with the command show. See [here](https://yosyshq.net/yosys/screenshots.html).

## Simulating with Verilator

I am learning this from [here](https://itsembedded.com/dhd/verilator_1/). First, the Verilator application is not used to simulate the testbench. Instead, the Verilator application is only used for converting Verilog to C++ and create build instructions for Make. The simulator in this case is the C++ testbench itself.

```
verilator --binary -j 0 -Wall -Wno-fatal --trace-fst And_Gate_TB.sv
```

-j 0 uses as many CPU cores as are available. -Wno-fatal stops exiting upon warning -Wall generates all C++ warnings. --trace enables waveform tracing.

You can open up the waveform with gtkwave waveform.vcd.


Execution profiling is possible with --prof-exec. This will save the profiling data in a non-human-friendly form to a prof exec file, which can be visualized with verilator_gantt.