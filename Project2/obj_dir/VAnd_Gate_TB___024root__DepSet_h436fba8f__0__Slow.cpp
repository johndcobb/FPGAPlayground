// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAnd_Gate_TB.h for the primary calling header

#include "VAnd_Gate_TB__pch.h"
#include "VAnd_Gate_TB___024root.h"

VL_ATTR_COLD void VAnd_Gate_TB___024root___eval_static(VAnd_Gate_TB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root___eval_static\n"); );
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VAnd_Gate_TB___024root___eval_final(VAnd_Gate_TB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root___eval_final\n"); );
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VAnd_Gate_TB___024root___eval_settle(VAnd_Gate_TB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root___eval_settle\n"); );
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAnd_Gate_TB___024root___dump_triggers__act(VAnd_Gate_TB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root___dump_triggers__act\n"); );
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VAnd_Gate_TB___024root___dump_triggers__nba(VAnd_Gate_TB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root___dump_triggers__nba\n"); );
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VAnd_Gate_TB___024root___ctor_var_reset(VAnd_Gate_TB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root___ctor_var_reset\n"); );
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->And_Gate_TB__DOT__r_In1 = VL_RAND_RESET_I(1);
    vlSelf->And_Gate_TB__DOT__r_In2 = VL_RAND_RESET_I(1);
    }
