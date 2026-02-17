// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmealy__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmealy::Vmealy(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmealy__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , o_led{vlSymsp->TOP.o_led}
    , i_display_enable{vlSymsp->TOP.i_display_enable}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmealy::Vmealy(const char* _vcname__)
    : Vmealy(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmealy::~Vmealy() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmealy___024root___eval_debug_assertions(Vmealy___024root* vlSelf);
#endif  // VL_DEBUG
void Vmealy___024root___eval_static(Vmealy___024root* vlSelf);
void Vmealy___024root___eval_initial(Vmealy___024root* vlSelf);
void Vmealy___024root___eval_settle(Vmealy___024root* vlSelf);
void Vmealy___024root___eval(Vmealy___024root* vlSelf);

void Vmealy::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmealy::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmealy___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmealy___024root___eval_static(&(vlSymsp->TOP));
        Vmealy___024root___eval_initial(&(vlSymsp->TOP));
        Vmealy___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmealy___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmealy::eventsPending() { return false; }

uint64_t Vmealy::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmealy::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmealy___024root___eval_final(Vmealy___024root* vlSelf);

VL_ATTR_COLD void Vmealy::final() {
    Vmealy___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmealy::hierName() const { return vlSymsp->name(); }
const char* Vmealy::modelName() const { return "Vmealy"; }
unsigned Vmealy::threads() const { return 1; }
void Vmealy::prepareClone() const { contextp()->prepareClone(); }
void Vmealy::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmealy::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmealy___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmealy___024root__trace_init_top(Vmealy___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmealy___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmealy___024root*>(voidSelf);
    Vmealy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmealy___024root__trace_decl_types(tracep);
    Vmealy___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmealy___024root__trace_register(Vmealy___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmealy::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmealy::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmealy___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
