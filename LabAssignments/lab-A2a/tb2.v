// Benstin Davis EE20B007
// Test bench 2
// For BCD 4 bit to ASCII 8 bit
// ======================================================



module tb2 #(
    parameter N = 4,
    parameter M = 8
) ();


reg [N-1:0] A_num;
wire [M-1:0] B_num;
wire C;


BCD4bit_ASCII8bit #(.N(N),.M(M)) M0 (A_num,B_num,C);

initial begin
       
        A_num = 4'b0000;  
        #100
        A_num = 4'b0001;  
        #100
        A_num = 4'b0010;  
        #100
        A_num = 4'b0011;  
        #100
        A_num = 4'b0100;  
        #100 
        A_num = 4'b0101;  
        #100
        A_num = 4'b0110;  
        #100
        A_num = 4'b0111;  
        #100
        A_num = 4'b1000;  
        #100
        A_num = 4'b1001;  
        #100




        A_num = 4'b1010;
        #100
        A_num = 4'b1011;
        #100
        A_num = 4'b1100;
        #100
        A_num = 4'b1101;
        #100
        A_num = 4'b1110;
        #100
        A_num = 4'b1111;
#100
        A_num = 4'b1111;

        
end
    
endmodule