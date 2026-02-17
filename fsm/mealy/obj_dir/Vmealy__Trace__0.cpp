// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmealy__Syms.h"


void Vmealy___024root__trace_chg_0_sub_0(Vmealy___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmealy___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root__trace_chg_0\n"); );
    // Init
    Vmealy___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmealy___024root*>(voidSelf);
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmealy___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmealy___024root__trace_chg_0_sub_0(Vmealy___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root__trace_chg_0_sub_0\n"); );
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.i_clk));
    bufp->chgBit(oldp+1,(vlSelfRef.i_display_enable));
    bufp->chgCData(oldp+2,(vlSelfRef.o_led),8);
    bufp->chgCData(oldp+3,(vlSelfRef.mealy__DOT__led_index),4);
    bufp->chgCData(oldp+4,(vlSelfRef.mealy__DOT__next_led_index),4);
}

void Vmealy___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy___024root__trace_cleanup\n"); );
    // Init
    Vmealy___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmealy___024root*>(voidSelf);
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
