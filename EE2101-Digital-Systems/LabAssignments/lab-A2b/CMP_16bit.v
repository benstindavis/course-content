// Benstin Davis EE20B007
// Magnitude comparator
// ============================




module CMP_16bit #(
    parameter N = 16
) (
    input [N-1:0] num1,num2,
    output g,e,l
);


wire e0,e1,g0,g1,l0,l1;


CMP_8bit C0 (num1[N/2-1:0],num2[N/2-1:0],g0,e0,l0);
CMP_8bit C1 (num1[N-1:N/2],num2[N-1:N/2],g1,e1,l1);

assign e = e0 & e1;
assign g = g1 | (e1 & g0);
assign l = ~e & ~g; 

endmodule