        /*      File:           mux1.v
        *       Author:         Vincifori Costantino, costantinovinc@gmail.com
        *       Date:           07/02/2026
        *       Description:    testbench for the parametric mux2.v module
        */



`timescale 1ns / 1ps

`define	PARAMLOG 3

module tb_mux2();

	reg clk;
	reg [(1 << `PARAMLOG)-1:0] a;
	reg [`PARAMLOG-1:0] sel;
	wire out, out_neg;

	mux2 #(.WLOG(`PARAMLOG))	
		dut(.a(a), .sel(sel), .out(out), .out_neg(out_neg));

	initial	begin
		$dumpfile("mux2_test.vcd");
		$dumpvars(0,tb_mux2);

		a=0; clk=0; sel=0;
		$monitor("Time = %0d clk=%d f(A-%b, S-%b)->(%d,%d)",$time, clk, a, sel, out, out_neg);
		//$dumpfile("mux2_test.vcd");
		//$dumpvars(0,tb_mux2);
		#1; a=0;sel=3;
		#1; a=1;sel=3;
		#1; a=2;sel=3;
		#1; a=3;sel=3;
		#1; a=4;sel=3;
		#1; a=5;sel=3;
		#1; a=6;sel=3;
		#1; a=7;sel=3;
		#1; a=8;sel=3;
		#1; a=9;sel=3;
		#1; a=10;sel=3;
		#1; a=11;sel=3;
		#1; a=12;sel=3;
		#1; a=13;sel=3;
		#1; a=14;sel=3;
		#1; a=15;sel=3;
		#1; a=16;sel=3;
		#20;
		$finish;
	end

	always	begin
		#5 clk = ~clk;
	end


endmodule


