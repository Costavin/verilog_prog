// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmoore.h for the primary calling header

#include "Vmoore__pch.h"
#include "Vmoore___024root.h"

VL_ATTR_COLD void Vmoore___024root___eval_static(Vmoore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root___eval_static\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
}

VL_ATTR_COLD void Vmoore___024root___eval_initial__TOP(Vmoore___024root* vlSelf);

VL_ATTR_COLD void Vmoore___024root___eval_initial(Vmoore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root___eval_initial\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmoore___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vmoore___024root___eval_initial__TOP(Vmoore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root___eval_initial__TOP\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.moore__DOT__led_index = 0U;
}

VL_ATTR_COLD void Vmoore___024root___eval_final(Vmoore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root___eval_final\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmoore___024root___dump_triggers__stl(Vmoore___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmoore___024root___eval_phase__stl(Vmoore___024root* vlSelf);

VL_ATTR_COLD void Vmoore___024root___eval_settle(Vmoore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root___eval_settle\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmoore___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("moore.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmoore___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmoore___024root___dump_triggers__stl(Vmoore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root___dump_triggers__stl\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vmoore___024root___stl_sequent__TOP__0(Vmoore___024root* vlSelf);

VL_ATTR_COLD void Vmoore___024root___eval_stl(Vmoore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root___eval_stl\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmoore___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> Vmoore__ConstPool__TABLE_h964554e2_0;

VL_ATTR_COLD void Vmoore___024root___stl_sequent__TOP__0(Vmoore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root___stl_sequent__TOP__0\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelfRef.moore__DOT__led_index;
    vlSelfRef.o_led = Vmoore__ConstPool__TABLE_h964554e2_0
        [__Vtableidx1];
}

VL_ATTR_COLD void Vmoore___024root___eval_triggers__stl(Vmoore___024root* vlSelf);

VL_ATTR_COLD bool Vmoore___024root___eval_phase__stl(Vmoore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root___eval_phase__stl\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmoore___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmoore___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmoore___024root___dump_triggers__act(Vmoore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root___dump_triggers__act\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vmoore___024root___dump_triggers__nba(Vmoore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root___dump_triggers__nba\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vmoore___024root___ctor_var_reset(Vmoore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root___ctor_var_reset\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15925868812496733354ull);
    vlSelf->o_led = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5074870900653449234ull);
    vlSelf->moore__DOT__led_index = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3608497722257465165ull);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14745602394763455243ull);
}
