// WARNING : This code has not been tested!!!

module SR_Latch (
    input clk,
    input S,
    input R,
    input reset,
    output reg Q,
    output reg Qbar

);

always@(posedge clk or posedge reset)
begin
if(reset)
begin
	Q <= 1'b0; 
end

else 
begin 
	if (clk == 1'b1)
        if(S == 0 && R == 0)
            Q <= Q;
        else if (S == 0 && R == 1)
            Q <= 1'b0;
        else if (S == 1 && R == 0)
            Q <= 1'b1;    
    else 
	Q <= Q; 

end 
end

assign Qbar = ~Q; 

    
endmodule