// Benstin Davis EE20B007
// 4x4 X 4x1 Matrix Multiplier 
// ============================



module Matrix_MUL #(
    parameter N = 32
) (
    input [4*N-1:0] A1,A2,A3,A4,  // For each row a 4N bit long number 
    input [N-1:0] X1,X2,X3,X4,
    

    output [2*N-1:0] Y1,Y2,Y3,Y4
);

reg clear;
reg clk;
reg preset;

reg [N-1:0] A1j,A2j,A3j,A4j;
reg [N-1:0] Xi;



MAC #(.N(N)) M0 (.clk(clk),.preset(preset),.clear(clear),.A(A1j),.B(Xi),.out(Y1));
MAC #(.N(N)) M1 (.clk(clk),.preset(preset),.clear(clear),.A(A2j),.B(Xi),.out(Y2));
MAC #(.N(N)) M2 (.clk(clk),.preset(preset),.clear(clear),.A(A3j),.B(Xi),.out(Y3));
MAC #(.N(N)) M3 (.clk(clk),.preset(preset),.clear(clear),.A(A4j),.B(Xi),.out(Y4));





initial begin   
    clk =1;
    #5
    preset = 0;
    clear = 0;
    #5
    preset = 1;
    clear = 1;

    Xi = X1; 
    A1j = A1[4*N-1:3*N];
    A2j = A2[4*N-1:3*N];
    A3j = A3[4*N-1:3*N];
    A4j = A4[4*N-1:3*N];
    #10


    Xi = X2; 
    A1j = A1[3*N-1:2*N];
    A2j = A2[3*N-1:2*N];
    A3j = A3[3*N-1:2*N];
    A4j = A4[3*N-1:2*N];
    #10


    Xi = X3; 
    A1j = A1[2*N-1:N];
    A2j = A2[2*N-1:N];
    A3j = A3[2*N-1:N];
    A4j = A4[2*N-1:N];
    #10


    Xi = X4; 
    A1j = A1[N-1:0];
    A2j = A2[N-1:0];
    A3j = A3[N-1:0];
    A4j = A4[N-1:0];

    #10

    clk = 1'bz;
end



always
#5 clk = ~clk; // clock period 10 units of delay 


    
endmodule