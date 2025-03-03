// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDebounce_Project.h for the primary calling header

#include "VDebounce_Project__pch.h"
#include "VDebounce_Project___024root.h"

VlCoroutine VDebounce_Project___024root___eval_initial__TOP__Vtiming__0(VDebounce_Project___024root* vlSelf);
VlCoroutine VDebounce_Project___024root___eval_initial__TOP__Vtiming__1(VDebounce_Project___024root* vlSelf);

void VDebounce_Project___024root___eval_initial(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_initial\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VDebounce_Project___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VDebounce_Project___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__i_Clk__0 = vlSelfRef.i_Clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Debounce_Filter_TB__DOT__r_Clk__0 
        = vlSelfRef.Debounce_Filter_TB__DOT__r_Clk;
}

VL_INLINE_OPT VlCoroutine VDebounce_Project___024root___eval_initial__TOP__Vtiming__1(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_initial__TOP__Vtiming__1\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(2ULL, 
                                             nullptr, 
                                             "Debounce_Filter_TB.sv", 
                                             5);
        vlSelfRef.__VdlyVal__Debounce_Filter_TB__DOT__r_Clk__v0 
            = (1U & (~ (IData)(vlSelfRef.Debounce_Filter_TB__DOT__r_Clk)));
        vlSelfRef.__VdlySet__Debounce_Filter_TB__DOT__r_Clk__v0 = 1U;
    }
}

void VDebounce_Project___024root___eval_act(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_act\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VDebounce_Project___024root___nba_sequent__TOP__0(VDebounce_Project___024root* vlSelf);
void VDebounce_Project___024root___nba_sequent__TOP__1(VDebounce_Project___024root* vlSelf);
void VDebounce_Project___024root___nba_sequent__TOP__2(VDebounce_Project___024root* vlSelf);

void VDebounce_Project___024root___eval_nba(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_nba\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VDebounce_Project___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VDebounce_Project___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VDebounce_Project___024root___nba_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void VDebounce_Project___024root___nba_sequent__TOP__0(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___nba_sequent__TOP__0\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__Debounce_Filter_TB__DOT__dut__DOT__r_Count;
    __Vdly__Debounce_Filter_TB__DOT__dut__DOT__r_Count = 0;
    // Body
    __Vdly__Debounce_Filter_TB__DOT__dut__DOT__r_Count 
        = vlSelfRef.Debounce_Filter_TB__DOT__dut__DOT__r_Count;
    if ((((IData)(vlSelfRef.Debounce_Filter_TB__DOT__r_Bouncy) 
          != (IData)(vlSelfRef.Debounce_Filter_TB__DOT__dut__DOT__r_State)) 
         & (3U > (IData)(vlSelfRef.Debounce_Filter_TB__DOT__dut__DOT__r_Count)))) {
        __Vdly__Debounce_Filter_TB__DOT__dut__DOT__r_Count 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.Debounce_Filter_TB__DOT__dut__DOT__r_Count)));
    } else if ((3U == (IData)(vlSelfRef.Debounce_Filter_TB__DOT__dut__DOT__r_Count))) {
        vlSelfRef.Debounce_Filter_TB__DOT__dut__DOT__r_State 
            = vlSelfRef.Debounce_Filter_TB__DOT__r_Bouncy;
        __Vdly__Debounce_Filter_TB__DOT__dut__DOT__r_Count = 0U;
    } else {
        __Vdly__Debounce_Filter_TB__DOT__dut__DOT__r_Count = 0U;
    }
    vlSelfRef.Debounce_Filter_TB__DOT__dut__DOT__r_Count 
        = __Vdly__Debounce_Filter_TB__DOT__dut__DOT__r_Count;
}

VL_INLINE_OPT void VDebounce_Project___024root___nba_sequent__TOP__1(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___nba_sequent__TOP__1\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*17:0*/ __Vdly__Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count;
    __Vdly__Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count = 0;
    CData/*0:0*/ __Vdly__Debounce_Project_Top__DOT__Debound_Inst__DOT__r_State;
    __Vdly__Debounce_Project_Top__DOT__Debound_Inst__DOT__r_State = 0;
    // Body
    __Vdly__Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count 
        = vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count;
    __Vdly__Debounce_Project_Top__DOT__Debound_Inst__DOT__r_State 
        = vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_State;
    if ((((IData)(vlSelfRef.i_Switch_1) != (IData)(vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_State)) 
         & (0x3d08fU > vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count))) {
        __Vdly__Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count 
            = (0x3ffffU & ((IData)(1U) + vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count));
    } else if ((0x3d08fU == vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count)) {
        __Vdly__Debounce_Project_Top__DOT__Debound_Inst__DOT__r_State 
            = vlSelfRef.i_Switch_1;
        __Vdly__Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count = 0U;
    } else {
        __Vdly__Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count = 0U;
    }
    if (((~ (IData)(vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_State)) 
         & (IData)(vlSelfRef.Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_Switch_1))) {
        vlSelfRef.Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_LED_1 
            = (1U & (~ (IData)(vlSelfRef.Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_LED_1)));
    }
    vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count 
        = __Vdly__Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count;
    vlSelfRef.o_LED_1 = vlSelfRef.Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_LED_1;
    vlSelfRef.Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_Switch_1 
        = vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_State;
    vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_State 
        = __Vdly__Debounce_Project_Top__DOT__Debound_Inst__DOT__r_State;
}

VL_INLINE_OPT void VDebounce_Project___024root___nba_sequent__TOP__2(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___nba_sequent__TOP__2\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__Debounce_Filter_TB__DOT__r_Clk__v0) {
        vlSelfRef.__VdlySet__Debounce_Filter_TB__DOT__r_Clk__v0 = 0U;
        vlSelfRef.Debounce_Filter_TB__DOT__r_Clk = vlSelfRef.__VdlyVal__Debounce_Filter_TB__DOT__r_Clk__v0;
    }
}

void VDebounce_Project___024root___timing_commit(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___timing_commit\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h76a74e64__0.commit(
                                                   "@(posedge Debounce_Filter_TB.r_Clk)");
    }
}

void VDebounce_Project___024root___timing_resume(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___timing_resume\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h76a74e64__0.resume(
                                                   "@(posedge Debounce_Filter_TB.r_Clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VDebounce_Project___024root___eval_triggers__act(VDebounce_Project___024root* vlSelf);

bool VDebounce_Project___024root___eval_phase__act(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_phase__act\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VDebounce_Project___024root___eval_triggers__act(vlSelf);
    VDebounce_Project___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VDebounce_Project___024root___timing_resume(vlSelf);
        VDebounce_Project___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VDebounce_Project___024root___eval_phase__nba(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_phase__nba\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VDebounce_Project___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDebounce_Project___024root___dump_triggers__nba(VDebounce_Project___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VDebounce_Project___024root___dump_triggers__act(VDebounce_Project___024root* vlSelf);
#endif  // VL_DEBUG

void VDebounce_Project___024root___eval(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VDebounce_Project___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Debounce_Project.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VDebounce_Project___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Debounce_Project.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VDebounce_Project___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VDebounce_Project___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VDebounce_Project___024root___eval_debug_assertions(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_debug_assertions\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.i_Clk & 0xfeU)))) {
        Verilated::overWidthError("i_Clk");}
    if (VL_UNLIKELY(((vlSelfRef.i_Switch_1 & 0xfeU)))) {
        Verilated::overWidthError("i_Switch_1");}
}
#endif  // VL_DEBUG
