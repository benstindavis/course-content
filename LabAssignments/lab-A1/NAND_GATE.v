// Benstin Davis EE20B007
// NAND Gate
// ======================

module NAND_GATE #(
    parameter N = 8
)
(
    A,B, C
);

input [N-1:0] A,B;
output [N-1:0] C;

wire [N-1:0] t0; 

AND_GATE #(.N(N)) G0 (A,B,t0);
NOT_GATE #(.N(N)) G1 (t0,C);


    
endmodule