// Test Bench for Johnson Counter


module TB_Counter_Johnson #(
    parameter N = 4
) (
);


reg clk;
reg clr;

wire [N-1:0] Q;


Counter_Johnson #(.N(N)) C0 (.clk(clk),.clr(clr),.Q(Q));


initial begin
    clk = 1;
    clr = 0;
    #20

    clr = 1;
end
    
always begin
    #10 clk = ~clk;
end

endmodule