# verilog_prog
Repository mainly used to exercise some verilog programming

## Steps for compilation:

For very simple designs, it can be used *iverilog*, for e.g.:

`iverilog -o output_exe multiplexer.v multiplexer_tb.v`

This will produce the file executable *output_exe*.
For projects a little bit more complex, it was added a Makefile.

A waveform dump is obtained as soon as it is run a simulation binary. However, for simpler designs, it can be used the *vvp*, for e.g.:

`vvp dsn`

Finally, waveform dumps can be inspected with *gtkwave*:

`gtkwave wave.vcd`

To test the design with formal verification methods, first it must be built the \*.sby script, and then call the *sby* program on it:

`sby -f script.sby`

