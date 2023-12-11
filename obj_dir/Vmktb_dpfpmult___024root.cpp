// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmktb_dpfpmult.h for the primary calling header

#include "Vmktb_dpfpmult___024root.h"
#include "Vmktb_dpfpmult__Syms.h"

//==========

extern const VlUnpacked<VlWide<4>/*127:0*/, 16> Vmktb_dpfpmult__ConstPool__TABLE_098eb8d6_0;

VL_INLINE_OPT void Vmktb_dpfpmult___024root___sequent__TOP__1(Vmktb_dpfpmult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmktb_dpfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmktb_dpfpmult___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_5;
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
    VlWide<4>/*127:0*/ __Vtemp12;
    VlWide<4>/*127:0*/ __Vtemp18;
    VlWide<4>/*127:0*/ __Vtemp21;
    VlWide<4>/*127:0*/ __Vtemp24;
    VlWide<4>/*127:0*/ __Vtemp25;
    VlWide<4>/*127:0*/ __Vtemp30;
    VlWide<4>/*127:0*/ __Vtemp33;
    VlWide<4>/*127:0*/ __Vtemp34;
    VlWide<4>/*127:0*/ __Vtemp35;
    VlWide<4>/*127:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<4>/*127:0*/ __Vtemp49;
    VlWide<4>/*127:0*/ __Vtemp50;
    VlWide<4>/*127:0*/ __Vtemp58;
    VlWide<4>/*127:0*/ __Vtemp74;
    VlWide<4>/*127:0*/ __Vtemp75;
    VlWide<4>/*127:0*/ __Vtemp76;
    VlWide<4>/*127:0*/ __Vtemp77;
    VlWide<3>/*95:0*/ __Vtemp82;
    VlWide<3>/*95:0*/ __Vtemp83;
    VlWide<3>/*95:0*/ __Vtemp84;
    VlWide<3>/*95:0*/ __Vtemp90;
    VlWide<3>/*95:0*/ __Vtemp91;
    VlWide<3>/*95:0*/ __Vtemp92;
    VlWide<3>/*95:0*/ __Vtemp98;
    VlWide<3>/*95:0*/ __Vtemp99;
    VlWide<3>/*95:0*/ __Vtemp100;
    VlWide<4>/*127:0*/ __Vtemp105;
    VlWide<4>/*127:0*/ __Vtemp109;
    VlWide<4>/*127:0*/ __Vtemp110;
    VlWide<4>/*127:0*/ __Vtemp111;
    VlWide<4>/*127:0*/ __Vtemp116;
    VlWide<4>/*127:0*/ __Vtemp117;
    VlWide<4>/*127:0*/ __Vtemp118;
    VlWide<3>/*95:0*/ __Vtemp123;
    VlWide<3>/*95:0*/ __Vtemp124;
    VlWide<3>/*95:0*/ __Vtemp125;
    VlWide<3>/*95:0*/ __Vtemp130;
    VlWide<3>/*95:0*/ __Vtemp131;
    VlWide<3>/*95:0*/ __Vtemp132;
    VlWide<3>/*95:0*/ __Vtemp138;
    VlWide<3>/*95:0*/ __Vtemp139;
    VlWide<3>/*95:0*/ __Vtemp140;
    VlWide<4>/*127:0*/ __Vtemp145;
    VlWide<4>/*127:0*/ __Vtemp146;
    VlWide<4>/*127:0*/ __Vtemp150;
    VlWide<4>/*127:0*/ __Vtemp151;
    VlWide<4>/*127:0*/ __Vtemp155;
    VlWide<4>/*127:0*/ __Vtemp156;
    VlWide<4>/*127:0*/ __Vtemp160;
    VlWide<4>/*127:0*/ __Vtemp161;
    VlWide<4>/*127:0*/ __Vtemp165;
    VlWide<4>/*127:0*/ __Vtemp166;
    VlWide<4>/*127:0*/ __Vtemp170;
    VlWide<4>/*127:0*/ __Vtemp171;
    VlWide<4>/*127:0*/ __Vtemp175;
    VlWide<4>/*127:0*/ __Vtemp176;
    VlWide<4>/*127:0*/ __Vtemp180;
    VlWide<4>/*127:0*/ __Vtemp181;
    VlWide<4>/*127:0*/ __Vtemp185;
    VlWide<4>/*127:0*/ __Vtemp186;
    QData/*62:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__IF_0b0_CONCAT_NOT_rg_x0_99_BITS_17_TO_7_020_EQ_ETC___05F_d1054;
    QData/*53:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__sfd_res___05Fh1198858;
    QData/*51:0*/ mktb_dpfpmult__DOT__ifc_mult__DOT__sfd___05Fh1198856;
    // Body
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d_D_IN[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[1U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d_D_IN[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[2U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d_D_IN[2U];
        vlSelf->mktb_dpfpmult__DOT__state = vlSelf->mktb_dpfpmult__DOT__state_D_IN;
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__state = 0U;
    }
    if (vlSelf->RST_N) {
        if (vlSelf->mktb_dpfpmult__DOT__ifc_mult_EN_send) {
            vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[0U] 
                = vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[0U];
            vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[1U] 
                = vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[1U];
            vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[2U] 
                = vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[2U];
            vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[3U] 
                = vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[3U];
        }
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2[3U] = 0U;
    }
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_exc2 
            = (0x1fU & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                >> 2U)));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex1;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s1 
            = (((~ (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                            >> 6U))) & (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s11)) 
               & 1U);
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_exc2 = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s1 = 0U;
    }
    __Vtemp12[0U] = ((((0U == (0x7ffU & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                 >> 0x27U))))
                        ? ((0xfffffffeU & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[0U]) 
                           | (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d921))
                        : vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[0U]) 
                      << 0x12U) | (((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__exp_out___05Fh1197212) 
                                    << 7U) | ((0x60U 
                                               & ((IData)(
                                                          (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                           >> 5U)) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & ((((0x7feU 
                                                        == 
                                                        (0x7ffU 
                                                         & (IData)(
                                                                   (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                                    >> 0x27U)))) 
                                                       & (0U 
                                                          == vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1)) 
                                                      | (IData)(
                                                                (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                                 >> 4U))) 
                                                     << 4U)) 
                                                 | (((((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1_75_MINUS_1_81_SLE_0_CONCAT_rg_e011_59_BITS___05FETC___05F_d927) 
                                                       | (0ULL 
                                                          != 
                                                          (0xfffffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[0U])))))) 
                                                      & (((0U 
                                                           == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__exp_out___05Fh1197212)) 
                                                          & (0U 
                                                             != 
                                                             (((0x80000U 
                                                                & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910[1U])
                                                                ? 2U
                                                                : 0U) 
                                                              | (0ULL 
                                                                 != 
                                                                 (0x7ffffffffffffULL 
                                                                  & (((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910[0U])))))))) 
                                                         | ((((0ULL 
                                                               != 
                                                               (0xfffffffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[0U]))))) 
                                                              | (IData)(
                                                                        (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                                         >> 3U))) 
                                                             & (0U 
                                                                == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__exp_out___05Fh1197212))) 
                                                            & (0U 
                                                               != 
                                                               (((0x80000U 
                                                                  & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[1U])
                                                                  ? 2U
                                                                  : 0U) 
                                                                | (0ULL 
                                                                   != 
                                                                   ((0x7fffffffffffeULL 
                                                                     & (((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[1U])) 
                                                                         << 0x20U) 
                                                                        | (0xfffffffffffffffeULL 
                                                                           & (QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[0U]))))) 
                                                                    | (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[0U] 
                                                                                | (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__sfd_prec___05Fh1197214)))))))))))) 
                                                     << 3U) 
                                                    | (((((0U 
                                                           == 
                                                           (0x7ffU 
                                                            & (IData)(
                                                                      (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                                       >> 0x27U)))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__exp_out___05Fh1197212))) 
                                                         & (0ULL 
                                                            != 
                                                            (0xfffffffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[0U])))))) 
                                                        << 2U) 
                                                       | (((((0U 
                                                              == 
                                                              (0x7ffU 
                                                               & (IData)(
                                                                         (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                                          >> 0x27U)))) 
                                                             | (0x80000000U 
                                                                >= 
                                                                (0x80000000U 
                                                                 ^ 
                                                                 (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1 
                                                                  - (IData)(1U))))) 
                                                            & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910[1U] 
                                                               >> 0x13U))
                                                            ? 2U
                                                            : 0U) 
                                                          | (((0U 
                                                               == 
                                                               (0x7ffU 
                                                                & (IData)(
                                                                          (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                                           >> 0x27U)))) 
                                                              | (0x80000000U 
                                                                 >= 
                                                                 (0x80000000U 
                                                                  ^ 
                                                                  (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1 
                                                                   - (IData)(1U))))) 
                                                             & ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__sfd_prec___05Fh1197214) 
                                                                | (0ULL 
                                                                   != 
                                                                   ((0x7fffffffffffeULL 
                                                                     & (((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910[1U])) 
                                                                         << 0x20U) 
                                                                        | (0xfffffffffffffffeULL 
                                                                           & (QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910[0U]))))) 
                                                                    | (QData)((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d921)))))))))))));
    __Vtemp12[1U] = ((((0U == (0x7ffU & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                 >> 0x27U))))
                        ? ((0xfffffffeU & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[0U]) 
                           | (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d921))
                        : vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[0U]) 
                      >> 0xeU) | (((0U == (0x7ffU & (IData)(
                                                            (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                             >> 0x27U))))
                                    ? ((1U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[1U]) 
                                       | (0xfffffffeU 
                                          & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[1U]))
                                    : vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[1U]) 
                                  << 0x12U));
    __Vtemp12[2U] = ((((0U == (0x7ffU & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                 >> 0x27U))))
                        ? ((1U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[1U]) 
                           | (0xfffffffeU & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[1U]))
                        : vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[1U]) 
                      >> 0xeU) | (((0U == (0x7ffU & (IData)(
                                                            (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                             >> 0x27U))))
                                    ? ((1U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[2U]) 
                                       | (0xfffffffeU 
                                          & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[2U]))
                                    : vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[2U]) 
                                  << 0x12U));
    __Vtemp12[3U] = ((((0U == (0x7ffU & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                 >> 0x27U))))
                        ? ((1U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[2U]) 
                           | (0xfffffffeU & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[2U]))
                        : vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[2U]) 
                      >> 0xeU) | (0xffc0000U & (((0U 
                                                  == 
                                                  (0x7ffU 
                                                   & (IData)(
                                                             (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                              >> 0x27U))))
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[3U]) 
                                                  | (0xffeU 
                                                     & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[3U]))
                                                  : 
                                                 vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[3U]) 
                                                << 0x12U)));
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
            = __Vtemp12[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[1U] 
            = __Vtemp12[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U] 
            = __Vtemp12[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[3U] 
            = __Vtemp12[3U];
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[3U] = 0U;
    }
    vlSelf->mktb_dpfpmult__DOT__state_D_IN = (0xffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->mktb_dpfpmult__DOT__state)));
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
    mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_5 
        = ((IData)(vlSelf->RST_N) & (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_4));
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex1 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex11;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s11 
            = (((~ (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e01 
                            >> 6U))) & (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s01)) 
               & 1U);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1_D_IN;
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex1 = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s11 = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1 = 0U;
    }
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
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e01;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[0U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[1U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[2U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[3U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U];
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 = 0ULL;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[3U] = 0U;
    }
    mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_2047_04_AN_ETC___05F_d143 
        = ((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__a_qnan___05Fh5481) 
           | (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__b_qnan___05Fh5482));
    mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_2047_04_AN_ETC___05F_d131 
        = ((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__a_snan___05Fh5477) 
           | (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__b_snan___05Fh5478));
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
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_4 
        = ((IData)(vlSelf->RST_N) & (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_3));
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex11 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex01;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s01 
            = ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s00) 
               & 1U);
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex11 = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s01 = 0U;
    }
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
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1_75_MINUS_1_81_SLE_0_CONCAT_rg_e011_59_BITS___05FETC___05F_d927 
        = ((0x80000000U ^ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1 
                           - (IData)(1U))) <= (0x80000000U 
                                               ^ (0x7ffU 
                                                  & ((IData)(
                                                             (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                              >> 0x27U)) 
                                                     - (IData)(1U)))));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e01 
        = ((IData)(vlSelf->RST_N) ? vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e00
            : 0ULL);
    VL_SHIFTR_WWI(108,108,32, __Vtemp18, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11, (IData)(
                                                                                (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                                                                >> 7U)));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910[0U] 
        = __Vtemp18[0U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910[1U] 
        = __Vtemp18[1U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910[2U] 
        = __Vtemp18[2U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BIT_38_08_THEN_D_ETC___05F_d910[3U] 
        = (0xfffU & __Vtemp18[3U]);
    VL_SHIFTR_WWI(108,108,32, __Vtemp21, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11, 
                  ((IData)(1U) + (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                          >> 7U))));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[0U] 
        = __Vtemp21[0U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[1U] 
        = __Vtemp21[1U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[2U] 
        = __Vtemp21[2U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11_88_SRL_IF_rg_e011_59_BITS_38_TO_7_71___05FETC___05F_d897[3U] 
        = (0xfffU & __Vtemp21[3U]);
    VL_SHIFTL_WWI(108,108,32, __Vtemp24, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11, 
                  (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1 
                   - (IData)(1U)));
    VL_SHIFTL_WWI(108,108,11, __Vtemp25, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11, 
                  (0x7ffU & ((IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                      >> 0x27U)) - (IData)(1U))));
    if (((0x80000000U ^ vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1) 
         <= (0x80000000U ^ (0x7ffU & ((IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                               >> 0x27U)) 
                                      - (IData)(1U)))))) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[0U] 
            = __Vtemp24[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[1U] 
            = __Vtemp24[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[2U] 
            = __Vtemp24[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[3U] 
            = (0xfffU & __Vtemp24[3U]);
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[0U] 
            = __Vtemp25[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[1U] 
            = __Vtemp25[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[2U] 
            = __Vtemp25[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x02___05Fh1197205[3U] 
            = (0xfffU & __Vtemp25[3U]);
    }
    VL_SHIFTL_WWI(108,108,32, __Vtemp30, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11, 
                  ((IData)(0x6cU) - (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                             >> 7U))));
    mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[0U] 
        = __Vtemp30[0U];
    mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[1U] 
        = __Vtemp30[1U];
    mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[2U] 
        = __Vtemp30[2U];
    mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh1197741[3U] 
        = (0xfffU & __Vtemp30[3U]);
    VL_ADD_W(4, __Vtemp33, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_2, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_2);
    VL_ADD_W(4, __Vtemp34, __Vtemp33, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_2);
    VL_ADD_W(4, __Vtemp35, __Vtemp34, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_2);
    VL_ADD_W(4, __Vtemp36, __Vtemp35, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res);
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] 
            = __Vtemp36[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] 
            = __Vtemp36[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] 
            = __Vtemp36[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U] 
            = (0xfffU & __Vtemp36[3U]);
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res1[3U] = 0U;
    }
    __Vtemp40[0U] = (((IData)((((QData)((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s1)) 
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
                                           & ((1U & 
                                               ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                 >> 4U) 
                                                | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                   >> 3U)))
                                               ? ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_exc2) 
                                                  >> 4U)
                                               : ((
                                                   (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                    >> 2U) 
                                                   | (0U 
                                                      != (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855))) 
                                                  & ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_exc2) 
                                                     >> 4U)))) 
                                          << 4U)) | 
                                ((4U & (((~ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                             >> 6U)) 
                                         << 2U) & (
                                                   (0x3ffffffcU 
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
                                 | ((2U & (((~ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                >> 6U)) 
                                            & ((0x10U 
                                                & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U])
                                                ? ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_exc2) 
                                                   >> 1U)
                                                : (
                                                   (8U 
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
                                    | (1U & ((~ (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                 >> 6U)) 
                                             & ((((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                   >> 4U) 
                                                  | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                     >> 3U)) 
                                                 | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_x0[0U] 
                                                    >> 2U)) 
                                                | (0U 
                                                   != (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__guard___05Fh1198855)))))))));
    __Vtemp40[1U] = (((IData)((((QData)((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s1)) 
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
        = __Vtemp40[0U];
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d_D_IN[1U] 
        = __Vtemp40[1U];
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
    __Vtemp49[0U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[1U] 
                      << 0x1fU) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[0U] 
                                   >> 1U));
    __Vtemp49[1U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[2U] 
                      << 0x1fU) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[1U] 
                                   >> 1U));
    __Vtemp49[2U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[3U] 
                      << 0x1fU) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[2U] 
                                   >> 1U));
    __Vtemp49[3U] = (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[3U] 
                               >> 1U));
    VL_EXTEND_WW(108,107, __Vtemp50, __Vtemp49);
    if ((1U & (((0x7feU == (0x7ffU & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                                              >> 0x27U)))) 
                & (0U == vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__i1)) 
               | (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                          >> 4U))))) {
        __Vtemp58[0U] = 0xffffffffU;
        __Vtemp58[1U] = 0xffffffffU;
        __Vtemp58[2U] = 0xffffffffU;
        __Vtemp58[3U] = 0x1ffU;
    } else {
        __Vtemp58[0U] = (((0U != (0x7ffU & (IData)(
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
                                  : __Vtemp50[0U]) : 
                             vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[0U]));
        __Vtemp58[1U] = (((0U != (0x7ffU & (IData)(
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
                                  : __Vtemp50[1U]) : 
                             vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[1U]));
        __Vtemp58[2U] = (((0U != (0x7ffU & (IData)(
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
                                  : __Vtemp50[2U]) : 
                             vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[2U]));
        __Vtemp58[3U] = (((0U != (0x7ffU & (IData)(
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
                                  : __Vtemp50[3U]) : 
                             vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res11[3U]));
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
                              >> 6U))) ? 0U : __Vtemp58[0U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[1U] 
            = ((1U & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                              >> 6U))) ? 0U : __Vtemp58[1U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[2U] 
            = ((1U & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                              >> 6U))) ? 0U : __Vtemp58[2U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x_out___05Fh1197213[3U] 
            = ((1U & (IData)((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e011 
                              >> 6U))) ? 0x180U : __Vtemp58[3U]);
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
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_3 
        = ((IData)(vlSelf->RST_N) & (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_2));
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex01 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex00;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s00 
            = ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s0) 
               & 1U);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e00 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e0;
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex01 = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s00 = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e00 = 0ULL;
    }
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
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_2[0U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_2[1U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_2[2U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_2[3U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[3U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_2[0U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_2[1U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_2[2U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_2[3U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6[3U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_2[0U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_2[1U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_2[2U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_2[3U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7[3U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_2[0U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_2[1U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_2[2U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_2[3U] 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8[3U];
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_2[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_2[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_2[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_2[3U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_2[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_2[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_2[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_2[3U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_2[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_2[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_2[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_2[3U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_2[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_2[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_2[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_2[3U] = 0U;
    }
    VL_ADD_W(4, __Vtemp74, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1);
    VL_ADD_W(4, __Vtemp75, __Vtemp74, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2);
    VL_ADD_W(4, __Vtemp76, __Vtemp75, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3);
    VL_ADD_W(4, __Vtemp77, __Vtemp76, vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4);
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res[0U] 
            = __Vtemp77[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res[1U] 
            = __Vtemp77[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res[2U] 
            = __Vtemp77[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res[3U] 
            = (0xfffU & __Vtemp77[3U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_2 
            = ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_1) 
               & 1U);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex00 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex0;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s0 
            = ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s02) 
               & 1U);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e0 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e02;
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_res[3U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_2 = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex00 = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s0 = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e0 = 0ULL;
    }
    __Vtemp82[0U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[0U];
    __Vtemp82[1U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[1U];
    __Vtemp82[2U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[2U];
    __Vtemp83[0U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[4U] 
                      << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[3U] 
                                   >> 0xcU));
    __Vtemp83[1U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[5U] 
                      << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[4U] 
                                   >> 0xcU));
    __Vtemp83[2U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[6U] 
                      << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[5U] 
                                   >> 0xcU));
    VL_ADD_W(3, __Vtemp84, __Vtemp82, __Vtemp83);
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[0U] 
            = (__Vtemp84[0U] << 0x1eU);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[1U] 
            = ((__Vtemp84[0U] >> 2U) | (__Vtemp84[1U] 
                                        << 0x1eU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[2U] 
            = ((__Vtemp84[1U] >> 2U) | (__Vtemp84[2U] 
                                        << 0x1eU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[3U] 
            = (0xfffU & (__Vtemp84[2U] >> 2U));
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5[3U] = 0U;
    }
    __Vtemp90[0U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[0U];
    __Vtemp90[1U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[1U];
    __Vtemp90[2U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[2U];
    __Vtemp91[0U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[4U] 
                      << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[3U] 
                                   >> 0xcU));
    __Vtemp91[1U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[5U] 
                      << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[4U] 
                                   >> 0xcU));
    __Vtemp91[2U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[6U] 
                      << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[5U] 
                                   >> 0xcU));
    VL_ADD_W(3, __Vtemp92, __Vtemp90, __Vtemp91);
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6[0U] = 0U;
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6[1U] 
            = (__Vtemp92[0U] << 4U);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6[2U] 
            = ((__Vtemp92[0U] >> 0x1cU) | (__Vtemp92[1U] 
                                           << 4U));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6[3U] 
            = ((__Vtemp92[1U] >> 0x1cU) | (0xff0U & 
                                           (__Vtemp92[2U] 
                                            << 4U)));
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6[3U] = 0U;
    }
    __Vtemp98[0U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[0U];
    __Vtemp98[1U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[1U];
    __Vtemp98[2U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[2U];
    __Vtemp99[0U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[4U] 
                      << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[3U] 
                                   >> 0xcU));
    __Vtemp99[1U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[5U] 
                      << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[4U] 
                                   >> 0xcU));
    __Vtemp99[2U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[6U] 
                      << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[5U] 
                                   >> 0xcU));
    VL_ADD_W(3, __Vtemp100, __Vtemp98, __Vtemp99);
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7[0U] = 0U;
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7[1U] 
            = (__Vtemp100[0U] << 0xaU);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7[2U] 
            = ((__Vtemp100[0U] >> 0x16U) | (__Vtemp100[1U] 
                                            << 0xaU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7[3U] 
            = ((__Vtemp100[1U] >> 0x16U) | (0xc00U 
                                            & (__Vtemp100[2U] 
                                               << 0xaU)));
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7[3U] = 0U;
    }
    __Vtemp105[2U] = (((IData)((0xfffffffffffffffULL 
                                & ((((QData)((IData)(
                                                     vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[0U]))) 
                                   + (((QData)((IData)(
                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[5U])) 
                                       << 0x34U) | 
                                      (((QData)((IData)(
                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[4U])) 
                                        << 0x14U) | 
                                       ((QData)((IData)(
                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[3U])) 
                                        >> 0xcU)))))) 
                       >> 0x10U) | ((IData)(((0xfffffffffffffffULL 
                                              & ((((QData)((IData)(
                                                                   vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[0U]))) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[5U])) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[4U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[3U])) 
                                                        >> 0xcU))))) 
                                             >> 0x20U)) 
                                    << 0x10U));
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8[0U] = 0U;
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8[1U] 
            = ((IData)((0xfffffffffffffffULL & ((((QData)((IData)(
                                                                  vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[0U]))) 
                                                + (
                                                   ((QData)((IData)(
                                                                    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[5U])) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[4U])) 
                                                       << 0x14U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[3U])) 
                                                         >> 0xcU)))))) 
               << 0x10U);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8[2U] 
            = __Vtemp105[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8[3U] 
            = ((IData)(((0xfffffffffffffffULL & ((((QData)((IData)(
                                                                   vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[0U]))) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[5U])) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[4U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[3U])) 
                                                        >> 0xcU))))) 
                        >> 0x20U)) >> 0x10U);
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8[3U] = 0U;
    }
    __Vtemp109[0U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[0U];
    __Vtemp109[1U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[1U];
    __Vtemp109[2U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[2U];
    __Vtemp109[3U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[3U];
    __Vtemp110[0U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[4U] 
                       << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[3U] 
                                    >> 0xcU));
    __Vtemp110[1U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[5U] 
                       << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[4U] 
                                    >> 0xcU));
    __Vtemp110[2U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[6U] 
                       << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[5U] 
                                    >> 0xcU));
    __Vtemp110[3U] = (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[6U] 
                      >> 0xcU);
    VL_ADD_W(4, __Vtemp111, __Vtemp109, __Vtemp110);
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0[0U] 
            = __Vtemp111[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0[1U] 
            = __Vtemp111[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0[2U] 
            = __Vtemp111[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0[3U] 
            = (0xfffU & __Vtemp111[3U]);
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0[3U] = 0U;
    }
    __Vtemp116[0U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[0U];
    __Vtemp116[1U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[1U];
    __Vtemp116[2U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[2U];
    __Vtemp116[3U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[3U];
    __Vtemp117[0U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[4U] 
                       << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[3U] 
                                    >> 0xcU));
    __Vtemp117[1U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[5U] 
                       << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[4U] 
                                    >> 0xcU));
    __Vtemp117[2U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[6U] 
                       << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[5U] 
                                    >> 0xcU));
    __Vtemp117[3U] = (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[6U] 
                      >> 0xcU);
    VL_ADD_W(4, __Vtemp118, __Vtemp116, __Vtemp117);
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1[0U] 
            = (__Vtemp118[0U] << 6U);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1[1U] 
            = ((__Vtemp118[0U] >> 0x1aU) | (__Vtemp118[1U] 
                                            << 6U));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1[2U] 
            = ((__Vtemp118[1U] >> 0x1aU) | (__Vtemp118[2U] 
                                            << 6U));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1[3U] 
            = ((__Vtemp118[2U] >> 0x1aU) | (0xfc0U 
                                            & (__Vtemp118[3U] 
                                               << 6U)));
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1[3U] = 0U;
    }
    __Vtemp123[0U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[0U];
    __Vtemp123[1U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[1U];
    __Vtemp123[2U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[2U];
    __Vtemp124[0U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[4U] 
                       << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[3U] 
                                    >> 0xcU));
    __Vtemp124[1U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[5U] 
                       << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[4U] 
                                    >> 0xcU));
    __Vtemp124[2U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[6U] 
                       << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[5U] 
                                    >> 0xcU));
    VL_ADD_W(3, __Vtemp125, __Vtemp123, __Vtemp124);
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2[0U] 
            = (__Vtemp125[0U] << 0xcU);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2[1U] 
            = ((__Vtemp125[0U] >> 0x14U) | (__Vtemp125[1U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2[2U] 
            = ((__Vtemp125[1U] >> 0x14U) | (__Vtemp125[2U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2[3U] 
            = (__Vtemp125[2U] >> 0x14U);
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2[3U] = 0U;
    }
    __Vtemp130[0U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[0U];
    __Vtemp130[1U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[1U];
    __Vtemp130[2U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[2U];
    __Vtemp131[0U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[4U] 
                       << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[3U] 
                                    >> 0xcU));
    __Vtemp131[1U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[5U] 
                       << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[4U] 
                                    >> 0xcU));
    __Vtemp131[2U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[6U] 
                       << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[5U] 
                                    >> 0xcU));
    VL_ADD_W(3, __Vtemp132, __Vtemp130, __Vtemp131);
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3[0U] 
            = (__Vtemp132[0U] << 0x12U);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3[1U] 
            = ((__Vtemp132[0U] >> 0xeU) | (__Vtemp132[1U] 
                                           << 0x12U));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3[2U] 
            = ((__Vtemp132[1U] >> 0xeU) | (__Vtemp132[2U] 
                                           << 0x12U));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3[3U] 
            = (0xfffU & (__Vtemp132[2U] >> 0xeU));
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3[3U] = 0U;
    }
    __Vtemp138[0U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[0U];
    __Vtemp138[1U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[1U];
    __Vtemp138[2U] = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[2U];
    __Vtemp139[0U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[4U] 
                       << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[3U] 
                                    >> 0xcU));
    __Vtemp139[1U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[5U] 
                       << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[4U] 
                                    >> 0xcU));
    __Vtemp139[2U] = ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[6U] 
                       << 0x14U) | (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[5U] 
                                    >> 0xcU));
    VL_ADD_W(3, __Vtemp140, __Vtemp138, __Vtemp139);
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4[0U] 
            = (__Vtemp140[0U] << 0x18U);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4[1U] 
            = ((__Vtemp140[0U] >> 8U) | (__Vtemp140[1U] 
                                         << 0x18U));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4[2U] 
            = ((__Vtemp140[1U] >> 8U) | (__Vtemp140[2U] 
                                         << 0x18U));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4[3U] 
            = (0xfffU & (__Vtemp140[2U] >> 8U));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_1 
            = ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_0) 
               & 1U);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex0 
            = vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex02;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s02 
            = (((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[3U] 
                 >> 0x1fU) != (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[1U] 
                               >> 0x1fU)) & 1U);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e02 
            = (((QData)((IData)(((0x1000U & ((IData)(0x1c01U) 
                                             + (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh4806)))
                                  ? 0U : ((0x7feU >= 
                                           (0xfffU 
                                            & ((IData)(0xc01U) 
                                               + (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh4806))))
                                           ? (0x7ffU 
                                              & ((IData)(0x1c01U) 
                                                 + (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh4806)))
                                           : 0x7feU)))) 
                << 0x27U) | (((QData)((IData)(((1U 
                                                & ((((IData)(0x1c01U) 
                                                     + (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh4806)) 
                                                    >> 0xcU) 
                                                   & (0x80000069U 
                                                      >= 
                                                      (0x80000000U 
                                                       ^ 
                                                       (0xfffU 
                                                        & (- 
                                                           ((IData)(0xc01U) 
                                                            + (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh4806))))))))
                                                ? (0xfffU 
                                                   & (- 
                                                      ((IData)(0xc01U) 
                                                       + (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh4806))))
                                                : 0U))) 
                              << 7U) | (QData)((IData)(
                                                       ((0x60U 
                                                         & ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands1_3_BITS_126_TO_116_4_EQ_2047_5___05FETC___05F_d66) 
                                                            << 2U)) 
                                                        | ((((~ 
                                                              (1U 
                                                               & (((IData)(0x1c01U) 
                                                                   + (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh4806)) 
                                                                  >> 0xcU))) 
                                                             & (0x7feU 
                                                                < 
                                                                (0xfffU 
                                                                 & ((IData)(0xc01U) 
                                                                    + (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh4806))))) 
                                                            << 4U) 
                                                           | ((8U 
                                                               & (((~ (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands1_3_BITS_126_TO_116_4_EQ_0_5_AND_ETC___05F_d75)) 
                                                                   << 3U) 
                                                                  & (((IData)(0x1c01U) 
                                                                      + (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh4806)) 
                                                                     >> 9U))) 
                                                              | ((4U 
                                                                  & ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands1_3_BITS_126_TO_116_4_EQ_2047_5___05FETC___05F_d66) 
                                                                     << 2U)) 
                                                                 | (((0x3ffU 
                                                                      == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__x___05Fh4806)) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands1_3_BITS_126_TO_116_4_EQ_0_5_AND_ETC___05F_d75)))))))))));
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4[3U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_1 = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex0 = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_s02 = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_e02 = 0ULL;
    }
    VL_EXTEND_WQ(108,60, __Vtemp145, (0xfffffffffffffffULL 
                                      & ((((0x40000000U 
                                            & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                            ? vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a___05Fh6007
                                            : 0ULL) 
                                          + ((vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U] 
                                              >> 0x1fU)
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x35U) 
                                                 | (0x1ffffffffffffeULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x21U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 1U))))
                                              : 0ULL)) 
                                         + ((1U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x36U) 
                                                | (0x3ffffffffffffcULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x22U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 2U))))
                                             : 0ULL))));
    VL_EXTEND_WQ(108,60, __Vtemp146, (0xfffffffffffffffULL 
                                      & ((((2U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                            ? (((QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7ffU 
                                                                  & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                     >> 0x14U))))) 
                                                << 0x37U) 
                                               | (0x7ffffffffffff8ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                      << 0x23U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                        << 3U))))
                                            : 0ULL) 
                                          + ((4U & 
                                              vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x38U) 
                                                 | (0xfffffffffffff0ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x24U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 4U))))
                                              : 0ULL)) 
                                         + ((8U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x39U) 
                                                | (0x1ffffffffffffe0ULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x25U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 5U))))
                                             : 0ULL))));
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[0U] 
            = __Vtemp146[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[1U] 
            = __Vtemp146[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[2U] 
            = __Vtemp146[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[3U] 
            = ((__Vtemp145[0U] << 0xcU) | __Vtemp146[3U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[4U] 
            = ((__Vtemp145[0U] >> 0x14U) | (__Vtemp145[1U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[5U] 
            = ((__Vtemp145[1U] >> 0x14U) | (__Vtemp145[2U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[6U] 
            = ((__Vtemp145[2U] >> 0x14U) | (__Vtemp145[3U] 
                                            << 0xcU));
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[3U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[4U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[5U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product5_1[6U] = 0U;
    }
    VL_EXTEND_WQ(108,60, __Vtemp150, (0xfffffffffffffffULL 
                                      & ((((0x10U & 
                                            vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                            ? vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a___05Fh6007
                                            : 0ULL) 
                                          + ((0x20U 
                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x35U) 
                                                 | (0x1ffffffffffffeULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x21U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 1U))))
                                              : 0ULL)) 
                                         + ((0x40U 
                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x36U) 
                                                | (0x3ffffffffffffcULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x22U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 2U))))
                                             : 0ULL))));
    VL_EXTEND_WQ(108,60, __Vtemp151, (0xfffffffffffffffULL 
                                      & ((((0x80U & 
                                            vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                            ? (((QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7ffU 
                                                                  & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                     >> 0x14U))))) 
                                                << 0x37U) 
                                               | (0x7ffffffffffff8ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                      << 0x23U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                        << 3U))))
                                            : 0ULL) 
                                          + ((0x100U 
                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x38U) 
                                                 | (0xfffffffffffff0ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x24U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 4U))))
                                              : 0ULL)) 
                                         + ((0x200U 
                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x39U) 
                                                | (0x1ffffffffffffe0ULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x25U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 5U))))
                                             : 0ULL))));
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[0U] 
            = __Vtemp151[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[1U] 
            = __Vtemp151[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[2U] 
            = __Vtemp151[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[3U] 
            = ((__Vtemp150[0U] << 0xcU) | __Vtemp151[3U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[4U] 
            = ((__Vtemp150[0U] >> 0x14U) | (__Vtemp150[1U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[5U] 
            = ((__Vtemp150[1U] >> 0x14U) | (__Vtemp150[2U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[6U] 
            = ((__Vtemp150[2U] >> 0x14U) | (__Vtemp150[3U] 
                                            << 0xcU));
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[3U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[4U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[5U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product6_1[6U] = 0U;
    }
    VL_EXTEND_WQ(108,60, __Vtemp155, (0xfffffffffffffffULL 
                                      & ((((0x400U 
                                            & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                            ? vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a___05Fh6007
                                            : 0ULL) 
                                          + ((0x800U 
                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x35U) 
                                                 | (0x1ffffffffffffeULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x21U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 1U))))
                                              : 0ULL)) 
                                         + ((0x1000U 
                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x36U) 
                                                | (0x3ffffffffffffcULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x22U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 2U))))
                                             : 0ULL))));
    VL_EXTEND_WQ(108,60, __Vtemp156, (0xfffffffffffffffULL 
                                      & ((((0x2000U 
                                            & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                            ? (((QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7ffU 
                                                                  & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                     >> 0x14U))))) 
                                                << 0x37U) 
                                               | (0x7ffffffffffff8ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                      << 0x23U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                        << 3U))))
                                            : 0ULL) 
                                          + ((0x4000U 
                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x38U) 
                                                 | (0xfffffffffffff0ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x24U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 4U))))
                                              : 0ULL)) 
                                         + ((0x8000U 
                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x39U) 
                                                | (0x1ffffffffffffe0ULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x25U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 5U))))
                                             : 0ULL))));
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[0U] 
            = __Vtemp156[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[1U] 
            = __Vtemp156[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[2U] 
            = __Vtemp156[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[3U] 
            = ((__Vtemp155[0U] << 0xcU) | __Vtemp156[3U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[4U] 
            = ((__Vtemp155[0U] >> 0x14U) | (__Vtemp155[1U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[5U] 
            = ((__Vtemp155[1U] >> 0x14U) | (__Vtemp155[2U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[6U] 
            = ((__Vtemp155[2U] >> 0x14U) | (__Vtemp155[3U] 
                                            << 0xcU));
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[3U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[4U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[5U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product7_1[6U] = 0U;
    }
    VL_EXTEND_WQ(108,60, __Vtemp160, (0xfffffffffffffffULL 
                                      & ((((0x10000U 
                                            & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                            ? vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a___05Fh6007
                                            : 0ULL) 
                                          + ((0x20000U 
                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x35U) 
                                                 | (0x1ffffffffffffeULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x21U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 1U))))
                                              : 0ULL)) 
                                         + ((0x40000U 
                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x36U) 
                                                | (0x3ffffffffffffcULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x22U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 2U))))
                                             : 0ULL))));
    VL_EXTEND_WQ(108,60, __Vtemp161, (0xfffffffffffffffULL 
                                      & (((0x80000U 
                                           & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U])
                                           ? (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (0x7ffU 
                                                                 & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                    >> 0x14U))))) 
                                               << 0x37U) 
                                              | (0x7ffffffffffff8ULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                     << 0x23U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                       << 3U))))
                                           : 0ULL) 
                                         + ((0U == 
                                             (0x7ffU 
                                              & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U] 
                                                 >> 0x14U)))
                                             ? 0ULL
                                             : (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x38U) 
                                                | (0xfffffffffffff0ULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x24U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 4U))))))));
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[0U] 
            = __Vtemp161[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[1U] 
            = __Vtemp161[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[2U] 
            = __Vtemp161[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[3U] 
            = ((__Vtemp160[0U] << 0xcU) | __Vtemp161[3U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[4U] 
            = ((__Vtemp160[0U] >> 0x14U) | (__Vtemp160[1U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[5U] 
            = ((__Vtemp160[1U] >> 0x14U) | (__Vtemp160[2U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[6U] 
            = ((__Vtemp160[2U] >> 0x14U) | (__Vtemp160[3U] 
                                            << 0xcU));
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[3U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[4U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[5U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product8_1[6U] = 0U;
    }
    VL_EXTEND_WQ(108,60, __Vtemp165, (0xfffffffffffffffULL 
                                      & ((((1U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                            ? vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a___05Fh6007
                                            : 0ULL) 
                                          + ((2U & 
                                              vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x35U) 
                                                 | (0x1ffffffffffffeULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x21U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 1U))))
                                              : 0ULL)) 
                                         + ((4U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x36U) 
                                                | (0x3ffffffffffffcULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x22U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 2U))))
                                             : 0ULL))));
    VL_EXTEND_WQ(108,60, __Vtemp166, (0xfffffffffffffffULL 
                                      & ((((8U & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                            ? (((QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7ffU 
                                                                  & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                     >> 0x14U))))) 
                                                << 0x37U) 
                                               | (0x7ffffffffffff8ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                      << 0x23U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                        << 3U))))
                                            : 0ULL) 
                                          + ((0x10U 
                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x38U) 
                                                 | (0xfffffffffffff0ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x24U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 4U))))
                                              : 0ULL)) 
                                         + ((0x20U 
                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x39U) 
                                                | (0x1ffffffffffffe0ULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x25U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 5U))))
                                             : 0ULL))));
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[0U] 
            = __Vtemp166[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[1U] 
            = __Vtemp166[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[2U] 
            = __Vtemp166[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[3U] 
            = ((__Vtemp165[0U] << 0xcU) | __Vtemp166[3U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[4U] 
            = ((__Vtemp165[0U] >> 0x14U) | (__Vtemp165[1U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[5U] 
            = ((__Vtemp165[1U] >> 0x14U) | (__Vtemp165[2U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[6U] 
            = ((__Vtemp165[2U] >> 0x14U) | (__Vtemp165[3U] 
                                            << 0xcU));
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[3U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[4U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[5U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product0_1[6U] = 0U;
    }
    VL_EXTEND_WQ(108,60, __Vtemp170, (0xfffffffffffffffULL 
                                      & ((((0x40U & 
                                            vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                            ? vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a___05Fh6007
                                            : 0ULL) 
                                          + ((0x80U 
                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x35U) 
                                                 | (0x1ffffffffffffeULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x21U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 1U))))
                                              : 0ULL)) 
                                         + ((0x100U 
                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x36U) 
                                                | (0x3ffffffffffffcULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x22U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 2U))))
                                             : 0ULL))));
    VL_EXTEND_WQ(108,60, __Vtemp171, (0xfffffffffffffffULL 
                                      & ((((0x200U 
                                            & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                            ? (((QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7ffU 
                                                                  & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                     >> 0x14U))))) 
                                                << 0x37U) 
                                               | (0x7ffffffffffff8ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                      << 0x23U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                        << 3U))))
                                            : 0ULL) 
                                          + ((0x400U 
                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x38U) 
                                                 | (0xfffffffffffff0ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x24U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 4U))))
                                              : 0ULL)) 
                                         + ((0x800U 
                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x39U) 
                                                | (0x1ffffffffffffe0ULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x25U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 5U))))
                                             : 0ULL))));
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[0U] 
            = __Vtemp171[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[1U] 
            = __Vtemp171[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[2U] 
            = __Vtemp171[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[3U] 
            = ((__Vtemp170[0U] << 0xcU) | __Vtemp171[3U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[4U] 
            = ((__Vtemp170[0U] >> 0x14U) | (__Vtemp170[1U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[5U] 
            = ((__Vtemp170[1U] >> 0x14U) | (__Vtemp170[2U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[6U] 
            = ((__Vtemp170[2U] >> 0x14U) | (__Vtemp170[3U] 
                                            << 0xcU));
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[3U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[4U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[5U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product1_1[6U] = 0U;
    }
    VL_EXTEND_WQ(108,60, __Vtemp175, (0xfffffffffffffffULL 
                                      & ((((0x1000U 
                                            & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                            ? vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a___05Fh6007
                                            : 0ULL) 
                                          + ((0x2000U 
                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x35U) 
                                                 | (0x1ffffffffffffeULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x21U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 1U))))
                                              : 0ULL)) 
                                         + ((0x4000U 
                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x36U) 
                                                | (0x3ffffffffffffcULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x22U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 2U))))
                                             : 0ULL))));
    VL_EXTEND_WQ(108,60, __Vtemp176, (0xfffffffffffffffULL 
                                      & ((((0x8000U 
                                            & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                            ? (((QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7ffU 
                                                                  & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                     >> 0x14U))))) 
                                                << 0x37U) 
                                               | (0x7ffffffffffff8ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                      << 0x23U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                        << 3U))))
                                            : 0ULL) 
                                          + ((0x10000U 
                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x38U) 
                                                 | (0xfffffffffffff0ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x24U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 4U))))
                                              : 0ULL)) 
                                         + ((0x20000U 
                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x39U) 
                                                | (0x1ffffffffffffe0ULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x25U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 5U))))
                                             : 0ULL))));
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[0U] 
            = __Vtemp176[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[1U] 
            = __Vtemp176[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[2U] 
            = __Vtemp176[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[3U] 
            = ((__Vtemp175[0U] << 0xcU) | __Vtemp176[3U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[4U] 
            = ((__Vtemp175[0U] >> 0x14U) | (__Vtemp175[1U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[5U] 
            = ((__Vtemp175[1U] >> 0x14U) | (__Vtemp175[2U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[6U] 
            = ((__Vtemp175[2U] >> 0x14U) | (__Vtemp175[3U] 
                                            << 0xcU));
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[3U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[4U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[5U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product2_1[6U] = 0U;
    }
    VL_EXTEND_WQ(108,60, __Vtemp180, (0xfffffffffffffffULL 
                                      & ((((0x40000U 
                                            & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                            ? vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a___05Fh6007
                                            : 0ULL) 
                                          + ((0x80000U 
                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x35U) 
                                                 | (0x1ffffffffffffeULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x21U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 1U))))
                                              : 0ULL)) 
                                         + ((0x100000U 
                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x36U) 
                                                | (0x3ffffffffffffcULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x22U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 2U))))
                                             : 0ULL))));
    VL_EXTEND_WQ(108,60, __Vtemp181, (0xfffffffffffffffULL 
                                      & ((((0x200000U 
                                            & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                            ? (((QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7ffU 
                                                                  & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                     >> 0x14U))))) 
                                                << 0x37U) 
                                               | (0x7ffffffffffff8ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                      << 0x23U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                        << 3U))))
                                            : 0ULL) 
                                          + ((0x400000U 
                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x38U) 
                                                 | (0xfffffffffffff0ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x24U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 4U))))
                                              : 0ULL)) 
                                         + ((0x800000U 
                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x39U) 
                                                | (0x1ffffffffffffe0ULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x25U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 5U))))
                                             : 0ULL))));
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[0U] 
            = __Vtemp181[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[1U] 
            = __Vtemp181[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[2U] 
            = __Vtemp181[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[3U] 
            = ((__Vtemp180[0U] << 0xcU) | __Vtemp181[3U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[4U] 
            = ((__Vtemp180[0U] >> 0x14U) | (__Vtemp180[1U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[5U] 
            = ((__Vtemp180[1U] >> 0x14U) | (__Vtemp180[2U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[6U] 
            = ((__Vtemp180[2U] >> 0x14U) | (__Vtemp180[3U] 
                                            << 0xcU));
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[3U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[4U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[5U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product3_1[6U] = 0U;
    }
    VL_EXTEND_WQ(108,60, __Vtemp185, (0xfffffffffffffffULL 
                                      & ((((0x1000000U 
                                            & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                            ? vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a___05Fh6007
                                            : 0ULL) 
                                          + ((0x2000000U 
                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x35U) 
                                                 | (0x1ffffffffffffeULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x21U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 1U))))
                                              : 0ULL)) 
                                         + ((0x4000000U 
                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x36U) 
                                                | (0x3ffffffffffffcULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x22U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 2U))))
                                             : 0ULL))));
    VL_EXTEND_WQ(108,60, __Vtemp186, (0xfffffffffffffffULL 
                                      & ((((0x8000000U 
                                            & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                            ? (((QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7ffU 
                                                                  & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                     >> 0x14U))))) 
                                                << 0x37U) 
                                               | (0x7ffffffffffff8ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                      << 0x23U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                        << 3U))))
                                            : 0ULL) 
                                          + ((0x10000000U 
                                              & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                              ? (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7ffU 
                                                                    & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                       >> 0x14U))))) 
                                                  << 0x38U) 
                                                 | (0xfffffffffffff0ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                        << 0x24U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                          << 4U))))
                                              : 0ULL)) 
                                         + ((0x20000000U 
                                             & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U])
                                             ? (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7ffU 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                                                      >> 0x14U))))) 
                                                 << 0x39U) 
                                                | (0x1ffffffffffffe0ULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                       << 0x25U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])) 
                                                         << 5U))))
                                             : 0ULL))));
    if (vlSelf->RST_N) {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[0U] 
            = __Vtemp186[0U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[1U] 
            = __Vtemp186[1U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[2U] 
            = __Vtemp186[2U];
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[3U] 
            = ((__Vtemp185[0U] << 0xcU) | __Vtemp186[3U]);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[4U] 
            = ((__Vtemp185[0U] >> 0x14U) | (__Vtemp185[1U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[5U] 
            = ((__Vtemp185[1U] >> 0x14U) | (__Vtemp185[2U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[6U] 
            = ((__Vtemp185[2U] >> 0x14U) | (__Vtemp185[3U] 
                                            << 0xcU));
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_0 
            = ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult_EN_send) 
               & 1U);
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex02 
            = ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__qnan___05Fh5484)
                ? 7U : ((((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__snan___05Fh5480) 
                          | (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__qnan___05Fh5484)) 
                         << 2U) | (((((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_ETC___05F_d133) 
                                      & (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_ETC___05F_d151)) 
                                     & ((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a_inf___05Fh5473) 
                                        | (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__b_inf___05Fh5474))) 
                                    << 1U) | (((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_ETC___05F_d133) 
                                               & (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__IF_rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_ETC___05F_d151)) 
                                              & (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_rg_ETC___05F_d100)))));
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[3U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[4U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[5U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_partial_product4_1[6U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_valid_0 = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex02 = 0U;
    }
    if (vlSelf->RST_N) {
        if (vlSelf->mktb_dpfpmult__DOT__ifc_mult_EN_send) {
            vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[0U] 
                = vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[0U];
            vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[1U] 
                = vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[1U];
            vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[2U] 
                = vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[2U];
            vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[3U] 
                = vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[3U];
        }
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands1[3U] = 0U;
    }
    if (vlSelf->RST_N) {
        if (vlSelf->mktb_dpfpmult__DOT__ifc_mult_EN_send) {
            vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U] 
                = vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[0U];
            vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U] 
                = vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[1U];
            vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U] 
                = vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[2U];
            vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                = vlSelf->mktb_dpfpmult__DOT__ifc_mult_send_data_in[3U];
        }
    } else {
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[0U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[1U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U] = 0U;
        vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] = 0U;
    }
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands2_9_BITS_126_TO_116_0_EQ_0_1_AND_rg_ETC___05F_d100 
        = ((IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__a_z___05Fh5475) 
           | (IData)(mktb_dpfpmult__DOT__ifc_mult__DOT__b_z___05Fh5476));
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
    vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__a___05Fh6007 
        = (((QData)((IData)((0U != (0x7ffU & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U] 
                                              >> 0x14U))))) 
            << 0x34U) | (0xfffffffffffffULL & (((QData)((IData)(
                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_operands3[2U])))));
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

VL_INLINE_OPT void Vmktb_dpfpmult___024root___sequent__TOP__2(Vmktb_dpfpmult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmktb_dpfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmktb_dpfpmult___024root___sequent__TOP__2\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->RST_N)) {
        VL_WRITEF("cycle: %3# dut result: ",8,vlSelf->mktb_dpfpmult__DOT__state);
        Verilated::runFlushCallbacks();
    }
    if (vlSelf->RST_N) {
        if ((1U & (IData)((((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))
                             ? (((QData)((IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[2U])) 
                                 << 0x3bU) | (((QData)((IData)(
                                                               vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[1U])) 
                                               << 0x1bU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U])) 
                                                 >> 5U)))
                             : (((QData)((IData)(((
                                                   (2U 
                                                    == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                                                   | (1U 
                                                      == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))) 
                                                  & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[2U] 
                                                     >> 4U)))) 
                                 << 0x3fU) | (((QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))
                                                                 ? 0U
                                                                 : 0x7ffU))) 
                                               << 0x34U) 
                                              | (((1U 
                                                   == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                                                  | (2U 
                                                     == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)))
                                                  ? 0ULL
                                                  : 0x8000000000000ULL)))) 
                           >> 0x3fU)))) {
            VL_WRITEF("<Float -%x.%x>",11,(0x7ffU & (IData)(
                                                            (((0U 
                                                               == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[2U])) 
                                                                << 0x3bU) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[1U])) 
                                                                   << 0x1bU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U])) 
                                                                     >> 5U)))
                                                               : 
                                                              (((QData)((IData)(
                                                                                (((2U 
                                                                                == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                                                                                | (1U 
                                                                                == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))) 
                                                                                & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[2U] 
                                                                                >> 4U)))) 
                                                                << 0x3fU) 
                                                               | (((QData)((IData)(
                                                                                ((1U 
                                                                                == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))
                                                                                 ? 0U
                                                                                 : 0x7ffU))) 
                                                                   << 0x34U) 
                                                                  | (((1U 
                                                                       == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                                                                      | (2U 
                                                                         == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)))
                                                                      ? 0ULL
                                                                      : 0x8000000000000ULL)))) 
                                                             >> 0x34U))),
                      52,(0xfffffffffffffULL & ((0U 
                                                 == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[2U])) 
                                                  << 0x3bU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[1U])) 
                                                     << 0x1bU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U])) 
                                                       >> 5U)))
                                                 : 
                                                (((QData)((IData)(
                                                                  (((2U 
                                                                     == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                                                                    | (1U 
                                                                       == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))) 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[2U] 
                                                                      >> 4U)))) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     ((1U 
                                                                       == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))
                                                                       ? 0U
                                                                       : 0x7ffU))) 
                                                     << 0x34U) 
                                                    | (((1U 
                                                         == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                                                        | (2U 
                                                           == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)))
                                                        ? 0ULL
                                                        : 0x8000000000000ULL))))));
            Verilated::runFlushCallbacks();
        } else {
            VL_WRITEF("<Float +%x.%x>",11,(0x7ffU & (IData)(
                                                            (((0U 
                                                               == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))
                                                               ? 
                                                              (((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[2U])) 
                                                                << 0x3bU) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[1U])) 
                                                                   << 0x1bU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U])) 
                                                                     >> 5U)))
                                                               : 
                                                              (((QData)((IData)(
                                                                                (((2U 
                                                                                == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                                                                                | (1U 
                                                                                == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))) 
                                                                                & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[2U] 
                                                                                >> 4U)))) 
                                                                << 0x3fU) 
                                                               | (((QData)((IData)(
                                                                                ((1U 
                                                                                == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))
                                                                                 ? 0U
                                                                                 : 0x7ffU))) 
                                                                   << 0x34U) 
                                                                  | (((1U 
                                                                       == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                                                                      | (2U 
                                                                         == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)))
                                                                      ? 0ULL
                                                                      : 0x8000000000000ULL)))) 
                                                             >> 0x34U))),
                      52,(0xfffffffffffffULL & ((0U 
                                                 == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[2U])) 
                                                  << 0x3bU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[1U])) 
                                                     << 0x1bU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U])) 
                                                       >> 5U)))
                                                 : 
                                                (((QData)((IData)(
                                                                  (((2U 
                                                                     == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                                                                    | (1U 
                                                                       == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))) 
                                                                   & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[2U] 
                                                                      >> 4U)))) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     ((1U 
                                                                       == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))
                                                                       ? 0U
                                                                       : 0x7ffU))) 
                                                     << 0x34U) 
                                                    | (((1U 
                                                         == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                                                        | (2U 
                                                           == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)))
                                                        ? 0ULL
                                                        : 0x8000000000000ULL))))));
            Verilated::runFlushCallbacks();
        }
    }
    if (VL_UNLIKELY(vlSelf->RST_N)) {
        VL_WRITEF(" exceptions: ");
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY(vlSelf->RST_N)) {
        VL_WRITEF("<Exception: ");
        Verilated::runFlushCallbacks();
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((1U & ((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))
                                ? (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U] 
                                   >> 4U) : (4U == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)))))) {
            VL_WRITEF("Invalid_Op ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((1U & (~ ((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))
                                   ? (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U] 
                                      >> 4U) : (4U 
                                                == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d))))))) {
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                         & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U] 
                            >> 3U)))) {
            VL_WRITEF("Divide_0 ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((1U & (~ ((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                                  & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U] 
                                     >> 3U)))))) {
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                         & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U] 
                            >> 2U)))) {
            VL_WRITEF("Overflow ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((1U & (~ ((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                                  & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U] 
                                     >> 2U)))))) {
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                         & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U] 
                            >> 1U)))) {
            VL_WRITEF("Underflow ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((1U & (~ ((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                                  & (vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U] 
                                     >> 1U)))))) {
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY(((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                         & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U]))) {
            VL_WRITEF("Inexact ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((1U & (~ ((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_dp_ex2_d)) 
                                  & vlSelf->mktb_dpfpmult__DOT__ifc_mult__DOT__rg_out_d[0U]))))) {
            Verilated::runFlushCallbacks();
        }
    }
    if (VL_UNLIKELY(vlSelf->RST_N)) {
        VL_WRITEF(">");
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY(vlSelf->RST_N)) {
        VL_WRITEF("\n");
        Verilated::runFlushCallbacks();
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("cycle:%3# ",8,vlSelf->mktb_dpfpmult__DOT__state);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("<Float +7ff.fffffffffffff>");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("<Float +7ff.fffffffffffff>");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((0U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((1U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("cycle:%3# ",8,vlSelf->mktb_dpfpmult__DOT__state);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((1U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("<Float +001.fffffefffffff>");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((1U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("<Float -3fe.000000fffffff>");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((1U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((2U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("cycle:%3# ",8,vlSelf->mktb_dpfpmult__DOT__state);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((2U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("<Float -001.fffffefffffff>");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((2U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("<Float -3fe.000000fffffff>");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((2U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((3U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("cycle:%3# ",8,vlSelf->mktb_dpfpmult__DOT__state);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((3U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("<Float -7ff.fffffffffffff>");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((3U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("<Float +40f.fffffffffffff>");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((3U == (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((0xbU < (IData)(vlSelf->mktb_dpfpmult__DOT__state)))) {
            VL_FINISH_MT("verilog//mktb_dpfpmult.v", 215, "");
        }
    }
}

void Vmktb_dpfpmult___024root___eval(Vmktb_dpfpmult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmktb_dpfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmktb_dpfpmult___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CLK)))) {
        Vmktb_dpfpmult___024root___sequent__TOP__1(vlSelf);
    }
    if (((~ (IData)(vlSelf->CLK)) & (IData)(vlSelf->__Vclklast__TOP__CLK))) {
        Vmktb_dpfpmult___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
}

QData Vmktb_dpfpmult___024root___change_request_1(Vmktb_dpfpmult___024root* vlSelf);

VL_INLINE_OPT QData Vmktb_dpfpmult___024root___change_request(Vmktb_dpfpmult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmktb_dpfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmktb_dpfpmult___024root___change_request\n"); );
    // Body
    return (Vmktb_dpfpmult___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vmktb_dpfpmult___024root___change_request_1(Vmktb_dpfpmult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmktb_dpfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmktb_dpfpmult___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmktb_dpfpmult___024root___eval_debug_assertions(Vmktb_dpfpmult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmktb_dpfpmult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmktb_dpfpmult___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
}
#endif  // VL_DEBUG
