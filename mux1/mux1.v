`timescale 1ns / 1ns

module mux1(a, b, sel, out, out_neg);
input wire a, b, sel;
/*
	//dataflow design-style
	output wire out, out_neg;
	assign out = sel ? a : b;	//continuous assignment, left wire, right wire/reg
	assign out_neg = ~out;
*/
	
	// gate-level design-style
	output wire out, out_neg;
	wire out1, out2, selb;
	and a1 (out1, a, sel);
	not i1 (selb, sel);
	and a2 (out2, b , selb);
	or o1 (out, out1, out2);
	assign out_neg = ~out;

/*
	//behavioural
	output reg out;
	output out_neg;		//treated as reg
	//procedural design-style (note the absence of a complete list of inputs!!!)
	always@(*)
	begin
	if (sel) 
		out = a;
	else 
		out = b;
	end
	assign out_neg = ~out;
	//procedural block and continuous assignment evaluated in parallel,
	//but assignment evaluated second due to constraints
*/

endmodule

