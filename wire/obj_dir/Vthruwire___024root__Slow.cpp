// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vthruwire.h for the primary calling header

#include "Vthruwire__pch.h"
#include "Vthruwire__Syms.h"
#include "Vthruwire___024root.h"

void Vthruwire___024root___ctor_var_reset(Vthruwire___024root* vlSelf);

Vthruwire___024root::Vthruwire___024root(Vthruwire__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vthruwire___024root___ctor_var_reset(this);
}

void Vthruwire___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vthruwire___024root::~Vthruwire___024root() {
}
