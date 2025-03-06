// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRAM_2Port__Syms.h"


void VRAM_2Port___024root__trace_chg_0_sub_0(VRAM_2Port___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VRAM_2Port___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root__trace_chg_0\n"); );
    // Init
    VRAM_2Port___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRAM_2Port___024root*>(voidSelf);
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRAM_2Port___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VRAM_2Port___024root__trace_chg_0_sub_0(VRAM_2Port___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root__trace_chg_0_sub_0\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.RAM_2Port_TB__DOT__r_Wr_DV));
        bufp->chgBit(oldp+1,(vlSelfRef.RAM_2Port_TB__DOT__r_Rd_En));
        bufp->chgCData(oldp+2,(vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Addr),2);
        bufp->chgCData(oldp+3,(vlSelfRef.RAM_2Port_TB__DOT__r_Rd_Addr),2);
        bufp->chgCData(oldp+4,(vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Data),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+5,(vlSelfRef.RAM_2Port_TB__DOT__w_Rd_Data),8);
        bufp->chgBit(oldp+6,(vlSelfRef.RAM_2Port_TB__DOT__UUT__DOT__o_Rd_DV));
        bufp->chgCData(oldp+7,(vlSelfRef.RAM_2Port_TB__DOT__UUT__DOT__r_Mem[0]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.RAM_2Port_TB__DOT__UUT__DOT__r_Mem[1]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.RAM_2Port_TB__DOT__UUT__DOT__r_Mem[2]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.RAM_2Port_TB__DOT__UUT__DOT__r_Mem[3]),8);
    }
    bufp->chgBit(oldp+11,(vlSelfRef.RAM_2Port_TB__DOT__r_Clk));
}

void VRAM_2Port___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root__trace_cleanup\n"); );
    // Init
    VRAM_2Port___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRAM_2Port___024root*>(voidSelf);
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
