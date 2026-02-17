CC := g++

VERINC := /usr/share/verilator/include
CPPFLAGS := -I$(VERINC) -I obj_dir
LDFLAGS := 
LDLIBS := obj_dir/Vmealy__ALL.a
CFLAGS := 
VERIFLAGS := -Wall --trace-vcd

TGT := mealy

SRC := $(VERINC)/verilated.cpp $(VERINC)/verilated_threads.cpp $(VERINC)/verilated_vcd_c.cpp



all: $(TGT)

obj_dir/Vmealy.cpp: mealy.v
	verilator $(VERIFLAGS) -cc mealy.v

obj_dir/Vmealy__ALL.a: obj_dir/Vmealy.cpp
	make -C obj_dir -f Vmealy.mk

$(TGT): mealy.cpp obj_dir/Vmealy__ALL.a
	$(CC) $(CPPFLAGS) $(SRC) $^ -o $@ 

clean:
	rm -rf obj_dir/ mealy

.PHONY: all clean
