// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRAM_2Port__Syms.h"


VL_ATTR_COLD void VRAM_2Port___024root__trace_init_sub__TOP__0(VRAM_2Port___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root__trace_init_sub__TOP__0\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("RAM_2Port_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"r_Clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"r_Wr_DV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"r_Rd_En",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"r_Wr_Addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"r_Rd_Addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"r_Wr_Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"w_Rd_Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"i_Wr_Clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"i_Wr_Addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1,0,"i_Wr_DV",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"i_Wr_Data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+12,0,"i_Rd_Clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"i_Rd_Addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2,0,"i_Rd_En",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"o_Rd_DV",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"o_Rd_Data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("r_Mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VRAM_2Port___024root__trace_init_top(VRAM_2Port___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root__trace_init_top\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VRAM_2Port___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRAM_2Port___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VRAM_2Port___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRAM_2Port___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRAM_2Port___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRAM_2Port___024root__trace_register(VRAM_2Port___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root__trace_register\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VRAM_2Port___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VRAM_2Port___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VRAM_2Port___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VRAM_2Port___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRAM_2Port___024root__trace_const_0_sub_0(VRAM_2Port___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRAM_2Port___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root__trace_const_0\n"); );
    // Init
    VRAM_2Port___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRAM_2Port___024root*>(voidSelf);
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRAM_2Port___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRAM_2Port___024root__trace_const_0_sub_0(VRAM_2Port___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root__trace_const_0_sub_0\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+13,(4U),32);
    bufp->fullIData(oldp+14,(8U),32);
}

VL_ATTR_COLD void VRAM_2Port___024root__trace_full_0_sub_0(VRAM_2Port___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRAM_2Port___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root__trace_full_0\n"); );
    // Init
    VRAM_2Port___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRAM_2Port___024root*>(voidSelf);
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRAM_2Port___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRAM_2Port___024root__trace_full_0_sub_0(VRAM_2Port___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root__trace_full_0_sub_0\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.RAM_2Port_TB__DOT__r_Wr_DV));
    bufp->fullBit(oldp+2,(vlSelfRef.RAM_2Port_TB__DOT__r_Rd_En));
    bufp->fullCData(oldp+3,(vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Addr),2);
    bufp->fullCData(oldp+4,(vlSelfRef.RAM_2Port_TB__DOT__r_Rd_Addr),2);
    bufp->fullCData(oldp+5,(vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Data),8);
    bufp->fullCData(oldp+6,(vlSelfRef.RAM_2Port_TB__DOT__w_Rd_Data),8);
    bufp->fullBit(oldp+7,(vlSelfRef.RAM_2Port_TB__DOT__UUT__DOT__o_Rd_DV));
    bufp->fullCData(oldp+8,(vlSelfRef.RAM_2Port_TB__DOT__UUT__DOT__r_Mem[0]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.RAM_2Port_TB__DOT__UUT__DOT__r_Mem[1]),8);
    bufp->fullCData(oldp+10,(vlSelfRef.RAM_2Port_TB__DOT__UUT__DOT__r_Mem[2]),8);
    bufp->fullCData(oldp+11,(vlSelfRef.RAM_2Port_TB__DOT__UUT__DOT__r_Mem[3]),8);
    bufp->fullBit(oldp+12,(vlSelfRef.RAM_2Port_TB__DOT__r_Clk));
}
