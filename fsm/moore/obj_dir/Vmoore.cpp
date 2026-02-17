// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmoore__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmoore::Vmoore(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmoore__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , o_led{vlSymsp->TOP.o_led}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmoore::Vmoore(const char* _vcname__)
    : Vmoore(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmoore::~Vmoore() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmoore___024root___eval_debug_assertions(Vmoore___024root* vlSelf);
#endif  // VL_DEBUG
void Vmoore___024root___eval_static(Vmoore___024root* vlSelf);
void Vmoore___024root___eval_initial(Vmoore___024root* vlSelf);
void Vmoore___024root___eval_settle(Vmoore___024root* vlSelf);
void Vmoore___024root___eval(Vmoore___024root* vlSelf);

void Vmoore::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmoore::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmoore___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmoore___024root___eval_static(&(vlSymsp->TOP));
        Vmoore___024root___eval_initial(&(vlSymsp->TOP));
        Vmoore___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmoore___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmoore::eventsPending() { return false; }

uint64_t Vmoore::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmoore::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmoore___024root___eval_final(Vmoore___024root* vlSelf);

VL_ATTR_COLD void Vmoore::final() {
    Vmoore___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmoore::hierName() const { return vlSymsp->name(); }
const char* Vmoore::modelName() const { return "Vmoore"; }
unsigned Vmoore::threads() const { return 1; }
void Vmoore::prepareClone() const { contextp()->prepareClone(); }
void Vmoore::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmoore::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmoore___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmoore___024root__trace_init_top(Vmoore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmoore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmoore___024root*>(voidSelf);
    Vmoore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmoore___024root__trace_decl_types(tracep);
    Vmoore___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmoore___024root__trace_register(Vmoore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmoore::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmoore::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmoore___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
