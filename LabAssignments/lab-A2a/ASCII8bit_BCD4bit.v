// Benstin Davis EE20B007
//  Module for Converting 8 bit ASCII to 4 bit BCD
// ======================================================



module ASCII8bit_BCD4bit #(
    parameter N = 8,
    parameter M = 4
) (
    ASCII_num, BCD_num, valid
);

input [N-1:0] ASCII_num;
output [M-1:0] BCD_num; 
output valid;




assign valid = !ASCII_num[7] & !ASCII_num[6] & ASCII_num[5] & ASCII_num[4];
assign BCD_num = valid ? ASCII_num[3:0] : 4'bxxxx;




    
endmodule