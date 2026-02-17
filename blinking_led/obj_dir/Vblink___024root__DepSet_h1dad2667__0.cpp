// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblink.h for the primary calling header

#include "Vblink__pch.h"
#include "Vblink___024root.h"

void Vblink___024root___eval_act(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_act\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vblink___024root___nba_sequent__TOP__0(Vblink___024root* vlSelf);

void Vblink___024root___eval_nba(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_nba\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vblink___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vblink___024root___nba_sequent__TOP__0(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___nba_sequent__TOP__0\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.blink__DOT__counter = ((IData)(0xffffe40aU) 
                                     + vlSelfRef.blink__DOT__counter);
    vlSelfRef.o_led = (vlSelfRef.blink__DOT__counter 
                       >> 0x1fU);
}

void Vblink___024root___eval_triggers__act(Vblink___024root* vlSelf);

bool Vblink___024root___eval_phase__act(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_phase__act\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vblink___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vblink___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vblink___024root___eval_phase__nba(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_phase__nba\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vblink___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblink___024root___dump_triggers__nba(Vblink___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vblink___024root___dump_triggers__act(Vblink___024root* vlSelf);
#endif  // VL_DEBUG

void Vblink___024root___eval(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vblink___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("blink.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vblink___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("blink.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vblink___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vblink___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vblink___024root___eval_debug_assertions(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_debug_assertions\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.i_clk & 0xfeU)))) {
        Verilated::overWidthError("i_clk");}
}
#endif  // VL_DEBUG
