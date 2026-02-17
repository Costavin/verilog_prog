CC := g++

VERINC := /usr/share/verilator/include
CPPFLAGS := -I$(VERINC) -I obj_dir
LDFLAGS := 
LDLIBS := obj_dir/Vblink__ALL.a
CFLAGS := 
VERIFLAGS := -GWIDTH=32 -Wall --trace-vcd

TGT := blink
SRC := $(VERINC)/verilated.cpp $(VERINC)/verilated_threads.cpp $(VERINC)/verilated_vcd_c.cpp



all: $(TGT)

obj_dir/Vblink.cpp: blink.v
	verilator $(VERIFLAGS) -cc blink.v

obj_dir/Vblink__ALL.a: obj_dir/Vblink.cpp
	make -C obj_dir -f Vblink.mk

$(TGT): blink.cpp obj_dir/Vblink__ALL.a
	$(CC) $(CPPFLAGS) $(SRC) $^ -o $@ 

clean:
	rm -rf obj_dir/ blink

.PHONY: all clean
