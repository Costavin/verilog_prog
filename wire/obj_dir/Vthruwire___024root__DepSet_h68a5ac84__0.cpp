// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vthruwire.h for the primary calling header

#include "Vthruwire__pch.h"
#include "Vthruwire__Syms.h"
#include "Vthruwire___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vthruwire___024root___dump_triggers__ico(Vthruwire___024root* vlSelf);
#endif  // VL_DEBUG

void Vthruwire___024root___eval_triggers__ico(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_triggers__ico\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vthruwire___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vthruwire___024root___dump_triggers__act(Vthruwire___024root* vlSelf);
#endif  // VL_DEBUG

void Vthruwire___024root___eval_triggers__act(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_triggers__act\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vthruwire___024root___dump_triggers__act(vlSelf);
    }
#endif
}
