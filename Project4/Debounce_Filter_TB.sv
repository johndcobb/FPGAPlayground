module Debounce_Filter_TB();
    reg r_Clk = 1'b0;
    reg r_Bouncy = 1'b0;
    wire w_Debounced; // I may not need to declare this for some reason... it is not in the book!
    always #2 r_Clk <= !r_Clk; //this simulates a clock signal, except its every 2 ns
    Debounce_Filter #(.DEBOUNCE_LIMIT(4)) dut
    (.i_Clk(r_Clk),
     .i_Bouncy(r_Bouncy),
     .o_Debounced(w_Debounced)); // when is w_Debounced declared? I think this is a dummy variable...
    initial begin
        $dumpfile("Debounce_Filter_TB.vcd"); $dumpvars; // for some reason, the vcd was not generated automatically without this added code!
        repeat(3) @(posedge r_Clk);
        r_Bouncy = 1'b1;
        @(posedge r_Clk);
        r_Bouncy = 1'b0; // simulate a glitch/bounce of switch
        @(posedge r_Clk);
        r_Bouncy = 1'b1; // bounce goes away
        repeat(6) @(posedge r_Clk);
        $display("Test Complete");
        $finish();
    end
endmodule
// Lattice has an on-FPGA debugger called Reveal which takes a bunch of fpga board space to set up. It should be used as a last resort when simulation does not detect the issue.
