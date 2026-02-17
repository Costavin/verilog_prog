`ifndef VERILATOR
module testbench;
  reg [4095:0] vcdfile;
  reg clock;
`else
module testbench(input clock, output reg genclock);
  initial genclock = 1;
`endif
  reg genclock = 1;
  reg [31:0] cycle = 0;
  reg [0:0] PI_i_clk;
  moore UUT (
    .i_clk(PI_i_clk)
  );
`ifndef VERILATOR
  initial begin
    if ($value$plusargs("vcd=%s", vcdfile)) begin
      $dumpfile(vcdfile);
      $dumpvars(0, testbench);
    end
    #5 clock = 0;
    while (genclock) begin
      #5 clock = 0;
      #5 clock = 1;
    end
  end
`endif
  initial begin
`ifndef VERILATOR
    #1;
`endif
    // UUT.$auto$async2sync.\cc:101:execute$25  = 1'b0;
    // UUT.$auto$async2sync.\cc:110:execute$29  = 1'b1;
    UUT.led_index = 4'b0000;
    UUT.$auto$proc_rom.\cc:155:do_switch$11 [4'b0000] = 8'b00000000;
    UUT.$auto$proc_rom.\cc:155:do_switch$11 [4'b0001] = 8'b00000001;
    UUT.$auto$proc_rom.\cc:155:do_switch$11 [4'b0010] = 8'b00000010;
    UUT.$auto$proc_rom.\cc:155:do_switch$11 [4'b0011] = 8'b00000100;
    UUT.$auto$proc_rom.\cc:155:do_switch$11 [4'b0100] = 8'b00001000;
    UUT.$auto$proc_rom.\cc:155:do_switch$11 [4'b0101] = 8'b00010000;
    UUT.$auto$proc_rom.\cc:155:do_switch$11 [4'b0110] = 8'b00100000;

    // state 0
    PI_i_clk = 1'b0;
  end
  always @(posedge clock) begin
    // state 1
    if (cycle == 0) begin
      PI_i_clk <= 1'b0;
    end

    // state 2
    if (cycle == 1) begin
      PI_i_clk <= 1'b0;
    end

    // state 3
    if (cycle == 2) begin
      PI_i_clk <= 1'b0;
    end

    // state 4
    if (cycle == 3) begin
      PI_i_clk <= 1'b0;
    end

    // state 5
    if (cycle == 4) begin
      PI_i_clk <= 1'b0;
    end

    // state 6
    if (cycle == 5) begin
      PI_i_clk <= 1'b0;
    end

    genclock <= cycle < 6;
    cycle <= cycle + 1;
  end
endmodule
