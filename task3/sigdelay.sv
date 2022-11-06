module sinegen #(
    parameter  A_WIDTH = 9,
               D_WIDTH = 8
)(
    // interface signals
    input  logic                  clk,     //clock
    input  logic                  rst,     //reset
    input  logic                  en,      //enable
    input  logic          [A_WIDTH-1:0]         offset,
    input  logic  [D_WIDTH-1:0]   incr,    // increment for addr counter
    input logic                           wr,
    input logic                           rd,
    input logic  [D_WIDTH-1:0]         mic_signal,

    output logic  [D_WIDTH-1:0]   delayed_signal     // output data

    
);

logic  [A_WIDTH-1:0]      rd_addr;


counter addCounter (
    .clk(clk),
    .rst(rst),
    .en(en),
    .incr(incr),
    .count(rd_addr)
);

ram sineRam(
    .clk(clk),
    .din(mic_signal),
    .offset(offset),
    .wr_addr(rd_addr),
    .rd_addr(rd_addr),
    .wr_en(wr),
    .rd_en(rd),
    .dout(delayed_signal)
);

endmodule
