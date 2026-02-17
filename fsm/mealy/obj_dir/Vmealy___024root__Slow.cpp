// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmealy.h for the primary calling header

#include "Vmealy__pch.h"
#include "Vmealy__Syms.h"
#include "Vmealy___024root.h"

void Vmealy___024root___ctor_var_reset(Vmealy___024root* vlSelf);

Vmealy___024root::Vmealy___024root(Vmealy__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmealy___024root___ctor_var_reset(this);
}

void Vmealy___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmealy___024root::~Vmealy___024root() {
}
