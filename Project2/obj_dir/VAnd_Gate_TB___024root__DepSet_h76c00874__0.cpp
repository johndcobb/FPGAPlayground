// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAnd_Gate_TB.h for the primary calling header

#include "VAnd_Gate_TB__pch.h"
#include "VAnd_Gate_TB__Syms.h"
#include "VAnd_Gate_TB___024root.h"

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
