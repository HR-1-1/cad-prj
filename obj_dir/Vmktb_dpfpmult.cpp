// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmktb_dpfpmult.h"
#include "Vmktb_dpfpmult__Syms.h"

//============================================================
// Constructors

Vmktb_dpfpmult::Vmktb_dpfpmult(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmktb_dpfpmult__Syms(_vcontextp__, _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , RST_N{vlSymsp->TOP.RST_N}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmktb_dpfpmult::Vmktb_dpfpmult(const char* _vcname__)
    : Vmktb_dpfpmult(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmktb_dpfpmult::~Vmktb_dpfpmult() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmktb_dpfpmult___024root___eval_initial(Vmktb_dpfpmult___024root* vlSelf);
void Vmktb_dpfpmult___024root___eval_settle(Vmktb_dpfpmult___024root* vlSelf);
void Vmktb_dpfpmult___024root___eval(Vmktb_dpfpmult___024root* vlSelf);
QData Vmktb_dpfpmult___024root___change_request(Vmktb_dpfpmult___024root* vlSelf);
#ifdef VL_DEBUG
void Vmktb_dpfpmult___024root___eval_debug_assertions(Vmktb_dpfpmult___024root* vlSelf);
#endif  // VL_DEBUG
void Vmktb_dpfpmult___024root___final(Vmktb_dpfpmult___024root* vlSelf);

static void _eval_initial_loop(Vmktb_dpfpmult__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmktb_dpfpmult___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmktb_dpfpmult___024root___eval_settle(&(vlSymsp->TOP));
        Vmktb_dpfpmult___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmktb_dpfpmult___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("verilog//mktb_dpfpmult.v", 29, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmktb_dpfpmult___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmktb_dpfpmult::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmktb_dpfpmult::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmktb_dpfpmult___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmktb_dpfpmult___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmktb_dpfpmult___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("verilog//mktb_dpfpmult.v", 29, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmktb_dpfpmult___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vmktb_dpfpmult::final() {
    Vmktb_dpfpmult___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vmktb_dpfpmult::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmktb_dpfpmult::name() const {
    return vlSymsp->name();
}
