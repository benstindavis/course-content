// EE20B007 
// 8:1 MUX 
// ================


module MUX_8to1 #(
    parameter N = 8
) (
    a0,a1,a2,a3,a4,a5,a6,a7,sel,cout
);

input [N-1:0] a0,a1,a2,a3,a4,a5,a6,a7;
input [2:0] sel;
output [N-1:0] cout;


reg [1:0] sel10; 
wire [N-1:0] t0,t1,t2;

assign sel10 = {sel[1:0]};


MUX_4to1 #(.N(N)) M0 (a0,a1,a2,a3,sel10,t0);
MUX_4to1 #(.N(N)) M1 (a4,a5,a6,a7,sel10,t1);
MUX_2to1 #(.N(N)) M2 (t0,t1,sel[2],t2);

assign cout = t2;








endmodule