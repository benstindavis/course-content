// Benstin Davis EE20B007
//  Module for Converting 8 bit ASCII to 4 bit BCD
// ======================================================


module BCD4bit_ASCII8bit #(
    parameter N = 4,
    parameter M = 8
) (
    BCD_num,ASCII_num,valid
);

input [N-1:0] BCD_num;
output [M-1:0] ASCII_num;
output valid;

// Not valid numders 
// 1010 - 10
// 1011 - 11
// 1100 - 12
// 1101 - 13
// 1110 - 14
// 1111 - 15



assign valid = !((BCD_num[3] & BCD_num[1]) | (BCD_num[3] & BCD_num[2]));


assign ASCII_num = valid ? {4'b0011,BCD_num} : 8'bxxxxxxxx;



    
endmodule