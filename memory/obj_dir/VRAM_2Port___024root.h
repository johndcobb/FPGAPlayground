// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRAM_2Port.h for the primary calling header

#ifndef VERILATED_VRAM_2PORT___024ROOT_H_
#define VERILATED_VRAM_2PORT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VRAM_2Port__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRAM_2Port___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ RAM_2Port_TB__DOT__r_Clk;
    CData/*0:0*/ RAM_2Port_TB__DOT__r_Wr_DV;
    CData/*0:0*/ RAM_2Port_TB__DOT__r_Rd_En;
    CData/*1:0*/ RAM_2Port_TB__DOT__r_Wr_Addr;
    CData/*1:0*/ RAM_2Port_TB__DOT__r_Rd_Addr;
    CData/*7:0*/ RAM_2Port_TB__DOT__r_Wr_Data;
    CData/*7:0*/ RAM_2Port_TB__DOT__w_Rd_Data;
    CData/*0:0*/ RAM_2Port_TB__DOT__UUT__DOT__o_Rd_DV;
    CData/*0:0*/ __VdlyVal__RAM_2Port_TB__DOT__r_Clk__v0;
    CData/*0:0*/ __VdlySet__RAM_2Port_TB__DOT__r_Clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__RAM_2Port_TB__DOT__r_Clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 4> RAM_2Port_TB__DOT__UUT__DOT__r_Mem;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3aef98d4__0;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRAM_2Port__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRAM_2Port___024root(VRAM_2Port__Syms* symsp, const char* v__name);
    ~VRAM_2Port___024root();
    VL_UNCOPYABLE(VRAM_2Port___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
