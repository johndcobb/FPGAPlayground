// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRAM_2Port.h for the primary calling header

#include "VRAM_2Port__pch.h"
#include "VRAM_2Port___024root.h"

VlCoroutine VRAM_2Port___024root___eval_initial__TOP__Vtiming__0(VRAM_2Port___024root* vlSelf);
VlCoroutine VRAM_2Port___024root___eval_initial__TOP__Vtiming__1(VRAM_2Port___024root* vlSelf);

void VRAM_2Port___024root___eval_initial(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___eval_initial\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VRAM_2Port___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VRAM_2Port___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__RAM_2Port_TB__DOT__r_Clk__0 
        = vlSelfRef.RAM_2Port_TB__DOT__r_Clk;
}

VL_INLINE_OPT VlCoroutine VRAM_2Port___024root___eval_initial__TOP__Vtiming__1(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___eval_initial__TOP__Vtiming__1\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "RAM_2PortTB.sv", 
                                             16);
        vlSelfRef.__VdlyVal__RAM_2Port_TB__DOT__r_Clk__v0 
            = (1U & (~ (IData)(vlSelfRef.RAM_2Port_TB__DOT__r_Clk)));
        vlSelfRef.__VdlySet__RAM_2Port_TB__DOT__r_Clk__v0 = 1U;
    }
}

void VRAM_2Port___024root___eval_act(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___eval_act\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VRAM_2Port___024root___nba_sequent__TOP__0(VRAM_2Port___024root* vlSelf);
void VRAM_2Port___024root___nba_sequent__TOP__1(VRAM_2Port___024root* vlSelf);

void VRAM_2Port___024root___eval_nba(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___eval_nba\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRAM_2Port___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRAM_2Port___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void VRAM_2Port___024root___nba_sequent__TOP__0(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___nba_sequent__TOP__0\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__RAM_2Port_TB__DOT__UUT__DOT__r_Mem__v0;
    __VdlyVal__RAM_2Port_TB__DOT__UUT__DOT__r_Mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__RAM_2Port_TB__DOT__UUT__DOT__r_Mem__v0;
    __VdlyDim0__RAM_2Port_TB__DOT__UUT__DOT__r_Mem__v0 = 0;
    CData/*0:0*/ __VdlySet__RAM_2Port_TB__DOT__UUT__DOT__r_Mem__v0;
    __VdlySet__RAM_2Port_TB__DOT__UUT__DOT__r_Mem__v0 = 0;
    // Body
    __VdlySet__RAM_2Port_TB__DOT__UUT__DOT__r_Mem__v0 = 0U;
    if (vlSelfRef.RAM_2Port_TB__DOT__r_Wr_DV) {
        __VdlyVal__RAM_2Port_TB__DOT__UUT__DOT__r_Mem__v0 
            = vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Data;
        __VdlyDim0__RAM_2Port_TB__DOT__UUT__DOT__r_Mem__v0 
            = vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Addr;
        __VdlySet__RAM_2Port_TB__DOT__UUT__DOT__r_Mem__v0 = 1U;
    }
    vlSelfRef.RAM_2Port_TB__DOT__UUT__DOT__o_Rd_DV 
        = vlSelfRef.RAM_2Port_TB__DOT__r_Rd_En;
    vlSelfRef.RAM_2Port_TB__DOT__w_Rd_Data = vlSelfRef.RAM_2Port_TB__DOT__UUT__DOT__r_Mem
        [vlSelfRef.RAM_2Port_TB__DOT__r_Rd_Addr];
    if (__VdlySet__RAM_2Port_TB__DOT__UUT__DOT__r_Mem__v0) {
        vlSelfRef.RAM_2Port_TB__DOT__UUT__DOT__r_Mem[__VdlyDim0__RAM_2Port_TB__DOT__UUT__DOT__r_Mem__v0] 
            = __VdlyVal__RAM_2Port_TB__DOT__UUT__DOT__r_Mem__v0;
    }
}

VL_INLINE_OPT void VRAM_2Port___024root___nba_sequent__TOP__1(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___nba_sequent__TOP__1\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__RAM_2Port_TB__DOT__r_Clk__v0) {
        vlSelfRef.__VdlySet__RAM_2Port_TB__DOT__r_Clk__v0 = 0U;
        vlSelfRef.RAM_2Port_TB__DOT__r_Clk = vlSelfRef.__VdlyVal__RAM_2Port_TB__DOT__r_Clk__v0;
    }
}

void VRAM_2Port___024root___timing_commit(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___timing_commit\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h3aef98d4__0.commit(
                                                   "@(posedge RAM_2Port_TB.r_Clk)");
    }
}

void VRAM_2Port___024root___timing_resume(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___timing_resume\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h3aef98d4__0.resume(
                                                   "@(posedge RAM_2Port_TB.r_Clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VRAM_2Port___024root___eval_triggers__act(VRAM_2Port___024root* vlSelf);

bool VRAM_2Port___024root___eval_phase__act(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___eval_phase__act\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRAM_2Port___024root___eval_triggers__act(vlSelf);
    VRAM_2Port___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VRAM_2Port___024root___timing_resume(vlSelf);
        VRAM_2Port___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRAM_2Port___024root___eval_phase__nba(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___eval_phase__nba\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRAM_2Port___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRAM_2Port___024root___dump_triggers__nba(VRAM_2Port___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRAM_2Port___024root___dump_triggers__act(VRAM_2Port___024root* vlSelf);
#endif  // VL_DEBUG

void VRAM_2Port___024root___eval(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___eval\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VRAM_2Port___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("RAM_2PortTB.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VRAM_2Port___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("RAM_2PortTB.sv", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VRAM_2Port___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VRAM_2Port___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRAM_2Port___024root___eval_debug_assertions(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___eval_debug_assertions\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
