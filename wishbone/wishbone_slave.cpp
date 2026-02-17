#include <stdio.h>
#include <stdlib.h>
#include "Vwishbone_slave.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int     tickcount = 0;
Vwishbone_slave      *tb;
VerilatedVcdC   *tfp;


void tick(void) {
	tickcount++;

	tb->eval();
        if (tfp)
                tfp->dump(tickcount*10 - 2);
        tb->clk_i = 1;
        tb->eval();
        if (tfp)
                tfp->dump(tickcount*10);
        tb->clk_i = 0;
        tb->eval();
        if (tfp) {
                tfp->dump(tickcount*10 + 5);
                tfp->flush();
        }
}

unsigned wb_read(unsigned addr) {
	tb->cyc_i = tb->stb_i = 1;
	tb->we_i = 0;
	tb->eval();//update after we_i which influences stall_o
	tb->adr_i = addr;

	while(tb->stall_o)
		tick();
	tick();
	tb->stb_i = 0;
	while(!tb->ack_o)
		tick();
	tb->cyc_i = 0;

	return tb->dat_o;
}

void wb_write(unsigned addr, unsigned value) {
	tb->cyc_i = tb->stb_i = 1;
	tb->we_i = 1;
	tb->eval();
	tb->adr_i = addr;
	tb->dat_i = value;

	while(tb->stall_o)
		tick();
	tick();
	tb->stb_i = 0;
	while(!tb->ack_o)
		tick();
	tb->cyc_i = 0;
}

int main(int argc, char **argv) {

        Verilated::commandArgs(argc,argv);

        //Instantiate design
        tb = new Vwishbone_slave;

        int last_led, last_state = 0, state = 0;
        last_led = tb->led_o;

        //generate traces
        Verilated::traceEverOn(true);

        tfp = new VerilatedVcdC;
        tb->trace(tfp,99);
        tfp->open("trace_wishbone.vcd");

	printf("Initial state is: 0x%02x\n", wb_read(0));

	for (int cycle = 0; cycle < 2; cycle++) {
		//5 ticks
		for (int i = 0; i < 5; i++)
			tick();

		wb_write(0,0);
		tick();

		while((state = wb_read(0)) != 0) {
			if ((state != last_state) || (tb->led_o != last_led)) {
				printf("tickcount =%6d", tickcount);
				printf("\tstate =%2d", state);
				for (int j=0; j<8; j++) {
	                        	if (tb->led_o & (1<<j))
						printf("o");
					else
						printf("-");
				}
				printf("\n");
			}
			tick();
			last_state = state;
			last_led = tb->led_o;
		}
	}
        return 0;
}


