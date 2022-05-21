// Benstin Davis EE20B007
//  Parent module
// ======================



module LAB_A1 #(
    parameter N = 8
)(
    a,b,S,cout
);

input [N-1:0] a;
input [N-1:0] b;
input [2:0] S;
output [N-1:0] cout;

wire [N-1:0] a0,a1,a2,a3,a4,a5,a6,a7;

AND_GATE #(.N(N)) A0 (a,b,a0);
OR_GATE #(.N(N)) A1 (a,b,a1);
NAND_GATE #(.N(N)) A2 (a,b,a2);
NOR_GATE #(.N(N)) A3 (a,b,a3);
XOR_GATE #(.N(N)) A4 (a,b,a4);
XNOR_GATE #(.N(N)) A5 (a,b,a5);
multiplyBy2 #(.N(N)) A6 (a,a6);
divideBy2 #(.N(N)) A7 (a,a7);


MUX_8to1 #(.N(N)) MUX0 (a0,a1,a2,a3,a4,a5,a6,a7,S,cout);



    
endmodule