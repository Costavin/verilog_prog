// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vthruwire.h for the primary calling header

#include "Vthruwire__pch.h"
#include "Vthruwire___024root.h"

VL_ATTR_COLD void Vthruwire___024root___eval_static(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_static\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vthruwire___024root___eval_initial(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_initial\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vthruwire___024root___eval_final(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_final\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vthruwire___024root___dump_triggers__stl(Vthruwire___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vthruwire___024root___eval_phase__stl(Vthruwire___024root* vlSelf);

VL_ATTR_COLD void Vthruwire___024root___eval_settle(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_settle\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vthruwire___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("thruwire.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vthruwire___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vthruwire___024root___dump_triggers__stl(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___dump_triggers__stl\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vthruwire___024root___ico_sequent__TOP__0(Vthruwire___024root* vlSelf);

VL_ATTR_COLD void Vthruwire___024root___eval_stl(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_stl\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vthruwire___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vthruwire___024root___eval_triggers__stl(Vthruwire___024root* vlSelf);

VL_ATTR_COLD bool Vthruwire___024root___eval_phase__stl(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___eval_phase__stl\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vthruwire___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vthruwire___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vthruwire___024root___dump_triggers__ico(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___dump_triggers__ico\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vthruwire___024root___dump_triggers__act(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___dump_triggers__act\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vthruwire___024root___dump_triggers__nba(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___dump_triggers__nba\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vthruwire___024root___ctor_var_reset(Vthruwire___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthruwire___024root___ctor_var_reset\n"); );
    Vthruwire__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->i_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6711023328668529674ull);
    vlSelf->o_led = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5074870900653449234ull);
}
