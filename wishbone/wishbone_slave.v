module wishbone_slave(clk_i,
	adr_i,dat_i,cyc_i,stb_i,we_i,
	dat_o,stall_o,ack_o,led_o);

input	wire		clk_i,we_i,stb_i,cyc_i;
input	wire	[31:0]	dat_i;
input	wire		adr_i;

output	reg		ack_o;
output	wire		stall_o;
output	wire	[31:0]	dat_o;
output	reg	[7:0]	led_o;

	reg	[3:0]	state;
	wire		busy;


initial ack_o = 1'b0;
initial state = 0;

assign stall_o = (busy)&&(we_i);
assign busy = (state != 0);
assign dat_o = {28'h0, state};

always @(posedge clk_i)
	if ((stb_i)&&(!stall_o)&&(we_i))
		state <= 4'h1;
	else if (state >= 4'hf)
		state <= 4'h0;
	else if (state != 0)
		state <= state + 1'b1;
//	else
//		state <= 4'hf;

always @(posedge clk_i)
	case(state)
	4'h1: led_o <= 8'h01;
	4'h2: led_o <= 8'h02;
	4'h3: led_o <= 8'h04;
	4'h4: led_o <= 8'h08;
	4'h5: led_o <= 8'h10;
	4'h6: led_o <= 8'h20;
	4'h7: led_o <= 8'h40;
	4'h8: led_o <= 8'h80;
	4'h9: led_o <= 8'h40;
	4'ha: led_o <= 8'h20;
	4'hb: led_o <= 8'h10;
	4'hc: led_o <= 8'h08;
	4'hd: led_o <= 8'h04;
	4'he: led_o <= 8'h02;
	4'hf: led_o <= 8'h01;
	default: led_o <= 8'h00;
	endcase

always @(posedge clk_i)	
	ack_o <= (stb_i)&&(!stall_o);

//Disable unused inputs
//Verilator lint_off UNUSED
wire	[33:0]	unused;
assign	unused = {cyc_i,adr_i,dat_i};
//Verilator lint_on UNUSED

endmodule
