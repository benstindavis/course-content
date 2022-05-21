// WARNING : This code has not been tested!!!


module T_FlipFlop(
    input clk, 
    input reset,
    input T,

    output reg Q

);
always@(posedge clk or posedge reset) 
begin
    if(reset == 1)
        Q <= 1'b0;
    else
        if(T == 0)
            Q <= Q;
        else if (T == 1)
            Q <= ~Q;     
end

endmodule