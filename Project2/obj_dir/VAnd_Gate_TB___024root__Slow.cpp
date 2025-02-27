// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAnd_Gate_TB.h for the primary calling header

#include "VAnd_Gate_TB__pch.h"
#include "VAnd_Gate_TB__Syms.h"
#include "VAnd_Gate_TB___024root.h"

void VAnd_Gate_TB___024root___ctor_var_reset(VAnd_Gate_TB___024root* vlSelf);

VAnd_Gate_TB___024root::VAnd_Gate_TB___024root(VAnd_Gate_TB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VAnd_Gate_TB___024root___ctor_var_reset(this);
}

void VAnd_Gate_TB___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VAnd_Gate_TB___024root::~VAnd_Gate_TB___024root() {
}
