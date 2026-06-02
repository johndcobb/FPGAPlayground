module UART_Loopback_Top
  (input  i_Clk,       // Main Clock
   input  i_UART_RX,   // UART RX Data
   output o_UART_TX,   // UART TX Data
   // Segment1 is upper digit, Segment2 is lower digit
   output o_Segment1_A,
   output o_Segment1_B,
   output o_Segment1_C,
   output o_Segment1_D,
   output o_Segment1_E,
   output o_Segment1_F,
   output o_Segment1_G,
   //
   output o_Segment2_A,
   output o_Segment2_B,
   output o_Segment2_C,
   output o_Segment2_D,
   output o_Segment2_E,
   output o_Segment2_F,
   output o_Segment2_G   
   ); 
 
  wire w_RX_DV;
  wire [7:0] w_RX_Byte;
  wire w_TX_Active, w_TX_Serial;
 
  wire w_Segment1_A, w_Segment2_A;
  wire w_Segment1_B, w_Segment2_B;
  wire w_Segment1_C, w_Segment2_C;
  wire w_Segment1_D, w_Segment2_D;
  wire w_Segment1_E, w_Segment2_E;
  wire w_Segment1_F, w_Segment2_F;
  wire w_Segment1_G, w_Segment2_G;
   
  // 25,000,000 / 115,200 = 217
  UART_RX #(.CLKS_PER_BIT(217)) UART_RX_Inst
  (.i_Clock(i_Clk),
   .i_RX_Serial(i_UART_RX),
   .o_RX_DV(w_RX_DV),
   .o_RX_Byte(w_RX_Byte));
    
  UART_TX #(.CLKS_PER_BIT(217)) UART_TX_Inst
  (.i_Clock(i_Clk),
   .i_TX_DV(w_RX_DV),      // Pass RX to TX module for loopback
   .i_TX_Byte(w_RX_Byte),  // Pass RX to TX module for loopback
   .o_TX_Active(w_TX_Active),
   .o_TX_Serial(w_TX_Serial),
   .o_TX_Done());
   
  // Drive UART line high when transmitter is not active
  assign o_UART_TX = w_TX_Active ? w_TX_Serial : 1'b1; 
   
   
  // Binary to 7-Segment Converter for Upper Digit
  Binary_To_7Segment SevenSeg1_Inst
  (.i_Clk(i_Clk),
   .i_Binary_Num(w_RX_Byte[7:4]),
   .o_Segment_A(w_Segment1_A),
   .o_Segment_B(w_Segment1_B),
   .o_Segment_C(w_Segment1_C),
   .o_Segment_D(w_Segment1_D),
   .o_Segment_E(w_Segment1_E),
   .o_Segment_F(w_Segment1_F),
   .o_Segment_G(w_Segment1_G));
    
  assign o_Segment1_A = ~w_Segment1_A;
  assign o_Segment1_B = ~w_Segment1_B;
  assign o_Segment1_C = ~w_Segment1_C;
  assign o_Segment1_D = ~w_Segment1_D;
  assign o_Segment1_E = ~w_Segment1_E;
  assign o_Segment1_F = ~w_Segment1_F;
  assign o_Segment1_G = ~w_Segment1_G;
   
   
  // Binary to 7-Segment Converter for Lower Digit
  Binary_To_7Segment SevenSeg2_Inst
  (.i_Clk(i_Clk),
   .i_Binary_Num(w_RX_Byte[3:0]),
   .o_Segment_A(w_Segment2_A),
   .o_Segment_B(w_Segment2_B),
   .o_Segment_C(w_Segment2_C),
   .o_Segment_D(w_Segment2_D),
   .o_Segment_E(w_Segment2_E),
   .o_Segment_F(w_Segment2_F),
   .o_Segment_G(w_Segment2_G));
   
  assign o_Segment2_A = ~w_Segment2_A;
  assign o_Segment2_B = ~w_Segment2_B;
  assign o_Segment2_C = ~w_Segment2_C;
  assign o_Segment2_D = ~w_Segment2_D;
  assign o_Segment2_E = ~w_Segment2_E;
  assign o_Segment2_F = ~w_Segment2_F;
  assign o_Segment2_G = ~w_Segment2_G;
   
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