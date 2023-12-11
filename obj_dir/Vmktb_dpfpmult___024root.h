// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmktb_dpfpmult.h for the primary calling header

#ifndef VERILATED_VMKTB_DPFPMULT___024ROOT_H_
#define VERILATED_VMKTB_DPFPMULT___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmktb_dpfpmult__Syms;

//----------

VL_MODULE(Vmktb_dpfpmult___024root) {
  public:

    // PORTS
    VL_IN8(CLK,0,0);
    VL_IN8(RST_N,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ mktb_dpfpmult__DOT__state;
        CData/*7:0*/ mktb_dpfpmult__DOT__state_D_IN;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult_EN_send;
        CData/*2:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex0;
        CData/*2:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex00;
        CData/*2:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex01;
        CData/*2:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex02;
        CData/*2:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex1;
        CData/*2:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex11;
        CData/*2:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_0;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_1;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_2;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_3;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_4;
        CData/*4:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_exc2;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s0;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s00;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s01;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s02;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s1;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s11;
        CData/*4:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands1_3_BITS_126_TO_116_4_EQ_2047_5___05FETC___05F_d66;
        CData/*1:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands1_3_BITS_126_TO_116_4_EQ_0_5_AND_ETC___05F_d75;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_ETC___05F_d133;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_ETC___05F_d151;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__a_inf___05Fh5473;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__b_inf___05Fh5474;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__i1_75_MINUS_1_81_SLE_0_CONCAT_rg_e011_59_BITS___05FETC___05F_d927;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__qnan___05Fh5484;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_rg_ETC___05F_d100;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d921;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__sfd_prec___05Fh1197214;
        CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__snan___05Fh5480;
        SData/*12:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh4806;
        SData/*10:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__exp_out___05Fh1197212;
        VlWide<4>/*127:0*/ mktb_dpfpmult__DOT__ifc_mult_send_data_in;
        IData/*31:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__i1;
        IData/*31:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__i1_D_IN;
        VlWide<4>/*127:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1;
        VlWide<4>/*127:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2;
        VlWide<4>/*127:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3;
        VlWide<3>/*68:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d;
        VlWide<3>/*68:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d_D_IN;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0;
        VlWide<7>/*215:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1;
        VlWide<7>/*215:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2;
        VlWide<7>/*215:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3;
        VlWide<7>/*215:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4;
        VlWide<7>/*215:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5;
        VlWide<7>/*215:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_2;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6;
        VlWide<7>/*215:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_2;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7;
        VlWide<7>/*215:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_2;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8;
    };
    struct {
        VlWide<7>/*215:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_2;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11;
        VlWide<4>/*123:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205;
        VlWide<4>/*107:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213;
        QData/*49:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e0;
        QData/*49:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e00;
        QData/*49:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e01;
        QData/*49:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011;
        QData/*49:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e02;
        QData/*59:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__a___05Fh6007;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__CLK;

    // INTERNAL VARIABLES
    Vmktb_dpfpmult__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmktb_dpfpmult___024root);  ///< Copying not allowed
  public:
    Vmktb_dpfpmult___024root(const char* name);
    ~Vmktb_dpfpmult___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vmktb_dpfpmult__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
