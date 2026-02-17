// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmoore__Syms.h"


VL_ATTR_COLD void Vmoore___024root__trace_init_sub__TOP__0(Vmoore___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root__trace_init_sub__TOP__0\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("moore", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"led_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmoore___024root__trace_init_top(Vmoore___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root__trace_init_top\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmoore___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmoore___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmoore___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmoore___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmoore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmoore___024root__trace_register(Vmoore___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root__trace_register\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmoore___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmoore___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmoore___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmoore___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmoore___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root__trace_const_0\n"); );
    // Init
    Vmoore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmoore___024root*>(voidSelf);
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vmoore___024root__trace_full_0_sub_0(Vmoore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmoore___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root__trace_full_0\n"); );
    // Init
    Vmoore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmoore___024root*>(voidSelf);
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmoore___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmoore___024root__trace_full_0_sub_0(Vmoore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore___024root__trace_full_0_sub_0\n"); );
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.i_clk));
    bufp->fullCData(oldp+2,(vlSelfRef.o_led),8);
    bufp->fullCData(oldp+3,(vlSelfRef.moore__DOT__led_index),4);
}
