// WARNING : This code has not been tested!!!




module Shift_Register_SISO #(
    parameter N = 4
) (
    input clk,
    input sin,
    input preset,
    input clear,
    output sout
);
    

wire [N-1:0] Dn;

D_FlipFlop_PC DFF0 (.clk(clk),.preset(preset),.clear(clear),.D(sin),.Q(Dn[0]));

generate
    genvar i;
    for(i = 1; i < N  ; i = i + 1) begin: Gen_Reg
        D_FlipFlop_PC DFF_ (.clk(clk),.preset(preset),.clear(clear),.D(Dn[i-1]),.Q(Dn[i]));

    end
endgenerate

assign sout = Dn[N-1];
endmodule