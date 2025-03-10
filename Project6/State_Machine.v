module State_Machine_Top
    (input i_Clk,
    //Input switches for entering the pattern
    input i_Switch_1,
    input i_Switch_2,
    input i_Switch_3,
    input i_Switch_4,
    //Output LEDs for displaying the pattern
    output o_LED_1,
    output o_LED_2,
    output o_LED_3,
    output o_LED_4,
    // Scoreboard, 7-segment display
    output o_Segment1_A,
    output o_Segment1_B,
    output o_Segment1_C,
    output o_Segment1_D,
    output o_Segment1_E,
    output o_Segment1_F,
    output o_Segment1_G,
    output o_Segment2_A,
    output o_Segment2_B,
    output o_Segment2_C,
    output o_Segment2_D,
    output o_Segment2_E,
    output o_Segment2_F,
    output o_Segment2_G);
    localparam GAME_LIMIT = 7; //Increase to make game harder
    localparam CLKS_PER_SEC = 25000000; //25 MHz clock
    localparam DEBOUNCE_LIMIT = 250000; // 10 ms debounce filter
    wire w_Switch_1; wire w_Switch_2; wire w_Switch_3; wire w_Switch_4;
    wire [3:0] w_Score_ones;
    wire [3:0] w_Score_tens;

    //Debounce mechanical switches
    Debounce_Filter #(.DEBOUNCE_LIMIT(DEBOUNCE_LIMIT)) Debounce_SW1
    (.i_Clk(i_Clk), .i_Bouncy(i_Switch_1), .o_Debounced(w_Switch_1));
    Debounce_Filter #(.DEBOUNCE_LIMIT(DEBOUNCE_LIMIT)) Debounce_SW2
    (.i_Clk(i_Clk), .i_Bouncy(i_Switch_2), .o_Debounced(w_Switch_2));
    Debounce_Filter #(.DEBOUNCE_LIMIT(DEBOUNCE_LIMIT)) Debounce_SW3
    (.i_Clk(i_Clk), .i_Bouncy(i_Switch_3), .o_Debounced(w_Switch_3));
    Debounce_Filter #(.DEBOUNCE_LIMIT(DEBOUNCE_LIMIT)) Debounce_SW4
    (.i_Clk(i_Clk), .i_Bouncy(i_Switch_4), .o_Debounced(w_Switch_4));

    //State Machine States
    State_Machine_Game #(.CLKS_PER_SEC(CLKS_PER_SEC), .GAME_LIMIT(GAME_LIMIT)) Game_Inst
    (.i_Clk(i_Clk), .i_Switch_1(w_Switch_1), .i_Switch_2(w_Switch_2), .i_Switch_3(w_Switch_3), .i_Switch_4(w_Switch_4), .o_LED_1(o_LED_1), .o_LED_2(o_LED_2), .o_LED_3(o_LED_3), .o_LED_4(o_LED_4), .o_Score_ones(w_Score_ones), .o_Score_tens(w_Score_tens));

    //Scoreboard
    Binary_To_7Segment Scoreboard_Tens 
    (.i_Clk(i_Clk), .i_Binary_Num(w_Score_tens), .o_Segment_A(o_Segment1_A), .o_Segment_B(o_Segment1_B), .o_Segment_C(o_Segment1_C), .o_Segment_D(o_Segment1_D), .o_Segment_E(o_Segment1_E), .o_Segment_F(o_Segment1_F), .o_Segment_G(o_Segment1_G));
    Binary_To_7Segment Scoreboard_Ones 
    (.i_Clk(i_Clk), .i_Binary_Num(w_Score_ones), .o_Segment_A(o_Segment2_A), .o_Segment_B(o_Segment2_B), .o_Segment_C(o_Segment2_C), .o_Segment_D(o_Segment2_D), .o_Segment_E(o_Segment2_E), .o_Segment_F(o_Segment2_F), .o_Segment_G(o_Segment2_G));
endmodule

module State_Machine_Game #(parameter CLKS_PER_SEC = 25000000, parameter GAME_LIMIT = 7)
    (input i_Clk,
    input i_Switch_1,
    input i_Switch_2,
    input i_Switch_3,
    input i_Switch_4,
    output o_LED_1,
    output o_LED_2,
    output o_LED_3,
    output o_LED_4,
    output reg [3:0] o_Score_ones,
    output reg [3:0] o_Score_tens);
    localparam START = 3'd0;
    localparam PATTERN_OFF = 3'd1;
    localparam PATTERN_ON = 3'd2;
    localparam WAIT = 3'd3;
    localparam SCORE_INC = 3'd4;
    localparam WINNER = 3'd5;
    localparam LOSER = 3'd6;
    reg [3:0] r_Curr_State; 
    reg r_Toggle, r_Switch_1, r_Switch_2, r_Switch_3, r_Switch_4, r_Button_DV; //Used to detect falling edge
    reg [$clog2(GAME_LIMIT)-1:0] r_Index; //This will be used to index the pattern, so maximum of 11.
    reg [1:0] r_Pattern[0:10]; // 2 bits x 11 deep, storing which of 4 LEDS are on
    wire [21:0] w_LFSR_Data; // This will generate the 22 bits in r_Pattern
    reg [1:0] r_Button_ID; //This will store the button ID
    wire w_Count_En, w_Toggle; //This will be used to implement the timer and show the pattern
    reg [$clog2(GAME_LIMIT)-1:0] r_Score;


    //The State Machine
    always @(posedge i_Clk)
    begin   
        if (i_Switch_1 & i_Switch_2) // reset conditions
        r_Curr_State <= START;
        else
        begin
            case (r_Curr_State)
            START: 
                begin
                    // wait for reset conditions to go away
                    if (!i_Switch_1 & !i_Switch_2 & r_Button_DV)
                    begin
                        r_Curr_State <= PATTERN_OFF;
                        r_Index <= 0;
                        o_Score_ones <= 0;
                        o_Score_tens <= 0;
                        r_Score <= 0;
                    end
                end
            PATTERN_OFF:
                begin
                    if (!w_Toggle & r_Toggle) // Falling edge found
                    r_Curr_State <= PATTERN_ON;
                end
            PATTERN_ON:
                begin
                    if (!w_Toggle & r_Toggle) begin // Falling edge found
                        // done showing pattern
                        if (r_Score == r_Index)
                        begin
                            r_Index <= 0;
                            r_Curr_State <= WAIT; 
                        end
                        // continue showing pattern
                        else begin 
                            r_Index <= r_Index + 1;
                            r_Curr_State <= PATTERN_OFF;
                        end
                    end
                end
            WAIT:
                begin
                    if (r_Button_DV)
                        if (r_Pattern[r_Index] == r_Button_ID && r_Index == r_Score)
                        begin
                            r_Index <= 0;
                            r_Curr_State <= SCORE_INC;
                        end
                        else if (r_Pattern[r_Index] != r_Button_ID)
                            r_Curr_State <= LOSER;
                        else
                            r_Index <= r_Index + 1;
                end
            SCORE_INC:
                begin
                    r_Score <= r_Score + 1;
                    if (o_Score_ones == 9) 
                    begin 
                        o_Score_ones <= 0;
                        o_Score_tens <= o_Score_tens + 1;
                    end
                    else 
                        o_Score_ones <= o_Score_ones + 1;

                    if (r_Score == GAME_LIMIT - 1)
                        r_Curr_State <= WINNER;
                    else
                        r_Curr_State <= PATTERN_OFF; // add one more thing to the pattern
                end
            WINNER: 
                begin
                    o_Score_tens <= 4'hA;
                    o_Score_ones <= 4'hA; // DisplayA on the 7-segment display, wait for new game.
                end
            LOSER:
                begin
                    o_Score_tens <= 4'hF;
                    o_Score_ones <= 4'hF; // Loser!
                end
            default:
                r_Curr_State <= START;
            endcase // r_Curr_State
        end
    end // always

    //Write the pattern from LFSR to r_Pattern
    LFSR_22 LFSR_Inst
    (.i_Clk(i_Clk), .o_LFSR_Data(w_LFSR_Data), .o_LFSR_Done());
    always @(posedge i_Clk)
    begin
        if (r_Curr_State == START)
        begin
            r_Pattern[0] <= w_LFSR_Data[1:0];
            r_Pattern[1] <= w_LFSR_Data[3:2];
            r_Pattern[2] <= w_LFSR_Data[5:4];
            r_Pattern[3] <= w_LFSR_Data[7:6];
            r_Pattern[4] <= w_LFSR_Data[9:8];
            r_Pattern[5] <= w_LFSR_Data[11:10];
            r_Pattern[6] <= w_LFSR_Data[13:12];
            r_Pattern[7] <= w_LFSR_Data[15:14];
            r_Pattern[8] <= w_LFSR_Data[17:16];
            r_Pattern[9] <= w_LFSR_Data[19:18];
            r_Pattern[10] <= w_LFSR_Data[21:20];
        end
    end
    
    // This will light up when you press the buttons to match to pattern (correctly) recall that : operates like an else block
    assign o_LED_1 = (r_Curr_State == PATTERN_ON && r_Pattern[r_Index] == 2'b00) ? 1'b1 : i_Switch_1;
    assign o_LED_2 = (r_Curr_State == PATTERN_ON && r_Pattern[r_Index] == 2'b01) ? 1'b1 : i_Switch_2;
    assign o_LED_3 = (r_Curr_State == PATTERN_ON && r_Pattern[r_Index] == 2'b10) ? 1'b1 : i_Switch_3;
    assign o_LED_4 = (r_Curr_State == PATTERN_ON && r_Pattern[r_Index] == 2'b11) ? 1'b1 : i_Switch_4;

    //Create registers to enable falling edge detection
    // The differences between registers and input will last only one cycle.
    always @(posedge i_Clk)
    begin
        r_Toggle <= w_Toggle;
        r_Switch_1 <= i_Switch_1;
        r_Switch_2 <= i_Switch_2;
        r_Switch_3 <= i_Switch_3;
        r_Switch_4 <= i_Switch_4;
        if (r_Switch_1 & !i_Switch_1)
        begin
            r_Button_DV <= 1'b1;
            r_Button_ID <= 0;
        end
        else if (r_Switch_2 & !i_Switch_2)
        begin
            r_Button_DV <= 1'b1;
            r_Button_ID <= 1;
        end
        else if (r_Switch_3 & !i_Switch_3)
        begin
            r_Button_DV <= 1'b1;
            r_Button_ID <= 2;
        end
        else if (r_Switch_4 & !i_Switch_4)
        begin
            r_Button_DV <= 1'b1;
            r_Button_ID <= 3;
        end
        else 
        begin
            r_Button_DV <= 1'b0;
            r_Button_ID <= 0;
        end
    end

    assign w_Count_En = (r_Curr_State == PATTERN_ON || r_Curr_State == PATTERN_OFF);
    Count_And_Toggle #(.COUNT_LIMIT(CLKS_PER_SEC/4)) Count_Inst
    (.i_Clk(i_Clk), .i_Enable(w_Count_En), .o_Toggle(w_Toggle)); // w_Toggle will be released on a timer
endmodule

module Count_And_Toggle #(parameter COUNT_LIMIT = 10)
(input i_Clk, input i_Enable, output reg o_Toggle);
reg [$clog2(COUNT_LIMIT)-1:0] r_Counter;
always @(posedge i_Clk)
begin
    if (i_Enable == 1'b1)
    begin
        if (r_Counter == COUNT_LIMIT - 1)
        begin
            o_Toggle <= !o_Toggle;
            r_Counter <= 0;
        end
        else
          r_Counter <= r_Counter + 1;
    end
    else 
        o_Toggle <= 1'b0;
end
endmodule

module Binary_To_7Segment
    (input i_Clk,
    input [3:0] i_Binary_Num,
    output o_Segment_A,
    output o_Segment_B,
    output o_Segment_C,
    output o_Segment_D,
    output o_Segment_E,
    output o_Segment_F,
    output o_Segment_G);
    reg [6:0] r_Hex_Encoding; // this controls which segments are on
    always @(posedge i_Clk)
        begin
           case (i_Binary_Num) 
                4'b0000: r_Hex_Encoding = 7'b1111110; // 0
                4'b0001: r_Hex_Encoding = 7'b0110000; // 1
                4'b0010: r_Hex_Encoding = 7'b1101101; // 2
                4'b0011: r_Hex_Encoding = 7'b1111001; // 3
                4'b0100: r_Hex_Encoding = 7'b0110011; // 4
                4'b0101: r_Hex_Encoding = 7'b1011011; // 5
                4'b0110: r_Hex_Encoding = 7'b1011111; // 6
                4'b0111: r_Hex_Encoding = 7'b1110000; // 7
                4'b1000: r_Hex_Encoding = 7'b1111111; // 8
                4'b1001: r_Hex_Encoding = 7'b1111011; // 9
                4'b1010: r_Hex_Encoding = 7'b1110111; // A
                4'b1011: r_Hex_Encoding = 7'b0011111; // b
                4'b1100: r_Hex_Encoding = 7'b1001110; // C
                4'b1101: r_Hex_Encoding = 7'b0111101; // E
                4'b1110: r_Hex_Encoding = 7'b1001111; // E
                4'b1111: r_Hex_Encoding = 7'b1000111; // F
                default: r_Hex_Encoding = 7'b0000000; // blank
           endcase
        end
    
    assign o_Segment_A = !r_Hex_Encoding[6];
    assign o_Segment_B = !r_Hex_Encoding[5];
    assign o_Segment_C = !r_Hex_Encoding[4];
    assign o_Segment_D = !r_Hex_Encoding[3];
    assign o_Segment_E = !r_Hex_Encoding[2];
    assign o_Segment_F = !r_Hex_Encoding[1];
    assign o_Segment_G = !r_Hex_Encoding[0];
endmodule

module Debounce_Filter #(parameter DEBOUNCE_LIMIT = 20) (
    input i_Clk,
    input i_Bouncy,
    output o_Debounced);
    // $clog2 is a built in function for ceiling log base 2, which tells us the number of binary digits needed to implement the counter.
    reg [$clog2(DEBOUNCE_LIMIT)-1:0] r_Count = 0;
    reg r_State = 1'b0;
    always @(posedge i_Clk)
    begin
        // if the input is different from the current state, but we haven't reached the debounce limit, increment the counter
        if (i_Bouncy !== r_State && r_Count < DEBOUNCE_LIMIT - 1)
        begin
            r_Count <= r_Count + 1; 
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

module LFSR_22
    (input i_Clk,
    output [21:0] o_LFSR_Data,
    output o_LFSR_Done);
    reg [21:0] r_LFSR;
    wire w_XNOR;
    always @(posedge i_Clk)
    begin
        r_LFSR <= {r_LFSR[20:0], w_XNOR};
    end
    assign w_XNOR = r_LFSR[21] ^~ r_LFSR[20]; //xnor gate
    assign o_LFSR_Done = (r_LFSR == 22'd0);
    assign o_LFSR_Data = r_LFSR;
endmodule