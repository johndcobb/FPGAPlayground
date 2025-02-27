// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAnd_Gate_TB__Syms.h"


VL_ATTR_COLD void VAnd_Gate_TB___024root__trace_init_sub__TOP__0(VAnd_Gate_TB___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root__trace_init_sub__TOP__0\n"); );
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("And_Gate_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"r_In1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"r_In2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"w_Out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"i_Switch_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_Switch_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"o_LED_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VAnd_Gate_TB___024root__trace_init_top(VAnd_Gate_TB___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root__trace_init_top\n"); );
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VAnd_Gate_TB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAnd_Gate_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VAnd_Gate_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAnd_Gate_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAnd_Gate_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAnd_Gate_TB___024root__trace_register(VAnd_Gate_TB___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root__trace_register\n"); );
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VAnd_Gate_TB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VAnd_Gate_TB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VAnd_Gate_TB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VAnd_Gate_TB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAnd_Gate_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root__trace_const_0\n"); );
    // Init
    VAnd_Gate_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAnd_Gate_TB___024root*>(voidSelf);
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VAnd_Gate_TB___024root__trace_full_0_sub_0(VAnd_Gate_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VAnd_Gate_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root__trace_full_0\n"); );
    // Init
    VAnd_Gate_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAnd_Gate_TB___024root*>(voidSelf);
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAnd_Gate_TB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VAnd_Gate_TB___024root__trace_full_0_sub_0(VAnd_Gate_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnd_Gate_TB___024root__trace_full_0_sub_0\n"); );
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.And_Gate_TB__DOT__r_In1));
    bufp->fullBit(oldp+2,(vlSelfRef.And_Gate_TB__DOT__r_In2));
    bufp->fullBit(oldp+3,(((IData)(vlSelfRef.And_Gate_TB__DOT__r_In1) 
                           & (IData)(vlSelfRef.And_Gate_TB__DOT__r_In2))));
}
