TOPLEVEL_LANG ?= verilog
PWD = $(shell_pwd)
export PYTHONPATH := $(PWD)/model:$(PYTHONPATH)

ifeq ($(TOPLEVEL_LANG),verilog)
  VERILOG_SOURCES = $(shell pwd)/mk_dpfpmult.v
else ifeq ($(TOPLEVEL_LANG),vhdl)
  VHDL_SOURCES = $(shell pwd)/dff.vhdl
endif


MODULE = tb_dpfpmult
TOPLEVEL = mk_dpfpmult
include $(shell cocotb-config --makefiles)/Makefile.sim
