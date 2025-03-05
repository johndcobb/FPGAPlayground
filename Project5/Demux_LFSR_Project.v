module Demux_LFSR_Project_Top
    (input i_Clk,
    input i_Switch_1,
    input i_Switch_2,
    output o_LED_1,
    output o_LED_2,
    output o_LED_3,
    output o_LED_4);
    reg r_LFSR_Toggle = 1'b0;
    wire w_LFSR_Done;

    LFSR_22 LFSR_22_Inst
    (.i_Clk(i_Clk),
    .o_LFSR_Data(),
    .o_LFSR_Done(w_LFSR_Done));

    //w_LFSR_Done will be done every 2^22 cycles, so we can use it to toggle the LEDs
    always @(posedge i_Clk)
    begin
        if (w_LFSR_Done)
        begin
            r_LFSR_Toggle <= ~r_LFSR_Toggle;
        end
    end

    Demux_1_To_4 Demux_1_To_4_Inst
    (.i_Data(r_LFSR_Toggle),
    .i_Sel1(i_Switch_1),
    .i_Sel2(i_Switch_2),
    .o_Data1(o_LED_1),
    .o_Data2(o_LED_2),
    .o_Data3(o_LED_3),
    .o_Data4(o_LED_4));
endmodule

module LFSR_22
    (input i_Clk,
    output [21:0] o_LFSR_Data,
    output o_LFSR_Done);
    reg [21:0] r_LFSR;
    wire w_XNOR;
    always @(posedge i_Clk)
    begin
        o_LFSR_Data <= {o_LFSR_Data[20:0], w_XNOR};
    end
    assign w_XNOR = r_LFSR[21] ^~ r_LFSR[20]; //xnor gate
    assign o_LFSR_Done = (r_LFSR == 22'd0);
    assign o_LFSR_Data = r_LFSR;
endmodule

module Demux_1_To_4
    (input i_Data,
    input i_Sel1,
    input i_Sel2,
    output o_Data1,
    output o_Data2,
    output o_Data3,
    output o_Data4);
    assign o_Data1 = i_Sel1 & i_Sel2 ? i_Data : 1'b0;
    assign o_Data2 = i_Sel1 & !i_Sel2 ? i_Data : 1'b0;
    assign o_Data3 = !i_Sel1 & i_Sel2 ? i_Data : 1'b0;
    assign o_Data4 = !i_Sel1 & !i_Sel2 ? i_Data : 1'b0;
endmodule
