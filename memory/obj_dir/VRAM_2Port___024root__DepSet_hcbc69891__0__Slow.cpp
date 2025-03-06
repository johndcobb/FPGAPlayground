// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRAM_2Port.h for the primary calling header

#include "VRAM_2Port__pch.h"
#include "VRAM_2Port___024root.h"

VL_ATTR_COLD void VRAM_2Port___024root___eval_static__TOP(VRAM_2Port___024root* vlSelf);
VL_ATTR_COLD void VRAM_2Port___024root____Vm_traceActivitySetAll(VRAM_2Port___024root* vlSelf);

VL_ATTR_COLD void VRAM_2Port___024root___eval_static(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___eval_static\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VRAM_2Port___024root___eval_static__TOP(vlSelf);
    VRAM_2Port___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void VRAM_2Port___024root___eval_static__TOP(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___eval_static__TOP\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RAM_2Port_TB__DOT__r_Clk = 0U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_DV = 0U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_En = 0U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Addr = 0U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_Addr = 0U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Data = 0U;
}

VL_ATTR_COLD void VRAM_2Port___024root___eval_final(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___eval_final\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VRAM_2Port___024root___eval_settle(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___eval_settle\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRAM_2Port___024root___dump_triggers__act(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___dump_triggers__act\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge RAM_2Port_TB.r_Clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRAM_2Port___024root___dump_triggers__nba(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___dump_triggers__nba\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge RAM_2Port_TB.r_Clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRAM_2Port___024root____Vm_traceActivitySetAll(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root____Vm_traceActivitySetAll\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void VRAM_2Port___024root___ctor_var_reset(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___ctor_var_reset\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->RAM_2Port_TB__DOT__r_Clk = VL_RAND_RESET_I(1);
    vlSelf->RAM_2Port_TB__DOT__r_Wr_DV = VL_RAND_RESET_I(1);
    vlSelf->RAM_2Port_TB__DOT__r_Rd_En = VL_RAND_RESET_I(1);
    vlSelf->RAM_2Port_TB__DOT__r_Wr_Addr = VL_RAND_RESET_I(2);
    vlSelf->RAM_2Port_TB__DOT__r_Rd_Addr = VL_RAND_RESET_I(2);
    vlSelf->RAM_2Port_TB__DOT__r_Wr_Data = VL_RAND_RESET_I(8);
    vlSelf->RAM_2Port_TB__DOT__w_Rd_Data = VL_RAND_RESET_I(8);
    vlSelf->RAM_2Port_TB__DOT__UUT__DOT__o_Rd_DV = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->RAM_2Port_TB__DOT__UUT__DOT__r_Mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__VdlyVal__RAM_2Port_TB__DOT__r_Clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__RAM_2Port_TB__DOT__r_Clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__RAM_2Port_TB__DOT__r_Clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
