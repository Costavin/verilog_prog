// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmealy.h for the primary calling header

#include "Vmealy__pch.h"
#include "Vmealy__Syms.h"
#include "Vmealy___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmealy___024root___dump_triggers__ico(Vmealy___024root* vlSelf);
#endif  // VL_DEBUG

void Vmealy___024root___eval_triggers__ico(Vmealy___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root___eval_triggers__ico\n"); );
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmealy___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmealy___024root___dump_triggers__act(Vmealy___024root* vlSelf);
#endif  // VL_DEBUG

void Vmealy___024root___eval_triggers__act(Vmealy___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root___eval_triggers__act\n"); );
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.i_clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmealy___024root___dump_triggers__act(vlSelf);
    }
#endif
}
