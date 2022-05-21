// Benstin Davis EE20B007
// AND Gate
// ======================

module AND_GATE 
#(
    parameter N = 8
)
(
    A,B, C
);

input [N-1:0] A,B;
output [N-1:0] C;

assign C = A & B;
    
endmodule