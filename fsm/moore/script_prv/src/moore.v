module moore(i_clk, o_led);
//module moore(i_clk, o_led, i_display_enable);

//input	wire	i_clk, i_display_enable;
input	wire		i_clk;
output	reg	[7:0]	o_led;
	reg	[3:0]	led_index;
//reg	enable;

initial led_index = 4'h0;

//Update the state at pos edge of the clock
always @(posedge i_clk) begin
	cover((led_index == 4'h0)&&(o_led == 8'h0));	//check if property is live
	assert(led_index <= 4'he);
	//enable <= i_display_enable;
	if (led_index >= 4'he)
		led_index <= 4'h1;
	else
		led_index <= led_index + 1'b1;
end

always @(*)
//if (enable)
	case(led_index)
		4'h1: o_led = 8'h01;
		4'h2: o_led = 8'h02;
		4'h3: o_led = 8'h04;
		4'h4: o_led = 8'h08;
		4'h5: o_led = 8'h10;
		4'h6: o_led = 8'h20;
		4'h7: o_led = 8'h40;
		4'h8: o_led = 8'h80;
		4'h9: o_led = 8'h40;
		4'ha: o_led = 8'h20;
		4'hb: o_led = 8'h10;
		4'hc: o_led = 8'h08;
		4'hd: o_led = 8'h04;
		4'he: o_led = 8'h02;
	default: o_led = 8'h00;
	endcase	
//else
//	o_led = 0;

endmodule

