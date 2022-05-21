// Benstin Davis EE20B007
// Test bench 1
// For ASCII 32 bit to BCD 16 bit
// ======================================================



module tb1 #(
    parameter N = 32,
    parameter M = 16
) ();


reg [N-1:0] A_num;
wire [M-1:0] B_num;
wire C;


ASCII32bit_BCD16bit #(.N(N),.M(M)) M0 (A_num,B_num,C);

initial begin
        A_num = 32'b00110001001100100011001100110100; 
#100
        A_num = 32'b00111000001110000011100000111000;
#100
        A_num = 32'b01110011011100110111001101110011;
#100
        A_num = 32'b10111000001110000011100011110000;
        
end
    
endmodule