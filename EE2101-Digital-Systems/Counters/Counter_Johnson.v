// WARNING : This code has not been tested!!!



module Counter_Johnson #(
    parameter N = 4
) 
(
    input clk,
    input clr,
    output [N-1:0]Q
);



D_FlipFlop_PC DFF0 (.clk(clk),.preset(1'b1),.clear(clr),.D(~Q[N-1]),.Q(Q[0]));


generate
    genvar i;
    for(i = 1 ; i < N ; i = i + 1) begin : Gen_DFF
        D_FlipFlop_PC DFF_ (.clk(clk),.preset(1'b1),.clear(clr),.D(Q[i-1]),.Q(Q[i]));
    end

endgenerate

    
endmodule