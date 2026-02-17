// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vthruwire.h for the primary calling header

#include "Vthruwire__pch.h"
#include "Vthruwire___024root.h"

void Vthruwire___024root___ico_sequent__TOP__0(Vthruwire___024root* vlSelf);

void Vthruwire___024root___eval_ico(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_ico\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vthruwire___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vthruwire___024root___ico_sequent__TOP__0(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___ico_sequent__TOP__0\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.o_led = vlSelfRef.i_sw;
}

void Vthruwire___024root___eval_triggers__ico(Vthruwire___024root* vlSelf);

bool Vthruwire___024root___eval_phase__ico(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_phase__ico\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vthruwire___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vthruwire___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vthruwire___024root___eval_act(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_act\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vthruwire___024root___eval_nba(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_nba\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vthruwire___024root___eval_triggers__act(Vthruwire___024root* vlSelf);

bool Vthruwire___024root___eval_phase__act(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_phase__act\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vthruwire___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vthruwire___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vthruwire___024root___eval_phase__nba(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_phase__nba\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vthruwire___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vthruwire___024root___dump_triggers__ico(Vthruwire___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vthruwire___024root___dump_triggers__nba(Vthruwire___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vthruwire___024root___dump_triggers__act(Vthruwire___024root* vlSelf);
#endif  // VL_DEBUG

void Vthruwire___024root___eval(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vthruwire___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("thruwire.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vthruwire___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vthruwire___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("thruwire.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vthruwire___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("thruwire.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vthruwire___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vthruwire___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vthruwire___024root___eval_debug_assertions(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_debug_assertions\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.i_sw & 0xfeU)))) {
        Verilated::overWidthError("i_sw");}
}
#endif  // VL_DEBUG
