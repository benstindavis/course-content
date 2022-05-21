// Benstin Davis EE20B007
// Magnitude comparator
// ============================



module CMP_1bit (
    input num1,num2,
    output g,e,l
);

assign g = num1 & ~num2;
assign l = ~num1 & num2;
assign e = ~(num1^num2);
    
endmodule