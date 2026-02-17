//#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include "Vmoore.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

void tick(int tickcount, Vmoore *tb, VerilatedVcdC* tfp) {

	tb->eval();
	if (tfp)
		tfp->dump(tickcount*10 - 2);
	tb->i_clk = 1;
	tb->eval();
	if (tfp)
		tfp->dump(tickcount*10);
	tb->i_clk = 0;
	tb->eval();
	if (tfp) {
		tfp->dump(tickcount*10 + 5);
		tfp->flush();
	}

}

int main(int argc, char **argv) {

        Verilated::commandArgs(argc,argv);

        //Instantiate design
        Vmoore *tb = new Vmoore;

	int last_led;
	last_led = tb->o_led;
	//removing the signal i__display_enable
	//tb->i_display_enable = true;

	//generate traces
	unsigned tickcount = 0;
	Verilated::traceEverOn(true);

	VerilatedVcdC* tfp = new VerilatedVcdC;
	tb->trace(tfp,99);
	tfp->open("mooretrace.vcd");

        for (int k=0; k<(1<<8); k++) {
                //tick(tb);
		tick(++tickcount, tb, tfp);

                if (last_led != tb->o_led) {
                	printf("k = %7d, ", k);
                	printf("led = %d\n", tb->o_led);
		}
		last_led = tb->o_led;
        }

        return 0;
}

