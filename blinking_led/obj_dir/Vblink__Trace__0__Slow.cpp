// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vblink__Syms.h"


VL_ATTR_COLD void Vblink___024root__trace_init_sub__TOP__0(Vblink___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root__trace_init_sub__TOP__0\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("blink", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"CLOCK_RATE_HZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"INCREMENT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"o_led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vblink___024root__trace_init_top(Vblink___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root__trace_init_top\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vblink___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vblink___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vblink___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vblink___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vblink___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vblink___024root__trace_register(Vblink___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root__trace_register\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vblink___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vblink___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vblink___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vblink___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vblink___024root__trace_const_0_sub_0(Vblink___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vblink___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root__trace_const_0\n"); );
    // Init
    Vblink___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vblink___024root*>(voidSelf);
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vblink___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vblink___024root__trace_const_0_sub_0(Vblink___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root__trace_const_0_sub_0\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+4,(0x493e0U),32);
    bufp->fullIData(oldp+5,(0x20U),32);
    bufp->fullIData(oldp+6,(0xffffe40aU),32);
}

VL_ATTR_COLD void Vblink___024root__trace_full_0_sub_0(Vblink___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vblink___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root__trace_full_0\n"); );
    // Init
    Vblink___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vblink___024root*>(voidSelf);
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vblink___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vblink___024root__trace_full_0_sub_0(Vblink___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root__trace_full_0_sub_0\n"); );
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.i_clk));
    bufp->fullBit(oldp+2,(vlSelfRef.o_led));
    bufp->fullIData(oldp+3,(vlSelfRef.blink__DOT__counter),32);
}
