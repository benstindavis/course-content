module TB_LAB_A1 #(
    parameter N = 4 
)();


reg [N-1:0] A,B;
reg [2:0] sel;
wire [N-1:0] C;


LAB_A1 #(.N(N)) L0 (A,B,sel,C);
    

initial begin
    A = 4'b1010;B = 4'b1011; 
    
    sel = 3'b000;
#10 sel = 3'b001;
#10 sel = 3'b010;
#10 sel = 3'b011;
#10 sel = 3'b100;
#10 sel = 3'b101;

#10 
//A = 4'b1111 ; 
sel = 3'b110;
#10 

sel = 3'b111;





end    
endmodule