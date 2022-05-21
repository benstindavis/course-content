// Benstin Davis EE20B007
//  Module for Converting 16 bit BCD to 32 bit ASCII 
//  Uses 4 "4 bit BCD to 8 bit ASCII" modules 
// ======================================================



module BCD16bit_ASCII32bit #(
    parameter N = 16,
    parameter M = 32
) (
     BCD_num,ASCII_num, valid
);




input [N-1:0] BCD_num;
output [M-1:0] ASCII_num; 
output valid;

wire C0,C1,C2,C3;
wire [(M-1)/4:0] A0,A1,A2,A3;

BCD4bit_ASCII8bit M0 (BCD_num[3:0],A0,C0);
BCD4bit_ASCII8bit M1 (BCD_num[7:4],A1,C1);
BCD4bit_ASCII8bit M2 (BCD_num[11:8],A2,C2);
BCD4bit_ASCII8bit M3 (BCD_num[15:12],A3,C3);


assign valid = C0&C1&C2&C3;

assign ASCII_num[7:0] = valid ? A0 : 8'bxxxxxxxx;
assign ASCII_num[15:8] = valid ? A1 : 8'bxxxxxxxx;
assign ASCII_num[23:16] = valid ? A2 : 8'bxxxxxxxx;
assign ASCII_num[31:24] = valid ? A3 : 8'bxxxxxxxx;

    
endmodule


