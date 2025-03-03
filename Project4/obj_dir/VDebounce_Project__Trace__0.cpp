// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDebounce_Project__Syms.h"


void VDebounce_Project___024root__trace_chg_0_sub_0(VDebounce_Project___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VDebounce_Project___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root__trace_chg_0\n"); );
    // Init
    VDebounce_Project___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDebounce_Project___024root*>(voidSelf);
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VDebounce_Project___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VDebounce_Project___024root__trace_chg_0_sub_0(VDebounce_Project___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root__trace_chg_0_sub_0\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_State));
        bufp->chgIData(oldp+1,(vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count),18);
        bufp->chgBit(oldp+2,(vlSelfRef.Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_LED_1));
        bufp->chgBit(oldp+3,(vlSelfRef.Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_Switch_1));
    }
    bufp->chgBit(oldp+4,(vlSelfRef.i_Clk));
    bufp->chgBit(oldp+5,(vlSelfRef.i_Switch_1));
    bufp->chgBit(oldp+6,(vlSelfRef.o_LED_1));
    bufp->chgBit(oldp+7,(vlSelfRef.Debounce_Filter_TB__DOT__r_Clk));
    bufp->chgBit(oldp+8,(vlSelfRef.Debounce_Filter_TB__DOT__r_Bouncy));
    bufp->chgBit(oldp+9,(vlSelfRef.Debounce_Filter_TB__DOT__dut__DOT__r_State));
    bufp->chgCData(oldp+10,(vlSelfRef.Debounce_Filter_TB__DOT__dut__DOT__r_Count),2);
}

void VDebounce_Project___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root__trace_cleanup\n"); );
    // Init
    VDebounce_Project___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDebounce_Project___024root*>(voidSelf);
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
