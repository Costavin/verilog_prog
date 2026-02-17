// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmealy.h for the primary calling header

#include "Vmealy__pch.h"
#include "Vmealy___024root.h"

VL_ATTR_COLD void Vmealy___024root___eval_static(Vmealy___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root___eval_static\n"); );
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
}

VL_ATTR_COLD void Vmealy___024root___eval_initial__TOP(Vmealy___024root* vlSelf);

VL_ATTR_COLD void Vmealy___024root___eval_initial(Vmealy___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root___eval_initial\n"); );
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmealy___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vmealy___024root___eval_initial__TOP(Vmealy___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root___eval_initial__TOP\n"); );
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mealy__DOT__led_index = 0U;
}

VL_ATTR_COLD void Vmealy___024root___eval_final(Vmealy___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root___eval_final\n"); );
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmealy___024root___dump_triggers__stl(Vmealy___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmealy___024root___eval_phase__stl(Vmealy___024root* vlSelf);

VL_ATTR_COLD void Vmealy___024root___eval_settle(Vmealy___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root___eval_settle\n"); );
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmealy___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("mealy.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmealy___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmealy___024root___dump_triggers__stl(Vmealy___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root___dump_triggers__stl\n"); );
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vmealy___024root___ico_sequent__TOP__0(Vmealy___024root* vlSelf);

VL_ATTR_COLD void Vmealy___024root___eval_stl(Vmealy___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root___eval_stl\n"); );
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmealy___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmealy___024root___eval_triggers__stl(Vmealy___024root* vlSelf);

VL_ATTR_COLD bool Vmealy___024root___eval_phase__stl(Vmealy___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root___eval_phase__stl\n"); );
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmealy___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmealy___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmealy___024root___dump_triggers__ico(Vmealy___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root___dump_triggers__ico\n"); );
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmealy___024root___dump_triggers__act(Vmealy___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root___dump_triggers__act\n"); );
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vmealy___024root___dump_triggers__nba(Vmealy___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root___dump_triggers__nba\n"); );
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vmealy___024root___ctor_var_reset(Vmealy___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root___ctor_var_reset\n"); );
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15925868812496733354ull);
    vlSelf->o_led = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5074870900653449234ull);
    vlSelf->i_display_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10971068803394769159ull);
    vlSelf->mealy__DOT__led_index = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3978776666953273355ull);
    vlSelf->mealy__DOT__next_led_index = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11252224519909081524ull);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14745602394763455243ull);
}
