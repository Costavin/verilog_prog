CC := g++

CPPFLAGS := -I/usr/share/verilator/include -I obj_dir
LDFLAGS := 
LDLIBS := obj_dir/Vthruwire__ALL.a
CFLAGS := 

TGT := thruwire
SRC := /usr/share/verilator/include/verilated.cpp /usr/share/verilator/include/verilated_threads.cpp


all: $(TGT)

obj_dir/Vthruwire.cpp: thruwire.v
	verilator -Wall -cc thruwire.v

obj_dir/Vthruwire__ALL.a: obj_dir/Vthruwire.cpp
	make -C obj_dir -f Vthruwire.mk

$(TGT): thruwire.cpp obj_dir/Vthruwire__ALL.a
	$(CC) $(CPPFLAGS) $(SRC) $^ -o $@ 

clean:
	rm -rf obj_dir/ thruwire

.PHONY: all clean
