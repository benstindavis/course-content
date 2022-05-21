// EE20B007 
// 4:1 MUX 
// ================


module MUX_4to1 #(
    parameter N = 8
) (
    A,B,C,D,sel,cout
);

input [N-1:0] A,B,C,D;
input [1:0] sel;
output [N-1:0] cout;


reg [1:0] nsel;
wire [N-1:0] t0,t1,t2;

MUX_2to1 #(.N(N)) M0 (A,B,sel[0],t0);
MUX_2to1 #(.N(N)) M1 (C,D,sel[0],t1);

MUX_2to1 #(.N(N)) M3 (t0,t1,sel[1],t2);

assign cout = t2;


endmodule