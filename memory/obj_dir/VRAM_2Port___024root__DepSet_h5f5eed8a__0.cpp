// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRAM_2Port.h for the primary calling header

#include "VRAM_2Port__pch.h"
#include "VRAM_2Port__Syms.h"
#include "VRAM_2Port___024root.h"

VL_INLINE_OPT VlCoroutine VRAM_2Port___024root___eval_initial__TOP__Vtiming__0(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___eval_initial__TOP__Vtiming__0\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_DV = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         42);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Data = (0xffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Data)));
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Addr = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Addr)));
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_DV = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         42);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Data = (0xffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Data)));
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Addr = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Addr)));
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_DV = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         42);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Data = (0xffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Data)));
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Addr = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Addr)));
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_DV = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         42);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Data = (0xffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Data)));
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Addr = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Addr)));
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_DV = 0U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_En = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_Addr = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.RAM_2Port_TB__DOT__r_Rd_Addr)));
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_En = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_Addr = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.RAM_2Port_TB__DOT__r_Rd_Addr)));
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_En = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_Addr = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.RAM_2Port_TB__DOT__r_Rd_Addr)));
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_En = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_Addr = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.RAM_2Port_TB__DOT__r_Rd_Addr)));
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_En = 0U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         57);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         57);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         57);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         57);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Addr = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_Data = 0x54U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_Addr = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_En = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_DV = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         65);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_En = 0U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Wr_DV = 0U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_En = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RAM_2Port_TB__DOT__r_Rd_En = 0U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h3aef98d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge RAM_2Port_TB.r_Clk)", 
                                                         "RAM_2PortTB.sv", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("RAM_2PortTB.sv", 74, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRAM_2Port___024root___dump_triggers__act(VRAM_2Port___024root* vlSelf);
#endif  // VL_DEBUG

void VRAM_2Port___024root___eval_triggers__act(VRAM_2Port___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRAM_2Port___024root___eval_triggers__act\n"); );
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.RAM_2Port_TB__DOT__r_Clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RAM_2Port_TB__DOT__r_Clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__RAM_2Port_TB__DOT__r_Clk__0 
        = vlSelfRef.RAM_2Port_TB__DOT__r_Clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRAM_2Port___024root___dump_triggers__act(vlSelf);
    }
#endif
}
