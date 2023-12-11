// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMKTB_DPFPMULT__SYMS_H_
#define VERILATED_VMKTB_DPFPMULT__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vmktb_dpfpmult.h"

// INCLUDE MODULE CLASSES
#include "Vmktb_dpfpmult___024root.h"

// SYMS CLASS (contains all model state)
class Vmktb_dpfpmult__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmktb_dpfpmult* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmktb_dpfpmult___024root       TOP;

    // CONSTRUCTORS
    Vmktb_dpfpmult__Syms(VerilatedContext* contextp, const char* namep, Vmktb_dpfpmult* modelp);
    ~Vmktb_dpfpmult__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
