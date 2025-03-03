module And_Gate_TB();
    //Design inputs and outputs
    reg r_In1, r_In2;
    wire w_Out;
    //Instantiate the DUT
    And_Gate_Project dut
    (.i_Switch_1(r_In1),
     .i_Switch_2(r_In2),
     .o_LED_1(w_Out));
    //Test stimulus
    initial begin
        r_In1 = 1'b0;
        r_In2 = 1'b0;
        #10; // delay 10 time units
        r_In1 = 1'b0;
        r_In2 = 1'b1;
        #10;
        r_In1 = 1'b1;
        r_In2 = 1'b0;
        #10;
        r_In1 = 1'b1;
        r_In2 = 1'b1;
        #10;
    end
endmodule
// No inputs or outputs are declared -- the testbench does not connect to any external signals.
// This does not work right now....
