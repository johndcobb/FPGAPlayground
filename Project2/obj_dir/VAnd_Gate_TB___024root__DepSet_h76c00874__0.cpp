// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAnd_Gate_TB.h for the primary calling header

#include "VAnd_Gate_TB__pch.h"
#include "VAnd_Gate_TB__Syms.h"
#include "VAnd_Gate_TB___024root.h"

VL_INLINE_OPT VlCoroutine VAnd_Gate_TB___024root___eval_initial__TOP__Vtiming__0(VAnd_Gate_TB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x655f5442U;
    __Vtemp_1[2U] = 0x5f476174U;
    __Vtemp_1[3U] = 0x416e64U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.And_Gate_TB__DOT__r_In1 = 0U;
    vlSelfRef.And_Gate_TB__DOT__r_In2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "And_Gate_TB.sv", 
                                         15);
    vlSelfRef.And_Gate_TB__DOT__r_In1 = 0U;
    vlSelfRef.And_Gate_TB__DOT__r_In2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "And_Gate_TB.sv", 
                                         18);
    vlSelfRef.And_Gate_TB__DOT__r_In1 = 1U;
    vlSelfRef.And_Gate_TB__DOT__r_In2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "And_Gate_TB.sv", 
                                         21);
    vlSelfRef.And_Gate_TB__DOT__r_In1 = 1U;
    vlSelfRef.And_Gate_TB__DOT__r_In2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "And_Gate_TB.sv", 
                                         24);
    VL_FINISH_MT("And_Gate_TB.sv", 25, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAnd_Gate_TB___024root___dump_triggers__act(VAnd_Gate_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VAnd_Gate_TB___024root___eval_triggers__act(VAnd_Gate_TB___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root___eval_triggers__act\n"); );
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VAnd_Gate_TB___024root___dump_triggers__act(vlSelf);
    }
#endif
}
