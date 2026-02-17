// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblink.h for the primary calling header

#include "Vblink__pch.h"
#include "Vblink___024root.h"

VL_ATTR_COLD void Vblink___024root___eval_static(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_static\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
}

VL_ATTR_COLD void Vblink___024root___eval_initial__TOP(Vblink___024root* vlSelf);

VL_ATTR_COLD void Vblink___024root___eval_initial(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_initial\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vblink___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vblink___024root___eval_initial__TOP(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_initial__TOP\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.blink__DOT__counter = 0U;
}

VL_ATTR_COLD void Vblink___024root___eval_final(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_final\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblink___024root___dump_triggers__stl(Vblink___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vblink___024root___eval_phase__stl(Vblink___024root* vlSelf);

VL_ATTR_COLD void Vblink___024root___eval_settle(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_settle\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vblink___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("blink.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vblink___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblink___024root___dump_triggers__stl(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___dump_triggers__stl\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vblink___024root___stl_sequent__TOP__0(Vblink___024root* vlSelf);

VL_ATTR_COLD void Vblink___024root___eval_stl(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_stl\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vblink___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vblink___024root___stl_sequent__TOP__0(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___stl_sequent__TOP__0\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.o_led = (vlSelfRef.blink__DOT__counter 
                       >> 0x1fU);
}

VL_ATTR_COLD void Vblink___024root___eval_triggers__stl(Vblink___024root* vlSelf);

VL_ATTR_COLD bool Vblink___024root___eval_phase__stl(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_phase__stl\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vblink___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vblink___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblink___024root___dump_triggers__act(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___dump_triggers__act\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblink___024root___dump_triggers__nba(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___dump_triggers__nba\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vblink___024root___ctor_var_reset(Vblink___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___ctor_var_reset\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15925868812496733354ull);
    vlSelf->o_led = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5074870900653449234ull);
    vlSelf->blink__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10800554590648433464ull);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14745602394763455243ull);
}
