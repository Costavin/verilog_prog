// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vthruwire.h for the primary calling header

#ifndef VERILATED_VTHRUWIRE___024ROOT_H_
#define VERILATED_VTHRUWIRE___024ROOT_H_  // guard

#include "verilated.h"


class Vthruwire__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vthruwire___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_sw,0,0);
    VL_OUT8(o_led,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vthruwire__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vthruwire___024root(Vthruwire__Syms* symsp, const char* v__name);
    ~Vthruwire___024root();
    VL_UNCOPYABLE(Vthruwire___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
