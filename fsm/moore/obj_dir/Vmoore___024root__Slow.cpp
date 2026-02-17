// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmoore.h for the primary calling header

#include "Vmoore__pch.h"
#include "Vmoore__Syms.h"
#include "Vmoore___024root.h"

void Vmoore___024root___ctor_var_reset(Vmoore___024root* vlSelf);

Vmoore___024root::Vmoore___024root(Vmoore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmoore___024root___ctor_var_reset(this);
}

void Vmoore___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmoore___024root::~Vmoore___024root() {
}
