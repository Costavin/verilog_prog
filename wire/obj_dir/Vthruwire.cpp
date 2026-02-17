// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vthruwire__pch.h"

//============================================================
// Constructors

Vthruwire::Vthruwire(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vthruwire__Syms(contextp(), _vcname__, this)}
    , i_sw{vlSymsp->TOP.i_sw}
    , o_led{vlSymsp->TOP.o_led}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vthruwire::Vthruwire(const char* _vcname__)
    : Vthruwire(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vthruwire::~Vthruwire() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vthruwire___024root___eval_debug_assertions(Vthruwire___024root* vlSelf);
#endif  // VL_DEBUG
void Vthruwire___024root___eval_static(Vthruwire___024root* vlSelf);
void Vthruwire___024root___eval_initial(Vthruwire___024root* vlSelf);
void Vthruwire___024root___eval_settle(Vthruwire___024root* vlSelf);
void Vthruwire___024root___eval(Vthruwire___024root* vlSelf);

void Vthruwire::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vthruwire::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vthruwire___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vthruwire___024root___eval_static(&(vlSymsp->TOP));
        Vthruwire___024root___eval_initial(&(vlSymsp->TOP));
        Vthruwire___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vthruwire___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vthruwire::eventsPending() { return false; }

uint64_t Vthruwire::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vthruwire::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vthruwire___024root___eval_final(Vthruwire___024root* vlSelf);

VL_ATTR_COLD void Vthruwire::final() {
    Vthruwire___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vthruwire::hierName() const { return vlSymsp->name(); }
const char* Vthruwire::modelName() const { return "Vthruwire"; }
unsigned Vthruwire::threads() const { return 1; }
void Vthruwire::prepareClone() const { contextp()->prepareClone(); }
void Vthruwire::atClone() const {
    contextp()->threadPoolpOnClone();
}
