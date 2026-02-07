        /*      File:           tb_mux3.v
        *       Author:         Vincifori Costantino, costantinovinc@gmail.com
        *       Date:           07/02/2026
        *       Description:    Testbench for the mux3.v module
        */



`timescale 1ns / 1ps

`define PARAMLOG 3
`define PARAMWIDTH 8

module tb_mux3();

	reg clk;
	reg [(1<<`PARAMLOG)-1:0][`PARAMWIDTH-1:0] a;
	reg [`PARAMLOG-1:0] sel;
	wire [`PARAMWIDTH-1:0] out,out_neg;
	integer index=0;

	mux3 #(.WLOG(`PARAMLOG),.WWIDTH(`PARAMWIDTH)) 
		dut (.a(a), .sel(sel), .out(out), .out_neg(out_neg));

	initial begin
		$dumpfile("mux3_test.vcd");
                $dumpvars(0,tb_mux3);
		for (index=0; index < (1<<`PARAMLOG); index++) begin
			a[index]=0;
		end
		a=0; clk=0; sel=0;
		
		$monitor("Time = %0d clk=%d f(A-%b, S-%b)->(%d,%d)",$time, clk, a, sel, out,
out_neg);

		for (index = 0; index < (1<<`PARAMLOG); index++ ) begin
			#2; a[1]=12;sel=index; 
		end
	
		#10
		$finish;

	end


	always begin
		#5 clk = ~clk;
	end


endmodule
