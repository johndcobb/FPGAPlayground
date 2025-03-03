// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDebounce_Project.h for the primary calling header

#include "VDebounce_Project__pch.h"
#include "VDebounce_Project__Syms.h"
#include "VDebounce_Project___024root.h"

VL_INLINE_OPT VlCoroutine VDebounce_Project___024root___eval_initial__TOP__Vtiming__0(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_initial__TOP__Vtiming__0\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x725f5442U;
    __Vtemp_1[2U] = 0x696c7465U;
    __Vtemp_1[3U] = 0x63655f46U;
    __Vtemp_1[4U] = 0x626f756eU;
    __Vtemp_1[5U] = 0x4465U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VtrigSched_h76a74e64__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Debounce_Filter_TB.r_Clk)", 
                                                         "Debounce_Filter_TB.sv", 
                                                         12);
    co_await vlSelfRef.__VtrigSched_h76a74e64__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Debounce_Filter_TB.r_Clk)", 
                                                         "Debounce_Filter_TB.sv", 
                                                         12);
    co_await vlSelfRef.__VtrigSched_h76a74e64__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Debounce_Filter_TB.r_Clk)", 
                                                         "Debounce_Filter_TB.sv", 
                                                         12);
    vlSelfRef.Debounce_Filter_TB__DOT__r_Bouncy = 1U;
    co_await vlSelfRef.__VtrigSched_h76a74e64__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Debounce_Filter_TB.r_Clk)", 
                                                         "Debounce_Filter_TB.sv", 
                                                         14);
    vlSelfRef.Debounce_Filter_TB__DOT__r_Bouncy = 0U;
    co_await vlSelfRef.__VtrigSched_h76a74e64__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Debounce_Filter_TB.r_Clk)", 
                                                         "Debounce_Filter_TB.sv", 
                                                         16);
    vlSelfRef.Debounce_Filter_TB__DOT__r_Bouncy = 1U;
    co_await vlSelfRef.__VtrigSched_h76a74e64__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Debounce_Filter_TB.r_Clk)", 
                                                         "Debounce_Filter_TB.sv", 
                                                         18);
    co_await vlSelfRef.__VtrigSched_h76a74e64__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Debounce_Filter_TB.r_Clk)", 
                                                         "Debounce_Filter_TB.sv", 
                                                         18);
    co_await vlSelfRef.__VtrigSched_h76a74e64__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Debounce_Filter_TB.r_Clk)", 
                                                         "Debounce_Filter_TB.sv", 
                                                         18);
    co_await vlSelfRef.__VtrigSched_h76a74e64__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Debounce_Filter_TB.r_Clk)", 
                                                         "Debounce_Filter_TB.sv", 
                                                         18);
    co_await vlSelfRef.__VtrigSched_h76a74e64__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Debounce_Filter_TB.r_Clk)", 
                                                         "Debounce_Filter_TB.sv", 
                                                         18);
    co_await vlSelfRef.__VtrigSched_h76a74e64__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Debounce_Filter_TB.r_Clk)", 
                                                         "Debounce_Filter_TB.sv", 
                                                         18);
    VL_WRITEF_NX("Test Complete\n",0);
    VL_FINISH_MT("Debounce_Filter_TB.sv", 20, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDebounce_Project___024root___dump_triggers__act(VDebounce_Project___024root* vlSelf);
#endif  // VL_DEBUG

void VDebounce_Project___024root___eval_triggers__act(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_triggers__act\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.i_Clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i_Clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.Debounce_Filter_TB__DOT__r_Clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Debounce_Filter_TB__DOT__r_Clk__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__i_Clk__0 = vlSelfRef.i_Clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Debounce_Filter_TB__DOT__r_Clk__0 
        = vlSelfRef.Debounce_Filter_TB__DOT__r_Clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VDebounce_Project___024root___dump_triggers__act(vlSelf);
    }
#endif
}
