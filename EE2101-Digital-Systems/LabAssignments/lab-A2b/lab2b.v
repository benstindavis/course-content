// Benstin Davis EE20B007
// Assignment 2 Part B main module
// ============================




module  lab2b #(
    parameter N = 32
) (
    input [N-1:0] num1,num2,num3,
    input [2:0]sel,
    output [N-1:0] out
);

wire [N:0] T0,T1;
wire [N-1:0] T2,T3,T4;
wire [2*N:0] T7;
wire [2*N-1:0] T5,T6;





Add_Sub_Nbit #(.N(N)) A0 (.A(num1),.B(num2),.k({1'b0}), .S(T0));
Add_Sub_Nbit #(.N(N)) A1 (.A(num1),.B(num2),.k({1'b1}), .S(T1));
CMP_32bit #(.N(N)) C0 (.num1(num1),.num2(num2),.g(T2),.e(T3),.l(T4));
Array_MUL #(.N(N),.M(N)) M0 (.num1(num1),.num2(num2),.k({1'b0}), .out(T5));
Array_MUL #(.N(N),.M(N)) M1 (.num1(num1),.num2(num2),.k({1'b1}), .out(T6));
ACC_32bit #(.N(N)) Ac1 (.num1(num1),.num2(num2),.num3(num3), .out(T7));

MUX_8to1 #(.N(N)) DUT (T0[N-1:0],T1[N-1:0],T2,T3,T4,T5[N-1:0],T6[N-1:0],T7[N-1:0],sel,out);
    
endmodule