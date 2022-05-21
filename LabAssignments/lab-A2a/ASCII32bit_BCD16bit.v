// Benstin Davis EE20B007
//  Module for Converting 32 bit ASCII to 16 bit BCD
//  Uses 4 "8 bit ASCII to 4 bit BCD" modules 
// ======================================================


module ASCII32bit_BCD16bit #(
    parameter N = 32,
    parameter M = 16
) (
    ASCII_num, BCD_num, valid
);





input [N-1:0] ASCII_num;
output [M-1:0] BCD_num; 
output valid;

wire C0,C1,C2,C3;
wire [(M-1)/4:0] B0,B1,B2,B3;

ASCII8bit_BCD4bit #(.N(N),.M(M)) M0 (ASCII_num[7:0],B0,C0);
ASCII8bit_BCD4bit #(.N(N),.M(M)) M1 (ASCII_num[15:8],B1,C1);
ASCII8bit_BCD4bit #(.N(N),.M(M)) M2 (ASCII_num[23:16],B2,C2);
ASCII8bit_BCD4bit #(.N(N),.M(M)) M3 (ASCII_num[31:24],B3,C3);


assign valid = C0&C1&C2&C3;

assign BCD_num[3:0] = valid ? B0 : 4'bxxxx;
assign BCD_num[7:4] = valid ? B1 : 4'bxxxx;
assign BCD_num[11:8] = valid ? B2 : 4'bxxxx;
assign BCD_num[15:12] = valid ? B3 : 4'bxxxx;

    
endmodule


