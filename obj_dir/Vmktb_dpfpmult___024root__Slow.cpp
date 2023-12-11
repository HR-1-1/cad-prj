// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmktb_dpfpmult.h for the primary calling header

#include "Vmktb_dpfpmult___024root.h"
#include "Vmktb_dpfpmult__Syms.h"

//==========


void Vmktb_dpfpmult___024root___ctor_var_reset(Vmktb_dpfpmult___024root* vlSelf);

Vmktb_dpfpmult___024root::Vmktb_dpfpmult___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmktb_dpfpmult___024root___ctor_var_reset(this);
}

void Vmktb_dpfpmult___024root::__Vconfigure(Vmktb_dpfpmult__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmktb_dpfpmult___024root::~Vmktb_dpfpmult___024root() {
}

void Vmktb_dpfpmult___024root___initial__TOP__3(Vmktb_dpfpmult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmktb_dpfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmktb_dpfpmult___024root___initial__TOP__3\n"); );
    // Variables
    CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_5;
    // Body
    vlSelf->mktb_dpfpmult__DOT__state = 0xaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1 = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex0 = 2U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex00 = 2U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex01 = 2U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex02 = 2U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex1 = 2U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex11 = 2U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d = 2U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_0 = 0U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_1 = 0U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_2 = 0U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_3 = 0U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_4 = 0U;
    mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_5 = 0U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e0 = 0x2aaaaaaaaaaaaULL;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e00 = 0x2aaaaaaaaaaaaULL;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e01 = 0x2aaaaaaaaaaaaULL;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 = 0x2aaaaaaaaaaaaULL;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e02 = 0x2aaaaaaaaaaaaULL;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_exc2 = 0xaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[3U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[3U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[2U] = 0xaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[3U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[4U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[5U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[6U] = 0xaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[3U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[4U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[5U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[6U] = 0xaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[3U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[4U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[5U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[6U] = 0xaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[3U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[4U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[5U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[6U] = 0xaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[3U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[4U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[5U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[6U] = 0xaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[3U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[4U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[5U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[6U] = 0xaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_2[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_2[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_2[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_2[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[3U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[4U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[5U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[6U] = 0xaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_2[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_2[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_2[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_2[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[3U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[4U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[5U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[6U] = 0xaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_2[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_2[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_2[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_2[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[3U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[4U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[5U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[6U] = 0xaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_2[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_2[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_2[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_2[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[3U] = 0xaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s0 = 0U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s00 = 0U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s01 = 0U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s02 = 0U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s1 = 0U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s11 = 0U;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[1U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U] = 0xaaaaaaaaU;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[3U] = 0xaaaaaaaU;
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 16> Vmktb_dpfpmult__ConstPool__TABLE_098eb8d6_0;

void Vmktb_dpfpmult___024root___settle__TOP__4(Vmktb_dpfpmult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmktb_dpfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmktb_dpfpmult___024root___settle__TOP__4\n"); );
    // Variables
    CData/*2:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855;
    CData/*1:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1199640;
    CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_x0_99_BIT_123_001_THEN_NOT_rg_x0_99_BIT___05FETC___05F_d1037;
    CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_x0_99_BIT_123_001_THEN_rg_x0_99_BIT_71_0_ETC___05F_d1028;
    CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__a_qnan___05Fh5481;
    CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__a_snan___05Fh5477;
    CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__a_z___05Fh5475;
    CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__b_qnan___05Fh5482;
    CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__b_snan___05Fh5478;
    CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__b_z___05Fh5476;
    CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__e_xo___05Fh1199235;
    CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__qnan_valid___05Fh5483;
    CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_2047_04_AN_ETC___05F_d131;
    CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_2047_04_AN_ETC___05F_d143;
    CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__snan_valid___05Fh5479;
    CData/*3:0*/ __Vtableidx1;
    VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741;
    VlWide<4>/*127:0*/ __Vtemp193;
    VlWide<4>/*127:0*/ __Vtemp196;
    VlWide<4>/*127:0*/ __Vtemp199;
    VlWide<4>/*127:0*/ __Vtemp200;
    VlWide<4>/*127:0*/ __Vtemp205;
    VlWide<4>/*127:0*/ __Vtemp215;
    VlWide<4>/*127:0*/ __Vtemp216;
    VlWide<4>/*127:0*/ __Vtemp224;
    VlWide<3>/*95:0*/ __Vtemp231;
    QData/*62:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__IF_0b0_CONCAT_NOT_rg_x0_99_BITS_17_TO_7_020_EQ_ETC___05F_d1054;
    QData/*53:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__sfd_res___05Fh1198858;
    QData/*51:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__sfd___05Fh1198856;
    // Body
    vlSelf->mktb_dpfpmult__DOT__state_D_IN = (0xffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->mktb_dpfpmult__DOT__state)));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult_EN_send = 
        ((((1U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)) 
           | (0U == (IData)(vlSelf->mktb_dpfpmult__DOT__state))) 
          | (2U == (IData)(vlSelf->mktb_dpfpmult__DOT__state))) 
         | (3U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)));
    __Vtableidx1 = (((3U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)) 
                     << 3U) | (((2U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)) 
                                << 2U) | (((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)) 
                                           << 1U) | 
                                          (1U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[0U] 
        = Vmktb_dpfpmult__ConstPool__TABLE_098eb8d6_0
        [__Vtableidx1][0U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[1U] 
        = Vmktb_dpfpmult__ConstPool__TABLE_098eb8d6_0
        [__Vtableidx1][1U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[2U] 
        = Vmktb_dpfpmult__ConstPool__TABLE_098eb8d6_0
        [__Vtableidx1][2U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[3U] 
        = Vmktb_dpfpmult__ConstPool__TABLE_098eb8d6_0
        [__Vtableidx1][3U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1_D_IN 
        = ((0U == (0x3ffU & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U]))
            ? ((0U == (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                       >> 0x10U)) ? ((0U == (0xffffU 
                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U]))
                                      ? ((0U == (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                 >> 0x10U))
                                          ? ((0U == 
                                              (0xffffU 
                                               & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U]))
                                              ? ((0U 
                                                  == 
                                                  (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                   >> 0x10U))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0xffffU 
                                                    & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U]))
                                                   ? 0x6aU
                                                   : 
                                                  ((1U 
                                                    & (((IData)(
                                                                (0U 
                                                                 == 
                                                                 (0x3ffeU 
                                                                  & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U]))) 
                                                        & (~ 
                                                           (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                            >> 0xeU))) 
                                                       & (~ 
                                                          (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                           >> 0xfU))))
                                                    ? 0x69U
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0U 
                                                                 == 
                                                                 (0x7ffcU 
                                                                  & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U]))) 
                                                        & (~ 
                                                           (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                            >> 0xfU))))
                                                     ? 0x68U
                                                     : 
                                                    ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xfff8U 
                                                               & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U])))
                                                      ? 0x67U
                                                      : 
                                                     ((IData)(
                                                              (0U 
                                                               == 
                                                               (0xfff0U 
                                                                & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U])))
                                                       ? 0x66U
                                                       : 
                                                      ((1U 
                                                        & (((IData)(
                                                                    (0U 
                                                                     == 
                                                                     (0x3fe0U 
                                                                      & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U]))) 
                                                            & (~ 
                                                               (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                >> 0xeU))) 
                                                           & (~ 
                                                              (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                               >> 0xfU))))
                                                        ? 0x65U
                                                        : 
                                                       ((1U 
                                                         & ((IData)(
                                                                    (0U 
                                                                     == 
                                                                     (0x7fc0U 
                                                                      & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U]))) 
                                                            & (~ 
                                                               (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                >> 0xfU))))
                                                         ? 0x64U
                                                         : 
                                                        ((IData)(
                                                                 (0U 
                                                                  == 
                                                                  (0xff80U 
                                                                   & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U])))
                                                          ? 0x63U
                                                          : 
                                                         ((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0xff00U 
                                                                    & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U])))
                                                           ? 0x62U
                                                           : 
                                                          ((1U 
                                                            & (((IData)(
                                                                        (0U 
                                                                         == 
                                                                         (0x3e00U 
                                                                          & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U]))) 
                                                                & (~ 
                                                                   (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                    >> 0xeU))) 
                                                               & (~ 
                                                                  (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                   >> 0xfU))))
                                                            ? 0x61U
                                                            : 
                                                           ((1U 
                                                             & ((IData)(
                                                                        (0U 
                                                                         == 
                                                                         (0x7c00U 
                                                                          & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U]))) 
                                                                & (~ 
                                                                   (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                    >> 0xfU))))
                                                             ? 0x60U
                                                             : 
                                                            ((IData)(
                                                                     (0U 
                                                                      == 
                                                                      (0xf800U 
                                                                       & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U])))
                                                              ? 0x5fU
                                                              : 
                                                             ((IData)(
                                                                      (0U 
                                                                       == 
                                                                       (0xf000U 
                                                                        & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U])))
                                                               ? 0x5eU
                                                               : 
                                                              ((1U 
                                                                & (((~ 
                                                                     (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                      >> 0xdU)) 
                                                                    & (~ 
                                                                       (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                        >> 0xeU))) 
                                                                   & (~ 
                                                                      (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                       >> 0xfU))))
                                                                ? 0x5dU
                                                                : 
                                                               ((1U 
                                                                 & ((~ 
                                                                     (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                      >> 0xeU)) 
                                                                    & (~ 
                                                                       (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                        >> 0xfU))))
                                                                 ? 0x5cU
                                                                 : 
                                                                ((0x8000U 
                                                                  & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U])
                                                                  ? 0x5aU
                                                                  : 0x5bU))))))))))))))))
                                                  : 
                                                 ((IData)(
                                                          (0U 
                                                           == 
                                                           (0xffff0000U 
                                                            & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U])))
                                                   ? 0x5aU
                                                   : 
                                                  ((1U 
                                                    & (((IData)(
                                                                (0U 
                                                                 == 
                                                                 (0x3ffe0000U 
                                                                  & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U]))) 
                                                        & (~ 
                                                           (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                            >> 0x1eU))) 
                                                       & (~ 
                                                          (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                           >> 0x1fU))))
                                                    ? 0x59U
                                                    : 
                                                   ((1U 
                                                     & ((IData)(
                                                                (0U 
                                                                 == 
                                                                 (0x7ffc0000U 
                                                                  & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U]))) 
                                                        & (~ 
                                                           (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                            >> 0x1fU))))
                                                     ? 0x58U
                                                     : 
                                                    ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xfff80000U 
                                                               & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U])))
                                                      ? 0x57U
                                                      : 
                                                     ((IData)(
                                                              (0U 
                                                               == 
                                                               (0xfff00000U 
                                                                & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U])))
                                                       ? 0x56U
                                                       : 
                                                      ((1U 
                                                        & (((IData)(
                                                                    (0U 
                                                                     == 
                                                                     (0x3fe00000U 
                                                                      & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U]))) 
                                                            & (~ 
                                                               (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                >> 0x1eU))) 
                                                           & (~ 
                                                              (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                               >> 0x1fU))))
                                                        ? 0x55U
                                                        : 
                                                       ((1U 
                                                         & ((IData)(
                                                                    (0U 
                                                                     == 
                                                                     (0x7fc00000U 
                                                                      & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U]))) 
                                                            & (~ 
                                                               (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                >> 0x1fU))))
                                                         ? 0x54U
                                                         : 
                                                        ((IData)(
                                                                 (0U 
                                                                  == 
                                                                  (0xff800000U 
                                                                   & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U])))
                                                          ? 0x53U
                                                          : 
                                                         ((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0xff000000U 
                                                                    & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U])))
                                                           ? 0x52U
                                                           : 
                                                          ((1U 
                                                            & (((IData)(
                                                                        (0U 
                                                                         == 
                                                                         (0x3e000000U 
                                                                          & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U]))) 
                                                                & (~ 
                                                                   (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                    >> 0x1eU))) 
                                                               & (~ 
                                                                  (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                   >> 0x1fU))))
                                                            ? 0x51U
                                                            : 
                                                           ((1U 
                                                             & ((IData)(
                                                                        (0U 
                                                                         == 
                                                                         (0x7c000000U 
                                                                          & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U]))) 
                                                                & (~ 
                                                                   (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                    >> 0x1fU))))
                                                             ? 0x50U
                                                             : 
                                                            ((IData)(
                                                                     (0U 
                                                                      == 
                                                                      (0xf8000000U 
                                                                       & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U])))
                                                              ? 0x4fU
                                                              : 
                                                             ((IData)(
                                                                      (0U 
                                                                       == 
                                                                       (0xf0000000U 
                                                                        & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U])))
                                                               ? 0x4eU
                                                               : 
                                                              ((1U 
                                                                & (((~ 
                                                                     (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                      >> 0x1dU)) 
                                                                    & (~ 
                                                                       (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                        >> 0x1eU))) 
                                                                   & (~ 
                                                                      (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                       >> 0x1fU))))
                                                                ? 0x4dU
                                                                : 
                                                               ((1U 
                                                                 & ((~ 
                                                                     (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                      >> 0x1eU)) 
                                                                    & (~ 
                                                                       (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                        >> 0x1fU))))
                                                                 ? 0x4cU
                                                                 : 
                                                                ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
                                                                  >> 0x1fU)
                                                                  ? 0x4aU
                                                                  : 0x4bU)))))))))))))))))
                                              : ((IData)(
                                                         (0U 
                                                          == 
                                                          (0xffffU 
                                                           & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U])))
                                                  ? 0x4aU
                                                  : 
                                                 ((1U 
                                                   & (((IData)(
                                                               (0U 
                                                                == 
                                                                (0x3ffeU 
                                                                 & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U]))) 
                                                       & (~ 
                                                          (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                           >> 0xeU))) 
                                                      & (~ 
                                                         (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                          >> 0xfU))))
                                                   ? 0x49U
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0U 
                                                                == 
                                                                (0x7ffcU 
                                                                 & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U]))) 
                                                       & (~ 
                                                          (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                           >> 0xfU))))
                                                    ? 0x48U
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xfff8U 
                                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U])))
                                                     ? 0x47U
                                                     : 
                                                    ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xfff0U 
                                                               & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U])))
                                                      ? 0x46U
                                                      : 
                                                     ((1U 
                                                       & (((IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0x3fe0U 
                                                                     & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U]))) 
                                                           & (~ 
                                                              (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                               >> 0xeU))) 
                                                          & (~ 
                                                             (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                              >> 0xfU))))
                                                       ? 0x45U
                                                       : 
                                                      ((1U 
                                                        & ((IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0x7fc0U 
                                                                     & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U]))) 
                                                           & (~ 
                                                              (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                               >> 0xfU))))
                                                        ? 0x44U
                                                        : 
                                                       ((IData)(
                                                                (0U 
                                                                 == 
                                                                 (0xff80U 
                                                                  & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U])))
                                                         ? 0x43U
                                                         : 
                                                        ((IData)(
                                                                 (0U 
                                                                  == 
                                                                  (0xff00U 
                                                                   & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U])))
                                                          ? 0x42U
                                                          : 
                                                         ((1U 
                                                           & (((IData)(
                                                                       (0U 
                                                                        == 
                                                                        (0x3e00U 
                                                                         & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U]))) 
                                                               & (~ 
                                                                  (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                   >> 0xeU))) 
                                                              & (~ 
                                                                 (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                  >> 0xfU))))
                                                           ? 0x41U
                                                           : 
                                                          ((1U 
                                                            & ((IData)(
                                                                       (0U 
                                                                        == 
                                                                        (0x7c00U 
                                                                         & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U]))) 
                                                               & (~ 
                                                                  (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                   >> 0xfU))))
                                                            ? 0x40U
                                                            : 
                                                           ((IData)(
                                                                    (0U 
                                                                     == 
                                                                     (0xf800U 
                                                                      & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U])))
                                                             ? 0x3fU
                                                             : 
                                                            ((IData)(
                                                                     (0U 
                                                                      == 
                                                                      (0xf000U 
                                                                       & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U])))
                                                              ? 0x3eU
                                                              : 
                                                             ((1U 
                                                               & (((~ 
                                                                    (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                     >> 0xdU)) 
                                                                   & (~ 
                                                                      (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                       >> 0xeU))) 
                                                                  & (~ 
                                                                     (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                      >> 0xfU))))
                                                               ? 0x3dU
                                                               : 
                                                              ((1U 
                                                                & ((~ 
                                                                    (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                     >> 0xeU)) 
                                                                   & (~ 
                                                                      (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                       >> 0xfU))))
                                                                ? 0x3cU
                                                                : 
                                                               ((0x8000U 
                                                                 & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U])
                                                                 ? 0x3aU
                                                                 : 0x3bU)))))))))))))))))
                                          : ((IData)(
                                                     (0U 
                                                      == 
                                                      (0xffff0000U 
                                                       & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U])))
                                              ? 0x3aU
                                              : ((1U 
                                                  & (((IData)(
                                                              (0U 
                                                               == 
                                                               (0x3ffe0000U 
                                                                & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U]))) 
                                                      & (~ 
                                                         (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                          >> 0x1eU))) 
                                                     & (~ 
                                                        (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                         >> 0x1fU))))
                                                  ? 0x39U
                                                  : 
                                                 ((1U 
                                                   & ((IData)(
                                                              (0U 
                                                               == 
                                                               (0x7ffc0000U 
                                                                & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U]))) 
                                                      & (~ 
                                                         (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                          >> 0x1fU))))
                                                   ? 0x38U
                                                   : 
                                                  ((IData)(
                                                           (0U 
                                                            == 
                                                            (0xfff80000U 
                                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U])))
                                                    ? 0x37U
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xfff00000U 
                                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U])))
                                                     ? 0x36U
                                                     : 
                                                    ((1U 
                                                      & (((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0x3fe00000U 
                                                                    & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U]))) 
                                                          & (~ 
                                                             (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                              >> 0x1eU))) 
                                                         & (~ 
                                                            (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                             >> 0x1fU))))
                                                      ? 0x35U
                                                      : 
                                                     ((1U 
                                                       & ((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0x7fc00000U 
                                                                    & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U]))) 
                                                          & (~ 
                                                             (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                              >> 0x1fU))))
                                                       ? 0x34U
                                                       : 
                                                      ((IData)(
                                                               (0U 
                                                                == 
                                                                (0xff800000U 
                                                                 & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U])))
                                                        ? 0x33U
                                                        : 
                                                       ((IData)(
                                                                (0U 
                                                                 == 
                                                                 (0xff000000U 
                                                                  & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U])))
                                                         ? 0x32U
                                                         : 
                                                        ((1U 
                                                          & (((IData)(
                                                                      (0U 
                                                                       == 
                                                                       (0x3e000000U 
                                                                        & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U]))) 
                                                              & (~ 
                                                                 (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                  >> 0x1eU))) 
                                                             & (~ 
                                                                (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                 >> 0x1fU))))
                                                          ? 0x31U
                                                          : 
                                                         ((1U 
                                                           & ((IData)(
                                                                      (0U 
                                                                       == 
                                                                       (0x7c000000U 
                                                                        & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U]))) 
                                                              & (~ 
                                                                 (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                  >> 0x1fU))))
                                                           ? 0x30U
                                                           : 
                                                          ((IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0xf8000000U 
                                                                     & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U])))
                                                            ? 0x2fU
                                                            : 
                                                           ((IData)(
                                                                    (0U 
                                                                     == 
                                                                     (0xf0000000U 
                                                                      & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U])))
                                                             ? 0x2eU
                                                             : 
                                                            ((1U 
                                                              & (((~ 
                                                                   (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                    >> 0x1dU)) 
                                                                  & (~ 
                                                                     (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                      >> 0x1eU))) 
                                                                 & (~ 
                                                                    (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                     >> 0x1fU))))
                                                              ? 0x2dU
                                                              : 
                                                             ((1U 
                                                               & ((~ 
                                                                   (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                    >> 0x1eU)) 
                                                                  & (~ 
                                                                     (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                      >> 0x1fU))))
                                                               ? 0x2cU
                                                               : 
                                                              ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
                                                                >> 0x1fU)
                                                                ? 0x2aU
                                                                : 0x2bU)))))))))))))))))
                                      : ((IData)((0U 
                                                  == 
                                                  (0xffffU 
                                                   & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U])))
                                          ? 0x2aU : 
                                         ((1U & (((IData)(
                                                          (0U 
                                                           == 
                                                           (0x3ffeU 
                                                            & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U]))) 
                                                  & (~ 
                                                     (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                      >> 0xeU))) 
                                                 & (~ 
                                                    (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                     >> 0xfU))))
                                           ? 0x29U : 
                                          ((1U & ((IData)(
                                                          (0U 
                                                           == 
                                                           (0x7ffcU 
                                                            & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U]))) 
                                                  & (~ 
                                                     (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                      >> 0xfU))))
                                            ? 0x28U
                                            : ((IData)(
                                                       (0U 
                                                        == 
                                                        (0xfff8U 
                                                         & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U])))
                                                ? 0x27U
                                                : ((IData)(
                                                           (0U 
                                                            == 
                                                            (0xfff0U 
                                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U])))
                                                    ? 0x26U
                                                    : 
                                                   ((1U 
                                                     & (((IData)(
                                                                 (0U 
                                                                  == 
                                                                  (0x3fe0U 
                                                                   & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U]))) 
                                                         & (~ 
                                                            (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                             >> 0xeU))) 
                                                        & (~ 
                                                           (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                            >> 0xfU))))
                                                     ? 0x25U
                                                     : 
                                                    ((1U 
                                                      & ((IData)(
                                                                 (0U 
                                                                  == 
                                                                  (0x7fc0U 
                                                                   & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U]))) 
                                                         & (~ 
                                                            (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                             >> 0xfU))))
                                                      ? 0x24U
                                                      : 
                                                     ((IData)(
                                                              (0U 
                                                               == 
                                                               (0xff80U 
                                                                & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U])))
                                                       ? 0x23U
                                                       : 
                                                      ((IData)(
                                                               (0U 
                                                                == 
                                                                (0xff00U 
                                                                 & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U])))
                                                        ? 0x22U
                                                        : 
                                                       ((1U 
                                                         & (((IData)(
                                                                     (0U 
                                                                      == 
                                                                      (0x3e00U 
                                                                       & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U]))) 
                                                             & (~ 
                                                                (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                 >> 0xeU))) 
                                                            & (~ 
                                                               (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                >> 0xfU))))
                                                         ? 0x21U
                                                         : 
                                                        ((1U 
                                                          & ((IData)(
                                                                     (0U 
                                                                      == 
                                                                      (0x7c00U 
                                                                       & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U]))) 
                                                             & (~ 
                                                                (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                 >> 0xfU))))
                                                          ? 0x20U
                                                          : 
                                                         ((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0xf800U 
                                                                    & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U])))
                                                           ? 0x1fU
                                                           : 
                                                          ((IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0xf000U 
                                                                     & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U])))
                                                            ? 0x1eU
                                                            : 
                                                           ((1U 
                                                             & (((~ 
                                                                  (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                   >> 0xdU)) 
                                                                 & (~ 
                                                                    (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                     >> 0xeU))) 
                                                                & (~ 
                                                                   (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                    >> 0xfU))))
                                                             ? 0x1dU
                                                             : 
                                                            ((1U 
                                                              & ((~ 
                                                                  (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                   >> 0xeU)) 
                                                                 & (~ 
                                                                    (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                     >> 0xfU))))
                                                              ? 0x1cU
                                                              : 
                                                             ((0x8000U 
                                                               & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U])
                                                               ? 0x1aU
                                                               : 0x1bU)))))))))))))))))
                : ((IData)((0U == (0xffff0000U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U])))
                    ? 0x1aU : ((1U & (((IData)((0U 
                                                == 
                                                (0x3ffe0000U 
                                                 & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U]))) 
                                       & (~ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                             >> 0x1eU))) 
                                      & (~ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                            >> 0x1fU))))
                                ? 0x19U : ((1U & ((IData)(
                                                          (0U 
                                                           == 
                                                           (0x7ffc0000U 
                                                            & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U]))) 
                                                  & (~ 
                                                     (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                      >> 0x1fU))))
                                            ? 0x18U
                                            : ((IData)(
                                                       (0U 
                                                        == 
                                                        (0xfff80000U 
                                                         & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U])))
                                                ? 0x17U
                                                : ((IData)(
                                                           (0U 
                                                            == 
                                                            (0xfff00000U 
                                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U])))
                                                    ? 0x16U
                                                    : 
                                                   ((1U 
                                                     & (((IData)(
                                                                 (0U 
                                                                  == 
                                                                  (0x3fe00000U 
                                                                   & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U]))) 
                                                         & (~ 
                                                            (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                             >> 0x1eU))) 
                                                        & (~ 
                                                           (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                            >> 0x1fU))))
                                                     ? 0x15U
                                                     : 
                                                    ((1U 
                                                      & ((IData)(
                                                                 (0U 
                                                                  == 
                                                                  (0x7fc00000U 
                                                                   & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U]))) 
                                                         & (~ 
                                                            (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                             >> 0x1fU))))
                                                      ? 0x14U
                                                      : 
                                                     ((IData)(
                                                              (0U 
                                                               == 
                                                               (0xff800000U 
                                                                & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U])))
                                                       ? 0x13U
                                                       : 
                                                      ((IData)(
                                                               (0U 
                                                                == 
                                                                (0xff000000U 
                                                                 & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U])))
                                                        ? 0x12U
                                                        : 
                                                       ((1U 
                                                         & (((IData)(
                                                                     (0U 
                                                                      == 
                                                                      (0x3e000000U 
                                                                       & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U]))) 
                                                             & (~ 
                                                                (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                 >> 0x1eU))) 
                                                            & (~ 
                                                               (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                >> 0x1fU))))
                                                         ? 0x11U
                                                         : 
                                                        ((1U 
                                                          & ((IData)(
                                                                     (0U 
                                                                      == 
                                                                      (0x7c000000U 
                                                                       & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U]))) 
                                                             & (~ 
                                                                (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                 >> 0x1fU))))
                                                          ? 0x10U
                                                          : 
                                                         ((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0xf8000000U 
                                                                    & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U])))
                                                           ? 0xfU
                                                           : 
                                                          ((IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0xf0000000U 
                                                                     & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U])))
                                                            ? 0xeU
                                                            : 
                                                           ((1U 
                                                             & (((~ 
                                                                  (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                   >> 0x1dU)) 
                                                                 & (~ 
                                                                    (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                     >> 0x1eU))) 
                                                                & (~ 
                                                                   (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                    >> 0x1fU))))
                                                             ? 0xdU
                                                             : 
                                                            ((1U 
                                                              & ((~ 
                                                                  (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                   >> 0x1eU)) 
                                                                 & (~ 
                                                                    (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                                     >> 0x1fU))))
                                                              ? 0xcU
                                                              : 
                                                             ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
                                                               >> 0x1fU)
                                                               ? 0xaU
                                                               : 0xbU)))))))))))))))))
            : ((1U & ((IData)((0U == (0x1ffU & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U]))) 
                      & (~ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U] 
                            >> 9U)))) ? 0xaU : ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3feU 
                                                          & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U])))
                                                 ? 9U
                                                 : 
                                                ((IData)(
                                                         (0U 
                                                          == 
                                                          (0x3fcU 
                                                           & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U])))
                                                  ? 8U
                                                  : 
                                                 ((1U 
                                                   & (((IData)(
                                                               (0U 
                                                                == 
                                                                (0xf8U 
                                                                 & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U]))) 
                                                       & (~ 
                                                          (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U] 
                                                           >> 8U))) 
                                                      & (~ 
                                                         (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U] 
                                                          >> 9U))))
                                                   ? 7U
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0U 
                                                                == 
                                                                (0x1f0U 
                                                                 & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U]))) 
                                                       & (~ 
                                                          (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U] 
                                                           >> 9U))))
                                                    ? 6U
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x3e0U 
                                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U])))
                                                     ? 5U
                                                     : 
                                                    ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x3c0U 
                                                               & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U])))
                                                      ? 4U
                                                      : 
                                                     ((1U 
                                                       & (((~ 
                                                            (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U] 
                                                             >> 7U)) 
                                                           & (~ 
                                                              (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U] 
                                                               >> 8U))) 
                                                          & (~ 
                                                             (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U] 
                                                              >> 9U))))
                                                       ? 3U
                                                       : 
                                                      ((1U 
                                                        & ((~ 
                                                            (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U] 
                                                             >> 8U)) 
                                                           & (~ 
                                                              (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U] 
                                                               >> 9U))))
                                                        ? 2U
                                                        : 
                                                       ((0x200U 
                                                         & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U])
                                                         ? 0U
                                                         : 1U)))))))))));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1_75_MINUS_1_81_SLE_0_CONCAT_rg_e011_59_BITS___05FETC___05F_d927 
        = ((0x80000000U ^ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1 
                           - (IData)(1U))) <= (0x80000000U 
                                               ^ (0x7ffU 
                                                  & ((IData)(
                                                             (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                              >> 0x27U)) 
                                                     - (IData)(1U)))));
    VL_SHIFTR_WWI(108,108,32, __Vtemp193, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11, (IData)(
                                                                                (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                                                >> 7U)));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910[0U] 
        = __Vtemp193[0U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910[1U] 
        = __Vtemp193[1U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910[2U] 
        = __Vtemp193[2U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910[3U] 
        = (0xfffU & __Vtemp193[3U]);
    VL_SHIFTR_WWI(108,108,32, __Vtemp196, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11, 
                  ((IData)(1U) + (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                          >> 7U))));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[0U] 
        = __Vtemp196[0U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[1U] 
        = __Vtemp196[1U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[2U] 
        = __Vtemp196[2U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[3U] 
        = (0xfffU & __Vtemp196[3U]);
    VL_SHIFTL_WWI(108,108,32, __Vtemp199, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11, 
                  (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1 
                   - (IData)(1U)));
    VL_SHIFTL_WWI(108,108,11, __Vtemp200, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11, 
                  (0x7ffU & ((IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                      >> 0x27U)) - (IData)(1U))));
    if (((0x80000000U ^ vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1) 
         <= (0x80000000U ^ (0x7ffU & ((IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                               >> 0x27U)) 
                                      - (IData)(1U)))))) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[0U] 
            = __Vtemp199[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[1U] 
            = __Vtemp199[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[2U] 
            = __Vtemp199[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[3U] 
            = (0xfffU & __Vtemp199[3U]);
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[0U] 
            = __Vtemp200[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[1U] 
            = __Vtemp200[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[2U] 
            = __Vtemp200[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[3U] 
            = (0xfffU & __Vtemp200[3U]);
    }
    VL_SHIFTL_WWI(108,108,32, __Vtemp205, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11, 
                  ((IData)(0x6cU) - (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                             >> 7U))));
    mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[0U] 
        = __Vtemp205[0U];
    mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[1U] 
        = __Vtemp205[1U];
    mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[2U] 
        = __Vtemp205[2U];
    mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[3U] 
        = (0xfffU & __Vtemp205[3U]);
    mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_x0_99_BIT_123_001_THEN_NOT_rg_x0_99_BIT___05FETC___05F_d1037 
        = ((((0x8000000U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[3U])
              ? (~ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U] 
                    >> 7U)) : (~ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U] 
                                  >> 6U))) & (0U != 
                                              (3U & 
                                               vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U]))) 
           & (0U == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                               >> 7U))));
    if ((0x8000000U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[3U])) {
        mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_x0_99_BIT_123_001_THEN_rg_x0_99_BIT_71_0_ETC___05F_d1028 
            = (1U & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U] 
                     >> 7U));
        mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855 
            = ((6U & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U] 
                      >> 4U)) | (0ULL != (0x7ffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U])) 
                                              << 0x2eU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[1U])) 
                                                 << 0xeU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U])) 
                                                   >> 0x12U))))));
    } else {
        mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_x0_99_BIT_123_001_THEN_rg_x0_99_BIT_71_0_ETC___05F_d1028 
            = (1U & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U] 
                     >> 6U));
        mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855 
            = ((6U & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U] 
                      >> 3U)) | (0ULL != (0x3ffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U])) 
                                              << 0x2eU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[1U])) 
                                                 << 0xeU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U])) 
                                                   >> 0x12U))))));
    }
    mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1199640 
        = ((2U & (((0x8000000U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[3U])
                    ? (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U] 
                       >> 6U) : (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U] 
                                 >> 5U)) << 1U)) | 
           (1U & (((0x8000000U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[3U])
                    ? ((2U & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U] 
                              >> 4U)) | (0ULL != (0x7ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U])) 
                                                      << 0x2eU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[1U])) 
                                                         << 0xeU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U])) 
                                                           >> 0x12U))))))
                    : ((2U & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U] 
                              >> 3U)) | (0ULL != (0x3ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U])) 
                                                      << 0x2eU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[1U])) 
                                                         << 0xeU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U])) 
                                                           >> 0x12U))))))) 
                  >> 1U)));
    mktb_dpfpmult__DOT__ifc_mult__DOT__sfd___05Fh1198856 
        = (0xfffffffffffffULL & ((0x8000000U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[3U])
                                  ? (((QData)((IData)(
                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[3U])) 
                                      << 0x39U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[3U])) 
                                                    << 0x19U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U])) 
                                                      >> 7U)))
                                  : (((QData)((IData)(
                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[3U])) 
                                      << 0x3aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[3U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U])) 
                                                      >> 6U)))));
    mktb_dpfpmult__DOT__ifc_mult__DOT__a_qnan___05Fh5481 
        = ((0x7ffU == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[3U] 
                                 >> 0x14U))) & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[3U] 
                                                >> 0x13U));
    mktb_dpfpmult__DOT__ifc_mult__DOT__b_qnan___05Fh5482 
        = ((0x7ffU == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[1U] 
                                 >> 0x14U))) & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[1U] 
                                                >> 0x13U));
    mktb_dpfpmult__DOT__ifc_mult__DOT__a_snan___05Fh5477 
        = (((0x7ffU == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[3U] 
                                  >> 0x14U))) & (~ 
                                                 (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[3U] 
                                                  >> 0x13U))) 
           & (0ULL != (0x7ffffffffffffULL & (((QData)((IData)(
                                                              vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[2U]))))));
    mktb_dpfpmult__DOT__ifc_mult__DOT__b_snan___05Fh5478 
        = (((0x7ffU == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[1U] 
                                  >> 0x14U))) & (~ 
                                                 (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[1U] 
                                                  >> 0x13U))) 
           & (0ULL != (0x7ffffffffffffULL & (((QData)((IData)(
                                                              vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[0U]))))));
    mktb_dpfpmult__DOT__ifc_mult__DOT__a_z___05Fh5475 
        = ((0U == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[3U] 
                             >> 0x14U))) & (0ULL == 
                                            (0xfffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[2U]))))));
    mktb_dpfpmult__DOT__ifc_mult__DOT__b_z___05Fh5476 
        = ((0U == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[1U] 
                             >> 0x14U))) & (0ULL == 
                                            (0xfffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[0U]))))));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a_inf___05Fh5473 
        = ((0x7ffU == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[3U] 
                                 >> 0x14U))) & (0ULL 
                                                == 
                                                (0xfffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[2U]))))));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__b_inf___05Fh5474 
        = ((0x7ffU == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[1U] 
                                 >> 0x14U))) & (0ULL 
                                                == 
                                                (0xfffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[0U]))))));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a___05Fh6007 
        = (((QData)((IData)((0U != (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                              >> 0x14U))))) 
            << 0x34U) | (0xfffffffffffffULL & (((QData)((IData)(
                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])))));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands1_3_BITS_126_TO_116_4_EQ_0_5_AND_ETC___05F_d75 
        = ((((0U == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[3U] 
                               >> 0x14U))) & (0ULL 
                                              == (0xfffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[2U])))))) 
            | ((0U == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[1U] 
                                 >> 0x14U))) & (0ULL 
                                                == 
                                                (0xfffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[0U])))))))
            ? 1U : 0U);
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands1_3_BITS_126_TO_116_4_EQ_2047_5___05FETC___05F_d66 
        = ((((0x7ffU == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[3U] 
                                   >> 0x14U))) & (0ULL 
                                                  != 
                                                  (0xfffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[2U])))))) 
            | ((0x7ffU == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[1U] 
                                     >> 0x14U))) & 
               (0ULL != (0xfffffffffffffULL & (((QData)((IData)(
                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[0U])))))))
            ? 0x10U : 0U);
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh4806 
        = (0x1fffU & (((0U == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[3U] 
                                         >> 0x14U)))
                        ? 1U : (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[3U] 
                                          >> 0x14U))) 
                      + ((0U == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[1U] 
                                           >> 0x14U)))
                          ? 1U : (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[1U] 
                                            >> 0x14U)))));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__exp_out___05Fh1197212 
        = ((IData)((8ULL == (0x3ff8000000009ULL & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011)))
            ? 0U : (0x7ffU & ((0U == vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1)
                               ? ((0x7feU == (0x7ffU 
                                              & (IData)(
                                                        (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                         >> 0x27U))))
                                   ? (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                              >> 0x27U))
                                   : ((IData)(1U) + (IData)(
                                                            (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                             >> 0x27U))))
                               : (((0U != (0x7ffU & (IData)(
                                                            (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                             >> 0x27U)))) 
                                   & (0x80000000U < 
                                      (0x80000000U 
                                       ^ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1 
                                          - (IData)(1U)))))
                                   ? ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1_75_MINUS_1_81_SLE_0_CONCAT_rg_e011_59_BITS___05FETC___05F_d927)
                                       ? ((IData)(1U) 
                                          + ((IData)(
                                                     (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                      >> 0x27U)) 
                                             - vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1))
                                       : 0U) : (IData)(
                                                       (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                        >> 0x27U))))));
    __Vtemp215[0U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[1U] 
                       << 0x1fU) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[0U] 
                                    >> 1U));
    __Vtemp215[1U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[2U] 
                       << 0x1fU) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[1U] 
                                    >> 1U));
    __Vtemp215[2U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[3U] 
                       << 0x1fU) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[2U] 
                                    >> 1U));
    __Vtemp215[3U] = (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[3U] 
                                >> 1U));
    VL_EXTEND_WW(108,107, __Vtemp216, __Vtemp215);
    if ((1U & (((0x7feU == (0x7ffU & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                              >> 0x27U)))) 
                & (0U == vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1)) 
               | (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                          >> 4U))))) {
        __Vtemp224[0U] = 0xffffffffU;
        __Vtemp224[1U] = 0xffffffffU;
        __Vtemp224[2U] = 0xffffffffU;
        __Vtemp224[3U] = 0x1ffU;
    } else {
        __Vtemp224[0U] = (((0U != (0x7ffU & (IData)(
                                                    (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                     >> 0x27U)))) 
                           & (0x80000000U < (0x80000000U 
                                             ^ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1 
                                                - (IData)(1U)))))
                           ? vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[0U]
                           : ((0U == (0x7ffU & (IData)(
                                                       (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                        >> 0x27U))))
                               ? ((1U & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                 >> 3U)))
                                   ? ((0U == (IData)(
                                                     (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                      >> 7U)))
                                       ? 0U : vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[0U])
                                   : __Vtemp216[0U])
                               : vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[0U]));
        __Vtemp224[1U] = (((0U != (0x7ffU & (IData)(
                                                    (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                     >> 0x27U)))) 
                           & (0x80000000U < (0x80000000U 
                                             ^ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1 
                                                - (IData)(1U)))))
                           ? vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[1U]
                           : ((0U == (0x7ffU & (IData)(
                                                       (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                        >> 0x27U))))
                               ? ((1U & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                 >> 3U)))
                                   ? ((0U == (IData)(
                                                     (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                      >> 7U)))
                                       ? 0U : vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[1U])
                                   : __Vtemp216[1U])
                               : vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[1U]));
        __Vtemp224[2U] = (((0U != (0x7ffU & (IData)(
                                                    (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                     >> 0x27U)))) 
                           & (0x80000000U < (0x80000000U 
                                             ^ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1 
                                                - (IData)(1U)))))
                           ? vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[2U]
                           : ((0U == (0x7ffU & (IData)(
                                                       (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                        >> 0x27U))))
                               ? ((1U & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                 >> 3U)))
                                   ? ((0U == (IData)(
                                                     (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                      >> 7U)))
                                       ? 0U : vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[2U])
                                   : __Vtemp216[2U])
                               : vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[2U]));
        __Vtemp224[3U] = (((0U != (0x7ffU & (IData)(
                                                    (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                     >> 0x27U)))) 
                           & (0x80000000U < (0x80000000U 
                                             ^ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1 
                                                - (IData)(1U)))))
                           ? vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[3U]
                           : ((0U == (0x7ffU & (IData)(
                                                       (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                        >> 0x27U))))
                               ? ((1U & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                 >> 3U)))
                                   ? ((0U == (IData)(
                                                     (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                      >> 7U)))
                                       ? 0U : vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[3U])
                                   : __Vtemp216[3U])
                               : vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[3U]));
    }
    if (((IData)((8ULL == (0x3ff8000000009ULL & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011))) 
         & (0U == (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                           >> 7U))))) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[3U] = 0U;
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[0U] 
            = ((1U & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                              >> 6U))) ? 0U : __Vtemp224[0U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[1U] 
            = ((1U & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                              >> 6U))) ? 0U : __Vtemp224[1U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[2U] 
            = ((1U & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                              >> 6U))) ? 0U : __Vtemp224[2U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[3U] 
            = ((1U & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                              >> 6U))) ? 0x180U : __Vtemp224[3U]);
    }
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__sfd_prec___05Fh1197214 
        = (((IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                     >> 3U)) & (0U != (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                               >> 7U))))
            ? (0U != (((mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[0U] 
                        | mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[1U]) 
                       | mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[2U]) 
                      | mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[3U]))
            : ((IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                        >> 3U)) & (0U == (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                  >> 7U)))));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d921 
        = (1U & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910[0U] 
                 | ((0x80000000U < (0x80000000U ^ (IData)(
                                                          (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                           >> 7U)))) 
                    & (0U != (((mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[0U] 
                                | mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[1U]) 
                               | mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[2U]) 
                              | mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[3U])))));
    mktb_dpfpmult__DOT__ifc_mult__DOT__e_xo___05Fh1199235 
        = ((0x7feU == (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                 >> 7U))) & (0xfffffffffffffULL 
                                             == mktb_dpfpmult__DOT__ifc_mult__DOT__sfd___05Fh1198856));
    mktb_dpfpmult__DOT__ifc_mult__DOT__sfd_res___05Fh1198858 
        = (0x3fffffffffffffULL & (1ULL + (((QData)((IData)(
                                                           (0U 
                                                            != 
                                                            (0x7ffU 
                                                             & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                                >> 7U))))) 
                                           << 0x34U) 
                                          | mktb_dpfpmult__DOT__ifc_mult__DOT__sfd___05Fh1198856)));
    mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_2047_04_AN_ETC___05F_d143 
        = ((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__a_qnan___05Fh5481) 
           | (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__b_qnan___05Fh5482));
    mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_2047_04_AN_ETC___05F_d131 
        = ((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__a_snan___05Fh5477) 
           | (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__b_snan___05Fh5478));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_rg_ETC___05F_d100 
        = ((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__a_z___05Fh5475) 
           | (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__b_z___05Fh5476));
    mktb_dpfpmult__DOT__ifc_mult__DOT__qnan_valid___05Fh5483 
        = (((((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__a_z___05Fh5475) 
              & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__b_qnan___05Fh5482)) 
             | ((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__a_qnan___05Fh5481) 
                & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__b_z___05Fh5476))) 
            | ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a_inf___05Fh5473) 
               & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__b_qnan___05Fh5482))) 
           | ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__b_inf___05Fh5474) 
              & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__a_qnan___05Fh5481)));
    mktb_dpfpmult__DOT__ifc_mult__DOT__snan_valid___05Fh5479 
        = (((((((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__a_z___05Fh5475) 
                & (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__b_inf___05Fh5474)) 
               | ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a_inf___05Fh5473) 
                  & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__b_z___05Fh5476))) 
              | ((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__a_z___05Fh5475) 
                 & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__b_snan___05Fh5478))) 
             | ((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__a_snan___05Fh5477) 
                & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__b_z___05Fh5476))) 
            | ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__b_inf___05Fh5474) 
               & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__a_snan___05Fh5477))) 
           | ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a_inf___05Fh5473) 
              & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__b_snan___05Fh5478)));
    mktb_dpfpmult__DOT__ifc_mult__DOT__IF_0b0_CONCAT_NOT_rg_x0_99_BITS_17_TO_7_020_EQ_ETC___05F_d1054 
        = ((1U & (IData)((mktb_dpfpmult__DOT__ifc_mult__DOT__sfd_res___05Fh1198858 
                          >> 0x35U))) ? ((0x7feU == 
                                          (0x7ffU & 
                                           (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                            >> 7U)))
                                          ? 0x7ff0000000000000ULL
                                          : (((QData)((IData)(
                                                              (0x7ffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                                    << 0x19U) 
                                                                   | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                                      >> 7U)))))) 
                                              << 0x34U) 
                                             | (0xfffffffffffffULL 
                                                & (mktb_dpfpmult__DOT__ifc_mult__DOT__sfd_res___05Fh1198858 
                                                   >> 1U))))
            : (((QData)((IData)((((0U == (0x7ffU & 
                                          (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                           >> 7U))) 
                                  & (1U == (3U & (IData)(
                                                         (mktb_dpfpmult__DOT__ifc_mult__DOT__sfd_res___05Fh1198858 
                                                          >> 0x34U)))))
                                  ? 1U : (0x7ffU & 
                                          (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                           >> 7U))))) 
                << 0x34U) | (0xfffffffffffffULL & mktb_dpfpmult__DOT__ifc_mult__DOT__sfd_res___05Fh1198858)));
    if (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_rg_ETC___05F_d100) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_ETC___05F_d133 
            = (1U & (~ (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__snan_valid___05Fh5479)));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__snan___05Fh5480 
            = mktb_dpfpmult__DOT__ifc_mult__DOT__snan_valid___05Fh5479;
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_ETC___05F_d133 
            = (1U & (~ (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_2047_04_AN_ETC___05F_d131)));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__snan___05Fh5480 
            = mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_2047_04_AN_ETC___05F_d131;
    }
    __Vtemp231[0U] = (((IData)((((QData)((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s1)) 
                                 << 0x3fU) | ((0x40U 
                                               & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U])
                                               ? 0x7ff8000000000000ULL
                                               : ((4U 
                                                   & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))
                                                    ? mktb_dpfpmult__DOT__ifc_mult__DOT__IF_0b0_CONCAT_NOT_rg_x0_99_BITS_17_TO_7_020_EQ_ETC___05F_d1054
                                                    : 
                                                   ((1U 
                                                     & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))
                                                     ? mktb_dpfpmult__DOT__ifc_mult__DOT__IF_0b0_CONCAT_NOT_rg_x0_99_BITS_17_TO_7_020_EQ_ETC___05F_d1054
                                                     : 
                                                    (((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_x0_99_BIT_123_001_THEN_rg_x0_99_BIT_71_0_ETC___05F_d1028) 
                                                      | (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_x0_99_BIT_123_001_THEN_NOT_rg_x0_99_BIT___05FETC___05F_d1037))
                                                      ? mktb_dpfpmult__DOT__ifc_mult__DOT__IF_0b0_CONCAT_NOT_rg_x0_99_BITS_17_TO_7_020_EQ_ETC___05F_d1054
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x7ffU 
                                                                        & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                                           >> 7U)))) 
                                                       << 0x34U) 
                                                      | mktb_dpfpmult__DOT__ifc_mult__DOT__sfd___05Fh1198856))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (0x7ffU 
                                                                     & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                                        >> 7U)))) 
                                                    << 0x34U) 
                                                   | mktb_dpfpmult__DOT__ifc_mult__DOT__sfd___05Fh1198856))))) 
                       << 5U) | ((0x10U & (((~ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                >> 6U)) 
                                            & ((1U 
                                                & ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                    >> 4U) 
                                                   | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                      >> 3U)))
                                                ? ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_exc2) 
                                                   >> 4U)
                                                : (
                                                   ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                     >> 2U) 
                                                    | (0U 
                                                       != (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))) 
                                                   & ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_exc2) 
                                                      >> 4U)))) 
                                           << 4U)) 
                                 | ((4U & (((~ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                >> 6U)) 
                                            << 2U) 
                                           & ((0x3ffffffcU 
                                               & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                  >> 2U)) 
                                              | (((8U 
                                                   & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U])
                                                   ? 
                                                  ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_exc2) 
                                                   >> 2U)
                                                   : 
                                                  (((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                     >> 2U) 
                                                    | (0U 
                                                       != (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))) 
                                                   & ((((((0U 
                                                           != (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855)) 
                                                          & (1U 
                                                             != (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))) 
                                                         & (2U 
                                                            != (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))) 
                                                        & (3U 
                                                           != (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))) 
                                                       & ((4U 
                                                           == (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))
                                                           ? 
                                                          ((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_x0_99_BIT_123_001_THEN_rg_x0_99_BIT_71_0_ETC___05F_d1028)
                                                            ? (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__e_xo___05Fh1199235)
                                                            : 
                                                           (((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_x0_99_BIT_123_001_THEN_NOT_rg_x0_99_BIT___05FETC___05F_d1037) 
                                                             & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__e_xo___05Fh1199235)) 
                                                            & (0ULL 
                                                               != 
                                                               (0x7ffffffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U])) 
                                                                    << 0x2eU) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[1U])) 
                                                                       << 0xeU) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U])) 
                                                                         >> 0x12U)))))))
                                                           : 
                                                          (((5U 
                                                             == (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855)) 
                                                            | (6U 
                                                               == (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855)))
                                                            ? 
                                                           ((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__e_xo___05Fh1199235) 
                                                            & (0ULL 
                                                               != 
                                                               (0x7ffffffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U])) 
                                                                    << 0x2eU) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[1U])) 
                                                                       << 0xeU) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U])) 
                                                                         >> 0x12U))))))
                                                            : 
                                                           (((7U 
                                                              == (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855)) 
                                                             & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__e_xo___05Fh1199235)) 
                                                            & (0ULL 
                                                               != 
                                                               (0x7ffffffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U])) 
                                                                    << 0x2eU) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[1U])) 
                                                                       << 0xeU) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U])) 
                                                                         >> 0x12U))))))))) 
                                                      | ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_exc2) 
                                                         >> 2U)))) 
                                                 << 2U)))) 
                                    | ((2U & (((~ (
                                                   vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                   >> 6U)) 
                                               & ((0x10U 
                                                   & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U])
                                                   ? 
                                                  ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_exc2) 
                                                   >> 1U)
                                                   : 
                                                  ((8U 
                                                    & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U])
                                                    ? 
                                                   (((6U 
                                                      == (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))
                                                      ? 
                                                     ((0xfffffffffffffULL 
                                                       != mktb_dpfpmult__DOT__ifc_mult__DOT__sfd___05Fh1198856) 
                                                      | (3U 
                                                         != (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1199640)))
                                                      : 
                                                     (((7U 
                                                        != (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855)) 
                                                       | (0xfffffffffffffULL 
                                                          != mktb_dpfpmult__DOT__ifc_mult__DOT__sfd___05Fh1198856)) 
                                                      | (3U 
                                                         != (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1199640)))) 
                                                    | ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_exc2) 
                                                       >> 1U))
                                                    : 
                                                   (((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                      >> 2U) 
                                                     | (0U 
                                                        != (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))) 
                                                    & ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_exc2) 
                                                       >> 1U))))) 
                                              << 1U)) 
                                       | (1U & ((~ 
                                                 (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                  >> 6U)) 
                                                & ((((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                      >> 4U) 
                                                     | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                        >> 3U)) 
                                                    | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                       >> 2U)) 
                                                   | (0U 
                                                      != (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855)))))))));
    __Vtemp231[1U] = (((IData)((((QData)((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s1)) 
                                 << 0x3fU) | ((0x40U 
                                               & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U])
                                               ? 0x7ff8000000000000ULL
                                               : ((4U 
                                                   & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))
                                                    ? mktb_dpfpmult__DOT__ifc_mult__DOT__IF_0b0_CONCAT_NOT_rg_x0_99_BITS_17_TO_7_020_EQ_ETC___05F_d1054
                                                    : 
                                                   ((1U 
                                                     & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))
                                                     ? mktb_dpfpmult__DOT__ifc_mult__DOT__IF_0b0_CONCAT_NOT_rg_x0_99_BITS_17_TO_7_020_EQ_ETC___05F_d1054
                                                     : 
                                                    (((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_x0_99_BIT_123_001_THEN_rg_x0_99_BIT_71_0_ETC___05F_d1028) 
                                                      | (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_x0_99_BIT_123_001_THEN_NOT_rg_x0_99_BIT___05FETC___05F_d1037))
                                                      ? mktb_dpfpmult__DOT__ifc_mult__DOT__IF_0b0_CONCAT_NOT_rg_x0_99_BITS_17_TO_7_020_EQ_ETC___05F_d1054
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x7ffU 
                                                                        & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                                           >> 7U)))) 
                                                       << 0x34U) 
                                                      | mktb_dpfpmult__DOT__ifc_mult__DOT__sfd___05Fh1198856))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (0x7ffU 
                                                                     & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                                        >> 7U)))) 
                                                    << 0x34U) 
                                                   | mktb_dpfpmult__DOT__ifc_mult__DOT__sfd___05Fh1198856))))) 
                       >> 0x1bU) | ((IData)(((((QData)((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s1)) 
                                               << 0x3fU) 
                                              | ((0x40U 
                                                  & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U])
                                                  ? 0x7ff8000000000000ULL
                                                  : 
                                                 ((4U 
                                                   & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))
                                                    ? mktb_dpfpmult__DOT__ifc_mult__DOT__IF_0b0_CONCAT_NOT_rg_x0_99_BITS_17_TO_7_020_EQ_ETC___05F_d1054
                                                    : 
                                                   ((1U 
                                                     & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))
                                                     ? mktb_dpfpmult__DOT__ifc_mult__DOT__IF_0b0_CONCAT_NOT_rg_x0_99_BITS_17_TO_7_020_EQ_ETC___05F_d1054
                                                     : 
                                                    (((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_x0_99_BIT_123_001_THEN_rg_x0_99_BIT_71_0_ETC___05F_d1028) 
                                                      | (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_x0_99_BIT_123_001_THEN_NOT_rg_x0_99_BIT___05FETC___05F_d1037))
                                                      ? mktb_dpfpmult__DOT__ifc_mult__DOT__IF_0b0_CONCAT_NOT_rg_x0_99_BITS_17_TO_7_020_EQ_ETC___05F_d1054
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x7ffU 
                                                                        & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                                           >> 7U)))) 
                                                       << 0x34U) 
                                                      | mktb_dpfpmult__DOT__ifc_mult__DOT__sfd___05Fh1198856))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (0x7ffU 
                                                                     & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                                        >> 7U)))) 
                                                    << 0x34U) 
                                                   | mktb_dpfpmult__DOT__ifc_mult__DOT__sfd___05Fh1198856)))) 
                                             >> 0x20U)) 
                                    << 5U));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d_D_IN[0U] 
        = __Vtemp231[0U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d_D_IN[1U] 
        = __Vtemp231[1U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d_D_IN[2U] 
        = ((IData)(((((QData)((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s1)) 
                      << 0x3fU) | ((0x40U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U])
                                    ? 0x7ff8000000000000ULL
                                    : ((4U & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))
                                        ? ((2U & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))
                                            ? mktb_dpfpmult__DOT__ifc_mult__DOT__IF_0b0_CONCAT_NOT_rg_x0_99_BITS_17_TO_7_020_EQ_ETC___05F_d1054
                                            : ((1U 
                                                & (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))
                                                ? mktb_dpfpmult__DOT__ifc_mult__DOT__IF_0b0_CONCAT_NOT_rg_x0_99_BITS_17_TO_7_020_EQ_ETC___05F_d1054
                                                : (
                                                   ((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_x0_99_BIT_123_001_THEN_rg_x0_99_BIT_71_0_ETC___05F_d1028) 
                                                    | (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_x0_99_BIT_123_001_THEN_NOT_rg_x0_99_BIT___05FETC___05F_d1037))
                                                    ? mktb_dpfpmult__DOT__ifc_mult__DOT__IF_0b0_CONCAT_NOT_rg_x0_99_BITS_17_TO_7_020_EQ_ETC___05F_d1054
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x7ffU 
                                                                      & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                                         >> 7U)))) 
                                                     << 0x34U) 
                                                    | mktb_dpfpmult__DOT__ifc_mult__DOT__sfd___05Fh1198856))))
                                        : (((QData)((IData)(
                                                            (0x7ffU 
                                                             & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                                >> 7U)))) 
                                            << 0x34U) 
                                           | mktb_dpfpmult__DOT__ifc_mult__DOT__sfd___05Fh1198856)))) 
                    >> 0x20U)) >> 0x1bU);
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__qnan___05Fh5484 
        = ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_ETC___05F_d133) 
           & ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_rg_ETC___05F_d100)
               ? (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__qnan_valid___05Fh5483)
               : (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_2047_04_AN_ETC___05F_d143)));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_ETC___05F_d151 
        = (1U & ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__snan___05Fh5480) 
                 | ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_rg_ETC___05F_d100)
                     ? (~ (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__qnan_valid___05Fh5483))
                     : (~ (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_2047_04_AN_ETC___05F_d143)))));
}

void Vmktb_dpfpmult___024root___eval_initial(Vmktb_dpfpmult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmktb_dpfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmktb_dpfpmult___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
    Vmktb_dpfpmult___024root___initial__TOP__3(vlSelf);
}

void Vmktb_dpfpmult___024root___eval_settle(Vmktb_dpfpmult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmktb_dpfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmktb_dpfpmult___024root___eval_settle\n"); );
    // Body
    Vmktb_dpfpmult___024root___settle__TOP__4(vlSelf);
}

void Vmktb_dpfpmult___024root___final(Vmktb_dpfpmult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmktb_dpfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmktb_dpfpmult___024root___final\n"); );
}

void Vmktb_dpfpmult___024root___ctor_var_reset(Vmktb_dpfpmult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmktb_dpfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmktb_dpfpmult___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = 0;
    vlSelf->RST_N = 0;
    vlSelf->mktb_dpfpmult__DOT__state = 0;
    vlSelf->mktb_dpfpmult__DOT__state_D_IN = 0;
    VL_ZERO_RESET_W(128, vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in);
    vlSelf->mktb_dpfpmult__DOT__ifc_mult_EN_send = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1_D_IN = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex0 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex00 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex01 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex02 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex1 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex11 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_0 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_1 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_2 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_3 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_4 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e0 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e00 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e01 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e02 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_exc2 = 0;
    VL_ZERO_RESET_W(128, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1);
    VL_ZERO_RESET_W(128, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2);
    VL_ZERO_RESET_W(128, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3);
    VL_ZERO_RESET_W(69, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d);
    VL_ZERO_RESET_W(69, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d_D_IN);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0);
    VL_ZERO_RESET_W(216, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1);
    VL_ZERO_RESET_W(216, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2);
    VL_ZERO_RESET_W(216, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3);
    VL_ZERO_RESET_W(216, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4);
    VL_ZERO_RESET_W(216, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5);
    VL_ZERO_RESET_W(216, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_2);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6);
    VL_ZERO_RESET_W(216, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_2);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7);
    VL_ZERO_RESET_W(216, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_2);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8);
    VL_ZERO_RESET_W(216, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_2);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11);
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s0 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s00 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s01 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s02 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s1 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s11 = 0;
    VL_ZERO_RESET_W(124, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205);
    VL_ZERO_RESET_W(108, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213);
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a___05Fh6007 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh4806 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__exp_out___05Fh1197212 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands1_3_BITS_126_TO_116_4_EQ_2047_5___05FETC___05F_d66 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands1_3_BITS_126_TO_116_4_EQ_0_5_AND_ETC___05F_d75 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_ETC___05F_d133 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_ETC___05F_d151 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a_inf___05Fh5473 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__b_inf___05Fh5474 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1_75_MINUS_1_81_SLE_0_CONCAT_rg_e011_59_BITS___05FETC___05F_d927 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__qnan___05Fh5484 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_rg_ETC___05F_d100 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d921 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__sfd_prec___05Fh1197214 = 0;
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__snan___05Fh5480 = 0;
}
