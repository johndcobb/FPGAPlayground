// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAnd_Gate_TB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAnd_Gate_TB::VAnd_Gate_TB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VAnd_Gate_TB__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VAnd_Gate_TB::VAnd_Gate_TB(const char* _vcname__)
    : VAnd_Gate_TB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VAnd_Gate_TB::~VAnd_Gate_TB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VAnd_Gate_TB___024root___eval_debug_assertions(VAnd_Gate_TB___024root* vlSelf);
#endif  // VL_DEBUG
void VAnd_Gate_TB___024root___eval_static(VAnd_Gate_TB___024root* vlSelf);
void VAnd_Gate_TB___024root___eval_initial(VAnd_Gate_TB___024root* vlSelf);
void VAnd_Gate_TB___024root___eval_settle(VAnd_Gate_TB___024root* vlSelf);
void VAnd_Gate_TB___024root___eval(VAnd_Gate_TB___024root* vlSelf);

void VAnd_Gate_TB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAnd_Gate_TB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAnd_Gate_TB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VAnd_Gate_TB___024root___eval_static(&(vlSymsp->TOP));
        VAnd_Gate_TB___024root___eval_initial(&(vlSymsp->TOP));
        VAnd_Gate_TB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VAnd_Gate_TB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VAnd_Gate_TB::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VAnd_Gate_TB::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VAnd_Gate_TB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VAnd_Gate_TB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VAnd_Gate_TB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VAnd_Gate_TB___024root___eval_final(VAnd_Gate_TB___024root* vlSelf);

VL_ATTR_COLD void VAnd_Gate_TB::final() {
    VAnd_Gate_TB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VAnd_Gate_TB::hierName() const { return vlSymsp->name(); }
const char* VAnd_Gate_TB::modelName() const { return "VAnd_Gate_TB"; }
unsigned VAnd_Gate_TB::threads() const { return 1; }
void VAnd_Gate_TB::prepareClone() const { contextp()->prepareClone(); }
void VAnd_Gate_TB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VAnd_Gate_TB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VAnd_Gate_TB___024root__trace_decl_types(VerilatedVcd* tracep);

void VAnd_Gate_TB___024root__trace_init_top(VAnd_Gate_TB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAnd_Gate_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAnd_Gate_TB___024root*>(voidSelf);
    VAnd_Gate_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VAnd_Gate_TB___024root__trace_decl_types(tracep);
    VAnd_Gate_TB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VAnd_Gate_TB___024root__trace_register(VAnd_Gate_TB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAnd_Gate_TB::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VAnd_Gate_TB::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VAnd_Gate_TB___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
