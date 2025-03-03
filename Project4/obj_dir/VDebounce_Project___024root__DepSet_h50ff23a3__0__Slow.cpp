// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDebounce_Project.h for the primary calling header

#include "VDebounce_Project__pch.h"
#include "VDebounce_Project__Syms.h"
#include "VDebounce_Project___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VDebounce_Project___024root___dump_triggers__stl(VDebounce_Project___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VDebounce_Project___024root___eval_triggers__stl(VDebounce_Project___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root___eval_triggers__stl\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VDebounce_Project___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
