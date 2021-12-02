// WARNING : This code has not been tested!!!


module JK_FlipFlop(
    input clk, 
    input reset,
    input J,
    input K,

    output reg Q

);
always@(posedge clk or posedge reset) 
begin
    if(reset == 1)
        Q <= 1'b0;
    else
        if(J == 0 && K == 0)
            Q <= Q;
        else if(J == 0 && K == 1)
            Q <= 1'b0;
        else if(J == 1 && K == 0)
            Q <= 1'b1;
        else if (J == 1 && K == 1)
            Q <= ~Q;     
end

endmodule