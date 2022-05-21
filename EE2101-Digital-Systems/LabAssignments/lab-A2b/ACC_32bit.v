// Benstin Davis EE20B007
// Accumulator
// ============================



module ACC_32bit #(
    parameter N = 32
) (
    
    input [N-1:0]num1,
    input [N-1:0]num2,
    input [N-1:0]num3,
    output [2*N:0]out
);
    

wire [2*N-1:0] ab,D;


Array_MUL #(.N(N),.M(N)) M0 (.num1(num1),.num2(num2),.k(1'b0),.out(ab));

assign D = {{(N){1'b0}},num3};

Add_Sub_Nbit #(.N(2*N)) A0 (ab,D,1'b0,out);

endmodule