// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAnd_Gate_TB__Syms.h"


void VAnd_Gate_TB___024root__trace_chg_0_sub_0(VAnd_Gate_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VAnd_Gate_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root__trace_chg_0\n"); );
    // Init
    VAnd_Gate_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAnd_Gate_TB___024root*>(voidSelf);
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VAnd_Gate_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VAnd_Gate_TB___024root__trace_chg_0_sub_0(VAnd_Gate_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root__trace_chg_0_sub_0\n"); );
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.And_Gate_TB__DOT__r_In1));
    bufp->chgBit(oldp+1,(vlSelfRef.And_Gate_TB__DOT__r_In2));
    bufp->chgBit(oldp+2,(((IData)(vlSelfRef.And_Gate_TB__DOT__r_In1) 
                          & (IData)(vlSelfRef.And_Gate_TB__DOT__r_In2))));
}

void VAnd_Gate_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root__trace_cleanup\n"); );
    // Init
    VAnd_Gate_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAnd_Gate_TB___024root*>(voidSelf);
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
