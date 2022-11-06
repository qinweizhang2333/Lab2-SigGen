// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsigdelay__Syms.h"


VL_ATTR_COLD void Vsigdelay___024root__trace_init_sub__TOP__0(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"offset", false,-1, 8,0);
    tracep->declBus(c+5,"incr", false,-1, 7,0);
    tracep->declBit(c+6,"wr", false,-1);
    tracep->declBit(c+7,"rd", false,-1);
    tracep->declBus(c+8,"mic_signal", false,-1, 7,0);
    tracep->declBus(c+9,"delayed_signal", false,-1, 7,0);
    tracep->pushNamePrefix("sinegen ");
    tracep->declBus(c+13,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+14,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"offset", false,-1, 8,0);
    tracep->declBus(c+5,"incr", false,-1, 7,0);
    tracep->declBit(c+6,"wr", false,-1);
    tracep->declBit(c+7,"rd", false,-1);
    tracep->declBus(c+8,"mic_signal", false,-1, 7,0);
    tracep->declBus(c+9,"delayed_signal", false,-1, 7,0);
    tracep->declBus(c+10,"rd_addr", false,-1, 8,0);
    tracep->pushNamePrefix("addCounter ");
    tracep->declBus(c+13,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+11,"incr", false,-1, 8,0);
    tracep->declBus(c+10,"count", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sineRam ");
    tracep->declBus(c+13,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+14,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+6,"wr_en", false,-1);
    tracep->declBit(c+7,"rd_en", false,-1);
    tracep->declBus(c+10,"wr_addr", false,-1, 8,0);
    tracep->declBus(c+10,"rd_addr", false,-1, 8,0);
    tracep->declBus(c+8,"din", false,-1, 7,0);
    tracep->declBus(c+12,"offset", false,-1, 7,0);
    tracep->declBus(c+9,"dout", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_init_top(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_top\n"); );
    // Body
    Vsigdelay___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsigdelay___024root__trace_register(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsigdelay___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsigdelay___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsigdelay___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_top_0\n"); );
    // Init
    Vsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsigdelay___024root*>(voidSelf);
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsigdelay___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->en));
    bufp->fullSData(oldp+4,(vlSelf->offset),9);
    bufp->fullCData(oldp+5,(vlSelf->incr),8);
    bufp->fullBit(oldp+6,(vlSelf->wr));
    bufp->fullBit(oldp+7,(vlSelf->rd));
    bufp->fullCData(oldp+8,(vlSelf->mic_signal),8);
    bufp->fullCData(oldp+9,(vlSelf->delayed_signal),8);
    bufp->fullSData(oldp+10,(vlSelf->sinegen__DOT__rd_addr),9);
    bufp->fullSData(oldp+11,(vlSelf->incr),9);
    bufp->fullCData(oldp+12,((0xffU & (IData)(vlSelf->offset))),8);
    bufp->fullIData(oldp+13,(9U),32);
    bufp->fullIData(oldp+14,(8U),32);
}
