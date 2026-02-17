// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmealy.h for the primary calling header

#ifndef VERILATED_VMEALY___024ROOT_H_
#define VERILATED_VMEALY___024ROOT_H_  // guard

#include "verilated.h"


class Vmealy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmealy___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_OUT8(o_led,7,0);
    VL_IN8(i_display_enable,0,0);
    CData/*3:0*/ mealy__DOT__led_index;
    CData/*3:0*/ mealy__DOT__next_led_index;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmealy__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmealy___024root(Vmealy__Syms* symsp, const char* v__name);
    ~Vmealy___024root();
    VL_UNCOPYABLE(Vmealy___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
