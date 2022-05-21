// Benstin Davis EE20B007
//  Dividing N bit number by 2
// ======================



module divideBy2 #(
    parameter N = 8
) (
    A,C
);

input [N-1:0] A;
output [N-1:0] C;


assign C = {1'b0,A[N-1:1]}; // C = 2*A
    
endmodule