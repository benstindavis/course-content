// Benstin Davis EE20B007
// Magnitude comparator
// ============================




module CMP_32bit #(
    parameter N = 32
) (
    input [N-1:0] num1,num2,
    output [N-1:0] g,e,l
);


wire e0,e1,g0,g1,l0,l1;


CMP_16bit C0 (num1[N/2-1:0],num2[N/2-1:0],g0,e0,l0);
CMP_16bit C1 (num1[N-1:N/2],num2[N-1:N/2],g1,e1,l1);

assign e = {{(N-1){1'b0}},{e0 & e1}};
assign g = {{(N-1){1'b0}},{g1 | (e1 & g0)}};
assign l = {{(N-1){1'b0}},{~e[0] & ~g[0]}}; 

endmodule