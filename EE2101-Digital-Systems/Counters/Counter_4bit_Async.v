// WARNING : This code has not been tested!!!
// N bit Asynchronous up counter using T Flip Flops


module Counter_Nbit_Async #(
    parameter N = 4
)
(
    input clk,
    input reset,
    output [N-1:0]Q
);

T_FlipFlop TFF (.clk(clk),.reset(reset),.T(1'b1),.Q(Q[0]));

generate
    genvar i;
    for(i = 0; i < N-1; i = i + 1) begin : Gen_TF  
        T_FlipFlop TFF_ (.clk(Q[i]),.reset(reset),.T(1'b1),.Q(Q[i+1]));
    end
endgenerate



endmodule