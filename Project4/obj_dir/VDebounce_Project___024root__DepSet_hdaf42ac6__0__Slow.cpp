// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDebounce_Project.h for the primary calling header

#include "VDebounce_Project__pch.h"
#include "VDebounce_Project___024root.h"

VL_ATTR_COLD void VDebounce_Project___024root___eval_static__TOP(VDebounce_Project___024root* vlSelf);
VL_ATTR_COLD void VDebounce_Project___024root____Vm_traceActivitySetAll(VDebounce_Project___024root* vlSelf);

VL_ATTR_COLD void VDebounce_Project___024root___eval_static(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_static\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VDebounce_Project___024root___eval_static__TOP(vlSelf);
    VDebounce_Project___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void VDebounce_Project___024root___eval_static__TOP(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_static__TOP\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count = 0U;
    vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_State = 0U;
    vlSelfRef.Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_LED_1 = 0U;
    vlSelfRef.Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_Switch_1 = 0U;
    vlSelfRef.Debounce_Filter_TB__DOT__r_Clk = 0U;
    vlSelfRef.Debounce_Filter_TB__DOT__r_Bouncy = 0U;
    vlSelfRef.Debounce_Filter_TB__DOT__dut__DOT__r_Count = 0U;
    vlSelfRef.Debounce_Filter_TB__DOT__dut__DOT__r_State = 0U;
}

VL_ATTR_COLD void VDebounce_Project___024root___eval_final(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_final\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDebounce_Project___024root___dump_triggers__stl(VDebounce_Project___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VDebounce_Project___024root___eval_phase__stl(VDebounce_Project___024root* vlSelf);

VL_ATTR_COLD void VDebounce_Project___024root___eval_settle(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_settle\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VDebounce_Project___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Debounce_Project.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VDebounce_Project___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDebounce_Project___024root___dump_triggers__stl(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___dump_triggers__stl\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VDebounce_Project___024root___stl_sequent__TOP__0(VDebounce_Project___024root* vlSelf);

VL_ATTR_COLD void VDebounce_Project___024root___eval_stl(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_stl\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VDebounce_Project___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VDebounce_Project___024root___stl_sequent__TOP__0(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___stl_sequent__TOP__0\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.o_LED_1 = vlSelfRef.Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_LED_1;
}

VL_ATTR_COLD void VDebounce_Project___024root___eval_triggers__stl(VDebounce_Project___024root* vlSelf);

VL_ATTR_COLD bool VDebounce_Project___024root___eval_phase__stl(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_phase__stl\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VDebounce_Project___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VDebounce_Project___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDebounce_Project___024root___dump_triggers__act(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___dump_triggers__act\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i_Clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge Debounce_Filter_TB.r_Clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VDebounce_Project___024root___dump_triggers__nba(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___dump_triggers__nba\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_Clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge Debounce_Filter_TB.r_Clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VDebounce_Project___024root____Vm_traceActivitySetAll(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root____Vm_traceActivitySetAll\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void VDebounce_Project___024root___ctor_var_reset(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___ctor_var_reset\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->i_Clk = VL_RAND_RESET_I(1);
    vlSelf->i_Switch_1 = VL_RAND_RESET_I(1);
    vlSelf->o_LED_1 = VL_RAND_RESET_I(1);
    vlSelf->Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count = VL_RAND_RESET_I(18);
    vlSelf->Debounce_Project_Top__DOT__Debound_Inst__DOT__r_State = VL_RAND_RESET_I(1);
    vlSelf->Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_LED_1 = VL_RAND_RESET_I(1);
    vlSelf->Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_Switch_1 = VL_RAND_RESET_I(1);
    vlSelf->Debounce_Filter_TB__DOT__r_Clk = VL_RAND_RESET_I(1);
    vlSelf->Debounce_Filter_TB__DOT__r_Bouncy = VL_RAND_RESET_I(1);
    vlSelf->Debounce_Filter_TB__DOT__dut__DOT__r_Count = VL_RAND_RESET_I(2);
    vlSelf->Debounce_Filter_TB__DOT__dut__DOT__r_State = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__Debounce_Filter_TB__DOT__r_Clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__Debounce_Filter_TB__DOT__r_Clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__i_Clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Debounce_Filter_TB__DOT__r_Clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
