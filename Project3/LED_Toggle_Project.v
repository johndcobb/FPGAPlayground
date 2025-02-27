module LED_Toggle_Project(
    input i_Switch_1,
    input i_Clk,
    output o_LED_1);
    // use reg to register two signals, initially zero. not yet flip flops!
    reg r_LED_1 = 1'b0;
    reg r_Switch_1 = 1'b0;
    // always is triggered by changes in one or more signals
    always @(posedge i_Clk) // this block of code will run every rising edge of the clock, due to posedge. 
    begin
       r_Switch_1 <= i_Switch_1; // this registers a flip flop with i_Switch_1 on D input, r_Switch_1 on the Q input, and i_Clk on the clock input
       if (i_Switch_1 == 1'b0 & r_Switch_1 == 1'b1) // if current state is 0 and previous state was 1, we found a falling edge (so the switch has been released )
       /* Now, you might be thinking: didnt we just set these equal to each other? NO! The <= operator does not occur immediately, they take place on the rising edge of the clock. That assignment takes a one-cycle delay of any changes to the input. You could move the assignment to the end of the always block and it would still work fine. Formally, <= is called a non-blocking assignment. You should think of all the things happening in the always block as happening at the same time!
       */
       begin
          r_LED_1 <= ~r_LED_1; // this inverts whatever value was there last time -- it goes through the NOT gate and back into itself.
       end
    end
    assign o_LED_1 = r_LED_1; // assign the value of the register to the output
endmodule