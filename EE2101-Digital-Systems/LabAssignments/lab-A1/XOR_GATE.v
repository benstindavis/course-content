// Benstin Davis EE20B007
// XOR Gate
// ======================

module XOR_GATE #(
    parameter N = 8
)
(
    A,B, C
);

input [N-1:0] A,B;
output [N-1:0] C;

wire [N-1:0] t0,t1,t2,t3; 

NOT_GATE #(.N(N)) G0 (A,t0);
NOT_GATE #(.N(N)) G1 (B,t1);

AND_GATE #(.N(N)) G2 (A,t1,t2);
AND_GATE #(.N(N)) G3 (t0,B,t3);

OR_GATE #(.N(N)) G4 (t2,t3,C);



    
endmodule