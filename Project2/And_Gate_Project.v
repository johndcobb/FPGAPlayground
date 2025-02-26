module And_Gate_Project
  (input  i_Switch_1,
   input  i_Switch_2,
   output o_LED_1);
  assign o_LED_1 = i_Switch_1 & i_Switch_2;
endmodule
// converting from VHDL causes one more "wire" to be created by yosys. nextpnr implements in the exact same way regardless, however.
// or is | in verilog