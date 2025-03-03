// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDebounce_Project__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VDebounce_Project::VDebounce_Project(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VDebounce_Project__Syms(contextp(), _vcname__, this)}
    , i_Clk{vlSymsp->TOP.i_Clk}
    , i_Switch_1{vlSymsp->TOP.i_Switch_1}
    , o_LED_1{vlSymsp->TOP.o_LED_1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VDebounce_Project::VDebounce_Project(const char* _vcname__)
    : VDebounce_Project(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VDebounce_Project::~VDebounce_Project() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VDebounce_Project___024root___eval_debug_assertions(VDebounce_Project___024root* vlSelf);
#endif  // VL_DEBUG
void VDebounce_Project___024root___eval_static(VDebounce_Project___024root* vlSelf);
void VDebounce_Project___024root___eval_initial(VDebounce_Project___024root* vlSelf);
void VDebounce_Project___024root___eval_settle(VDebounce_Project___024root* vlSelf);
void VDebounce_Project___024root___eval(VDebounce_Project___024root* vlSelf);

void VDebounce_Project::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDebounce_Project::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDebounce_Project___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VDebounce_Project___024root___eval_static(&(vlSymsp->TOP));
        VDebounce_Project___024root___eval_initial(&(vlSymsp->TOP));
        VDebounce_Project___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VDebounce_Project___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VDebounce_Project::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VDebounce_Project::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VDebounce_Project::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VDebounce_Project::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VDebounce_Project::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VDebounce_Project___024root___eval_final(VDebounce_Project___024root* vlSelf);

VL_ATTR_COLD void VDebounce_Project::final() {
    VDebounce_Project___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VDebounce_Project::hierName() const { return vlSymsp->name(); }
const char* VDebounce_Project::modelName() const { return "VDebounce_Project"; }
unsigned VDebounce_Project::threads() const { return 1; }
void VDebounce_Project::prepareClone() const { contextp()->prepareClone(); }
void VDebounce_Project::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VDebounce_Project::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VDebounce_Project___024root__trace_decl_types(VerilatedVcd* tracep);

void VDebounce_Project___024root__trace_init_top(VDebounce_Project___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDebounce_Project___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDebounce_Project___024root*>(voidSelf);
    VDebounce_Project__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VDebounce_Project___024root__trace_decl_types(tracep);
    VDebounce_Project___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VDebounce_Project___024root__trace_register(VDebounce_Project___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDebounce_Project::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VDebounce_Project::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VDebounce_Project___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
