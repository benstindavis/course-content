// WARNING : This code has not been tested!!!


module D_Latch(clk, D, reset, Q, Qbar);

input clk; 
input D; 
input reset;
output reg Q;
output Qbar; 

always@(clk, reset, D)
begin
if(reset)
begin
	Q <= 1'b0; 
end

else 
begin 
	if (clk == 1'b1)
	Q <= D; 
    else 
	Q <= Q; 

end 
end

assign Qbar = ~Q; 

endmodule