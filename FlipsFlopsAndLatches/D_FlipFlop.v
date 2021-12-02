// WARNING : This code has not been tested!!!


module D_FlipFlop(clk, reset, D, Q, Qbar);

input clk; 
input reset;
input D; 
output reg Q;
output Qbar; 

always@(posedge clk or posedge reset) 
begin

if(reset == 1)
Q <= 1'b0;
else
Q <= D; 

end

assign Qbar = ~Q; 

endmodule