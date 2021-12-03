// WARNING : This code has not been tested!!!
// N bit Synchronous up counter using T Flip Flops
// Only till 4 bits

module Counter_Nbit_Sync #(
    parameter N = 4
)
(
    input clk,
    input reset,
    input M,
    output [N-1:0]Q
);


reg [N-1:0] MQbar, MbarQ , MxQ;

T_FlipFlop TFF (.clk(clk),.reset(reset),.T(1'b1),.Q(Q[0]));

assign  MQbar[0] = M & ~Q[0];
assign  MbarQ[0] = ~M & Q[0];
assign MxQ[0] = MQbar[0] | MbarQ[0];


T_FlipFlop TFF_ (.clk(clk),.reset(reset),.T(MxQ[0]),.Q(Q[1]));

generate
    genvar i;
    for(i = 1; i < N-1; i = i + 1) begin : Gen_TFF 
        assign MQbar[i+1] = MQbar[i] & ~Q[i];
        assign MbarQ[i+1] = MbarQ[i] & Q[i];

        assign MxQ[i] = MQbar[i] | MbarQ[i];

        T_FlipFlop TFF_ (.clk(clk),.reset(reset),.T(MxQ[i]),.Q(Q[i+1]));
    
    end
endgenerate



endmodule