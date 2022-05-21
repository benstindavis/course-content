// Benstin Davis EE20B007
// Test bench 3
// For BCD 16 bit to ASCII 32 bit
// ======================================================



module tb3 #(
    parameter N = 16,
    parameter M = 32
) ();


reg [N-1:0] A_num;
wire [M-1:0] B_num;
wire C;


BCD16bit_ASCII32bit #(.N(N),.M(M)) M0 (A_num,B_num,C);

initial begin
       
        A_num = 16'b0000000100100011;  
        #100
        A_num = 16'b0101010101010101;  
        #100
        A_num = 16'b1100101010110011;  
        #100
        A_num = 16'b1111111111111111;  
    

        
end
    
endmodule