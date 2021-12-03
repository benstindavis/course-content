// Benstin Davis EE20B007
//  Multiplying N bit number by 2
// ======================



module multiplyBy2 #(
    parameter N = 8
) (
    A,C
);

input [N-1:0] A;
output [N-1:0] C;


assign C = {A[N-2:0],1'b0}; // C = 2*A
    
endmodule