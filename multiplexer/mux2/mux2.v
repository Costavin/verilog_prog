        /*      File:           mux2.v
        *       Author:         Vincifori Costantino, costantinovinc@gmail.com
        *       Date:           07/02/2026
        *       Description:    Parametric Width multiplexer:
	*       		selector size:	WLOG bits
	*       		input a size:	2**WLOG bits
        */



`timescale 1ns / 1ps

module mux2 #(parameter WLOG = 5) (a, sel, out, out_neg);
	
	//procedural block and continuous assignment

	input [(1<<WLOG)-1:0] a;
	input [WLOG-1:0] sel;
	output reg out;
	output wire out_neg;
	
	always@(*)	begin
		out = a[sel];
	end

	assign out_neg=~out;


endmodule
			

