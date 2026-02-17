module blink(i_clk, o_led);

	parameter	CLOCK_RATE_HZ	= 300_000;
	parameter	WIDTH		= 32;
	parameter [WIDTH-1:0] INCREMENT	= (1<<(WIDTH-1))/(CLOCK_RATE_HZ);

	input	wire	i_clk;
	output 	wire	o_led;
	reg	[WIDTH-1:0]	counter;

	initial	counter	= 0;
	always @(posedge i_clk)
		counter <= counter + INCREMENT;
	
	assign o_led = counter[WIDTH-1];

endmodule;
