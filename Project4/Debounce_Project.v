module Debounce_Project_Top
    (input i_Clk,
    input i_Switch_1,
    output o_LED_1);
    wire w_Debounced_Switch; 
    // In the following, we instantiate the Debounce_Filter module with a custom parameter. Debounce_Inst is just the name of the instance of the module.
    Debounce_Filter #(.DEBOUNCE_LIMIT(250000)) Debound_Inst 
    (.i_Clk(i_Clk),
    .i_Bouncy(i_Switch_1),
    .o_Debounced(w_Debounced_Switch));
    LED_Toggle_Project LED_Toggle_Inst
    (.i_Clk(i_Clk),
    .i_Switch_1(w_Debounced_Switch),
    .o_LED_1(o_LED_1));
endmodule

module Debounce_Filter #(parameter DEBOUNCE_LIMIT = 20) (
    input i_Clk,
    input i_Bouncy,
    output o_Debounced);
    // $clog2 is a built in function for ceiling log base 2, which tells us the number of binary digits needed to implement the counter. I don't know the syntax, but this is setting the width of the counter r_Count.
    reg [$clog2(DEBOUNCE_LIMIT)-1:0] r_Count = 0;
    reg r_State = 1'b0;
    always @(posedge i_Clk)
    begin
        // if the input is different from the current state, but we haven't reached the debounce limit, increment the counter
        if (i_Bouncy !== r_State && r_Count < DEBOUNCE_LIMIT - 1)
        begin
            r_Count <= r_Count + 1; // note that you can only use this in an always block, where you use 'assign' outside of an always block
        end
        // if our debounce counter is up (the only way is if i_bouncy !== r_State for a long time) then set the r_State.
        else if (r_Count == DEBOUNCE_LIMIT - 1)
        begin
            r_State <= i_Bouncy;
            r_Count <= 0;
        end
        //if we made it here, then the clock has not reached the debounce limit and i_Bouncy == r_State, so we are not bouncing. Reset the counter.
        else 
        begin
            r_Count <= 0;
        end
    end
    assign o_Debounced = r_State;
endmodule

module LED_Toggle_Project(
    input i_Switch_1,
    input i_Clk,
    output o_LED_1);
    reg r_LED_1 = 1'b0;
    reg r_Switch_1 = 1'b0;
    always @(posedge i_Clk)
    begin
       r_Switch_1 <= i_Switch_1;
       if (i_Switch_1 == 1'b0 & r_Switch_1 == 1'b1)
       begin
          r_LED_1 <= ~r_LED_1;
       end
    end
    assign o_LED_1 = r_LED_1;
endmodule

