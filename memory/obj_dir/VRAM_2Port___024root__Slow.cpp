// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRAM_2Port.h for the primary calling header

#include "VRAM_2Port__pch.h"
#include "VRAM_2Port__Syms.h"
#include "VRAM_2Port___024root.h"

void VRAM_2Port___024root___ctor_var_reset(VRAM_2Port___024root* vlSelf);

VRAM_2Port___024root::VRAM_2Port___024root(VRAM_2Port__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRAM_2Port___024root___ctor_var_reset(this);
}

void VRAM_2Port___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VRAM_2Port___024root::~VRAM_2Port___024root() {
}
