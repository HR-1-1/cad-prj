// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmktb_dpfpmult__Syms.h"
#include "Vmktb_dpfpmult.h"
#include "Vmktb_dpfpmult___024root.h"

// FUNCTIONS
Vmktb_dpfpmult__Syms::~Vmktb_dpfpmult__Syms()
{
}

Vmktb_dpfpmult__Syms::Vmktb_dpfpmult__Syms(VerilatedContext* contextp, const char* namep,Vmktb_dpfpmult* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
