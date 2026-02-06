`timescale 1ns / 1ps

module mux2 #(parameter WLOG = 5) (a, sel, out, out_neg);
	
	//procedural block and continuous assignment
	//parameter WLOG = 6;
	//parameter WGLOBAL = (2 << WLOG);

	input [(1<<WLOG)-1:0] a;
	input [WLOG-1:0] sel;
	output reg out;
	output wire out_neg;
	
	always@(*)	begin
		out = a[sel];
	end

	assign out_neg=~out;


endmodule
			

