// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRAM_2Port__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRAM_2Port::VRAM_2Port(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRAM_2Port__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VRAM_2Port::VRAM_2Port(const char* _vcname__)
    : VRAM_2Port(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRAM_2Port::~VRAM_2Port() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRAM_2Port___024root___eval_debug_assertions(VRAM_2Port___024root* vlSelf);
#endif  // VL_DEBUG
void VRAM_2Port___024root___eval_static(VRAM_2Port___024root* vlSelf);
void VRAM_2Port___024root___eval_initial(VRAM_2Port___024root* vlSelf);
void VRAM_2Port___024root___eval_settle(VRAM_2Port___024root* vlSelf);
void VRAM_2Port___024root___eval(VRAM_2Port___024root* vlSelf);

void VRAM_2Port::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRAM_2Port::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRAM_2Port___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRAM_2Port___024root___eval_static(&(vlSymsp->TOP));
        VRAM_2Port___024root___eval_initial(&(vlSymsp->TOP));
        VRAM_2Port___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRAM_2Port___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VRAM_2Port::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VRAM_2Port::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VRAM_2Port::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VRAM_2Port::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VRAM_2Port::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRAM_2Port___024root___eval_final(VRAM_2Port___024root* vlSelf);

VL_ATTR_COLD void VRAM_2Port::final() {
    VRAM_2Port___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRAM_2Port::hierName() const { return vlSymsp->name(); }
const char* VRAM_2Port::modelName() const { return "VRAM_2Port"; }
unsigned VRAM_2Port::threads() const { return 1; }
void VRAM_2Port::prepareClone() const { contextp()->prepareClone(); }
void VRAM_2Port::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VRAM_2Port::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRAM_2Port___024root__trace_decl_types(VerilatedVcd* tracep);

void VRAM_2Port___024root__trace_init_top(VRAM_2Port___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRAM_2Port___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRAM_2Port___024root*>(voidSelf);
    VRAM_2Port__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VRAM_2Port___024root__trace_decl_types(tracep);
    VRAM_2Port___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VRAM_2Port___024root__trace_register(VRAM_2Port___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRAM_2Port::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VRAM_2Port::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRAM_2Port___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
