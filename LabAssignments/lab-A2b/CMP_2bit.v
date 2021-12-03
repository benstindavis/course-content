// Benstin Davis EE20B007
// Magnitude comparator
// ============================




module CMP_2bit #(
    parameter N = 2
) (
    input [N-1:0] num1,num2,
    output g,e,l
);


wire e0,e1,g0,g1,l0,l1;


CMP_1bit C0 (num1[0],num2[0],g0,e0,l0);
CMP_1bit C1 (num1[1],num2[1],g1,e1,l1);

assign e = e0 & e1;
assign g = g1 | (e1 & g0);
assign l = ~e & ~g; 

endmodule