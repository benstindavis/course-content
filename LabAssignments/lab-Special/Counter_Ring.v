// EE20B007  Benstin Davis D
// Ring Counter
// N States

module Counter_Ring #(
    parameter N = 8
) 
(
    input clk,
    input ori,
    output [N-1:0]Q
);



D_FlipFlop_PC DFF0 (.clk(clk),.preset(ori),.clear(1'b1),.D(Q[N-1]),.Q(Q[0]));


generate
    genvar i;
    for(i = 1 ; i < N ; i = i + 1) begin : Gen_DFF
        D_FlipFlop_PC DFF_ (.clk(clk),.preset(1'b1),.clear(ori),.D(Q[i-1]),.Q(Q[i]));
    end

endgenerate

    
endmodule