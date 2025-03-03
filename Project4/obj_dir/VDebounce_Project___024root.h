// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDebounce_Project.h for the primary calling header

#ifndef VERILATED_VDEBOUNCE_PROJECT___024ROOT_H_
#define VERILATED_VDEBOUNCE_PROJECT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VDebounce_Project__Syms;

class alignas(VL_CACHE_LINE_BYTES) VDebounce_Project___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_Clk,0,0);
    CData/*0:0*/ Debounce_Filter_TB__DOT__r_Clk;
    VL_IN8(i_Switch_1,0,0);
    VL_OUT8(o_LED_1,0,0);
    CData/*0:0*/ Debounce_Project_Top__DOT__Debound_Inst__DOT__r_State;
    CData/*0:0*/ Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_LED_1;
    CData/*0:0*/ Debounce_Project_Top__DOT__LED_Toggle_Inst__DOT__r_Switch_1;
    CData/*0:0*/ Debounce_Filter_TB__DOT__r_Bouncy;
    CData/*1:0*/ Debounce_Filter_TB__DOT__dut__DOT__r_Count;
    CData/*0:0*/ Debounce_Filter_TB__DOT__dut__DOT__r_State;
    CData/*0:0*/ __VdlyVal__Debounce_Filter_TB__DOT__r_Clk__v0;
    CData/*0:0*/ __VdlySet__Debounce_Filter_TB__DOT__r_Clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_Clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Debounce_Filter_TB__DOT__r_Clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*17:0*/ Debounce_Project_Top__DOT__Debound_Inst__DOT__r_Count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h76a74e64__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VDebounce_Project__Syms* const vlSymsp;

    // CONSTRUCTORS
    VDebounce_Project___024root(VDebounce_Project__Syms* symsp, const char* v__name);
    ~VDebounce_Project___024root();
    VL_UNCOPYABLE(VDebounce_Project___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
