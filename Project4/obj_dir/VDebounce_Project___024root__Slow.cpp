// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDebounce_Project.h for the primary calling header

#include "VDebounce_Project__pch.h"
#include "VDebounce_Project__Syms.h"
#include "VDebounce_Project___024root.h"

void VDebounce_Project___024root___ctor_var_reset(VDebounce_Project___024root* vlSelf);

VDebounce_Project___024root::VDebounce_Project___024root(VDebounce_Project__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VDebounce_Project___024root___ctor_var_reset(this);
}

void VDebounce_Project___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VDebounce_Project___024root::~VDebounce_Project___024root() {
}
