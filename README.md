Double precision floating point multiplier module in hardware
## Description
Find a detailed report ![here](CADforVLSI CS6230 report EE20B149_044.pdf)
## running instructions
- Simulation
```
make generate_verilog
make link_verilator
./bin/out
```
- Verification
```
cp verilog/mk_dpfpmult.v tb/
cd tb/
make
```
- clean
```
make full_clean
```
