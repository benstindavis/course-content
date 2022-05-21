// EE20B007 
// 2:1 MUX 
// ================


module MUX_2to1 #(
    parameter N = 8
) (
    A,B,sel,cout
);

input [N-1:0] A,B;
input sel;
output [N-1:0] cout;


reg nsel;
wire [N-1:0] t0,t1;

assign nsel = !sel;

assign cout = nsel ? A:B;

// assign t0 = nsel & A;
// assign t1 = sel & B;

// assign cout = t0 | t1;

endmodule