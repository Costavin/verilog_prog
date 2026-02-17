// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmoore.h for the primary calling header

#include "Vmoore__pch.h"
#include "Vmoore__Syms.h"
#include "Vmoore___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmoore___024root___dump_triggers__act(Vmoore___024root* vlSelf);
#endif  // VL_DEBUG

void Vmoore___024root___eval_triggers__act(Vmoore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root___eval_triggers__act\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.i_clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__i_clk__0 = vlSelfRef.i_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmoore___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*7:0*/, 16> Vmoore__ConstPool__TABLE_h964554e2_0;

VL_INLINE_OPT void Vmoore___024root___nba_sequent__TOP__0(Vmoore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root___nba_sequent__TOP__0\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0xeU < (IData)(vlSelfRef.moore__DOT__led_index))))) {
            VL_WRITEF_NX("[%0t] %%Error: moore.v:15: Assertion failed in %Nmoore: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("moore.v", 15, "");
        }
    }
    vlSelfRef.moore__DOT__led_index = ((0xeU <= (IData)(vlSelfRef.moore__DOT__led_index))
                                        ? 1U : (0xfU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.moore__DOT__led_index))));
    __Vtableidx1 = vlSelfRef.moore__DOT__led_index;
    vlSelfRef.o_led = Vmoore__ConstPool__TABLE_h964554e2_0
        [__Vtableidx1];
}
