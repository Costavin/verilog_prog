CC := g++

VERINC := /usr/share/verilator/include
CPPFLAGS := -I$(VERINC) -I obj_dir
LDFLAGS := 
LDLIBS := obj_dir/V$(TGT)__ALL.a
CFLAGS := 
VERIFLAGS := -Wall --trace-vcd

TGT := wishbone_slave

SRC := $(VERINC)/verilated.cpp $(VERINC)/verilated_threads.cpp $(VERINC)/verilated_vcd_c.cpp



all: $(TGT)

obj_dir/V$(TGT).cpp: $(TGT).v
	verilator $(VERIFLAGS) -cc $(TGT).v

obj_dir/V$(TGT)__ALL.a: obj_dir/V$(TGT).cpp
	make -C obj_dir -f V$(TGT).mk

$(TGT): $(TGT).cpp obj_dir/V$(TGT)__ALL.a
	$(CC) $(CPPFLAGS) $(SRC) $^ -o $@ 

clean:
	rm -rf obj_dir/ $(TGT)

.PHONY: all clean
