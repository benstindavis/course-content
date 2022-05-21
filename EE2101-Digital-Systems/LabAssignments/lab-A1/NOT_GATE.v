// Benstin Davis EE20B007
// NOT Gate
// ======================


module NOT_GATE #(
    parameter N = 8
)
(
    A, C
);

input [N-1:0] A;
output [N-1:0] C;

assign C = !A;
endmodule