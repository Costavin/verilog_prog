# verilog_prog
Repo where it is exercised some verilog programming

##Steps for compilation:

`iverilog -o output_exe multiplexer.v multiplexer_tb.v`

This will produce the file executable *output_exe*.
So as to get the waveform dump, we procceed with the following:

`vvp dsn`

It will produce a file as it was denominated in the testbench *multiplexer_tb.v*, for e.g. *wave.vcd*.
Finally the waveform dump can be analyzed with:

`gtkwave wave.vcd`

