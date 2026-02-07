        /*      File:           mux3.v
        *       Author:         Vincifori Costantino, costantinovinc@gmail.com
        *       Date:           07/02/2026
        *       Description:    Parametric Width multiplexer with paramteric
	*       		inputs:
        *                       selector size:  WLOG bits
        *                       input a size:   [2**WLOG][WWIDTH] bits
	*
        */



`timescale 1ns / 1ps

module mux3 #(parameter WLOG = 5, WWIDTH = 8) (a, sel, out, out_neg);

	input [(1<<WLOG) -1:0][WWIDTH-1:0] a;
	input [WLOG-1:0] sel;
	output reg [WWIDTH-1:0] out;
	output wire [WWIDTH-1:0] out_neg;

	always @(*)	begin

		out = a[sel];

	end

	assign out_neg=~out;


	


endmodule

