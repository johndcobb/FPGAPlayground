// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDebounce_Project__Syms.h"


VL_ATTR_COLD void VDebounce_Project___024root__trace_init_sub__TOP__0(VDebounce_Project___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root__trace_init_sub__TOP__0\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,0,"i_Clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_Switch_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"o_LED_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Debounce_Filter_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+8,0,"r_Clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"r_Bouncy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"w_Debounced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"DEBOUNCE_LIMIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"i_Clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"i_Bouncy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"o_Debounced",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"r_Count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+10,0,"r_State",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Debounce_Project_Top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+5,0,"i_Clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_Switch_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"o_LED_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"w_Debounced_Switch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Debound_Inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"DEBOUNCE_LIMIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"i_Clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_Bouncy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"o_Debounced",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"r_Count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+1,0,"r_State",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LED_Toggle_Inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"i_Switch_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"i_Clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"o_LED_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"r_LED_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"r_Switch_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VDebounce_Project___024root__trace_init_top(VDebounce_Project___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root__trace_init_top\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VDebounce_Project___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VDebounce_Project___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VDebounce_Project___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VDebounce_Project___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VDebounce_Project___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VDebounce_Project___024root__trace_register(VDebounce_Project___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root__trace_register\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VDebounce_Project___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VDebounce_Project___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VDebounce_Project___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VDebounce_Project___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VDebounce_Project___024root__trace_const_0_sub_0(VDebounce_Project___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VDebounce_Project___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root__trace_const_0\n"); );
    // Init
    VDebounce_Project___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDebounce_Project___024root*>(voidSelf);
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VDebounce_Project___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VDebounce_Project___024root__trace_const_0_sub_0(VDebounce_Project___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root__trace_const_0_sub_0\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+12,(4U),32);
    bufp->fullIData(oldp+13,(0x3d090U),32);
}

VL_ATTR_COLD void VDebounce_Project___024root__trace_full_0_sub_0(VDebounce_Project___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VDebounce_Project___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root__trace_full_0\n"); );
    // Init
    VDebounce_Project___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDebounce_Project___024root*>(voidSelf);
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VDebounce_Project___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VDebounce_Project___024root__trace_full_0_sub_0(VDebounce_Project___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDebounce_Project___024root__trace_full_0_sub_0\n"); );
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_State));
    bufp->fullIData(oldp+2,(vlSelfRef.Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count),18);
    bufp->fullBit(oldp+3,(vlSelfRef.Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_LED_1));
    bufp->fullBit(oldp+4,(vlSelfRef.Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_Switch_1));
    bufp->fullBit(oldp+5,(vlSelfRef.i_Clk));
    bufp->fullBit(oldp+6,(vlSelfRef.i_Switch_1));
    bufp->fullBit(oldp+7,(vlSelfRef.o_LED_1));
    bufp->fullBit(oldp+8,(vlSelfRef.Debounce_Filter_TB__DOT__r_Clk));
    bufp->fullBit(oldp+9,(vlSelfRef.Debounce_Filter_TB__DOT__r_Bouncy));
    bufp->fullBit(oldp+10,(vlSelfRef.Debounce_Filter_TB__DOT__dut__DOT__r_State));
    bufp->fullCData(oldp+11,(vlSelfRef.Debounce_Filter_TB__DOT__dut__DOT__r_Count),2);
}
