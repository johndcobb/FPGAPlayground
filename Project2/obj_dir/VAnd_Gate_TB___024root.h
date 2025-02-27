// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAnd_Gate_TB.h for the primary calling header

#ifndef VERILATED_VAND_GATE_TB___024ROOT_H_
#define VERILATED_VAND_GATE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VAnd_Gate_TB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VAnd_Gate_TB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ And_Gate_TB__DOT__r_In1;
    CData/*0:0*/ And_Gate_TB__DOT__r_In2;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VAnd_Gate_TB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VAnd_Gate_TB___024root(VAnd_Gate_TB__Syms* symsp, const char* v__name);
    ~VAnd_Gate_TB___024root();
    VL_UNCOPYABLE(VAnd_Gate_TB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
