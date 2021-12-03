module TB_lab2b();
parameter N = 32;
reg [N-1:0]A,B,D;
reg [2:0]S;
wire [N-1:0]y;
lab2b #(.N(N)) DUT (.num1(A),.num2(B),.num3(D),.sel(S),.out(y));

initial 
begin

A = 32'd256; B = 32'd3524; D=32'd1024;

S = 3'b000; 
#10 S = 3'b001; 
#10 S = 3'b010; 
#10 S = 3'b011; 
#10 S = 3'b100; 
#10 S = 3'b101; 
#10 S = 3'b110;
#10 S = 3'b111; 

 

end 

endmodule