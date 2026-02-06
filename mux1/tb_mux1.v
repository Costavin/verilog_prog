`timescale 1ns / 1ns

module tb_mux1();
	reg clk;
	reg a, b;
	reg sel;
	wire out, out_neg;
	// single mux 2_to_1 single bit
	mux1 dut( .a(a), .b(b), .sel(sel),
							.out(out), .out_neg(out_neg)
						);
	initial
	begin
		$dumpfile("mux1.vcd");
		$dumpvars(0,tb_mux1);
		a=0;b=0;sel=0;clk=0;
		$monitor ("Time = %0d clk=%d f(A-%d,B-%d,S-%d)->(%d,%d))",$time, clk,a,b,sel,out,out_neg);	
		#5; a=1;b=0;sel=0;
		#7; a=1;b=0;sel=1;
		#10; a=1;b=1;sel=0;
		#15; a=1;b=0;sel=1;
		#20; a=1;b=0;sel=0;
		#5; a=1;b=0;sel=1;
		// something subtle about synthesis and verification!!!! The X value, don't care for synthesis and unknown in simulation
		#5; a=1'bx;b=0;sel=1;
		#5; a=1'bx;b=0;sel=0;
		#5; a=1;b=0;sel=1'bx;
		#20;
		$finish;
	end
	
	always 
	begin
		#5 clk=~clk;
	end
endmodule
