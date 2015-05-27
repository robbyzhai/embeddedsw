// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.1
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
//
// ==============================================================

// CTRL
// 0x0000 : Control signals
//          bit 0  - ap_start (Read/Write/COH)
//          bit 1  - ap_done (Read/COR)
//          bit 2  - ap_idle (Read)
//          bit 3  - ap_ready (Read)
//          bit 7  - auto_restart (Read/Write)
//          others - reserved
// 0x0004 : Global Interrupt Enable Register
//          bit 0  - Global Interrupt Enable (Read/Write)
//          others - reserved
// 0x0008 : IP Interrupt Enable Register (Read/Write)
//          bit 0  - Channel 0 (ap_done)
//          bit 1  - Channel 1 (ap_ready)
//          others - reserved
// 0x000c : IP Interrupt Status Register (Read/TOW)
//          bit 0  - Channel 0 (ap_done)
//          bit 1  - Channel 1 (ap_ready)
//          others - reserved
// 0x0010 : Data signal of HwReg_Height
//          bit 15~0 - HwReg_Height[15:0] (Read/Write)
//          others   - reserved
// 0x0014 : reserved
// 0x0018 : Data signal of HwReg_WidthIn
//          bit 15~0 - HwReg_WidthIn[15:0] (Read/Write)
//          others   - reserved
// 0x001c : reserved
// 0x0020 : Data signal of HwReg_WidthOut
//          bit 15~0 - HwReg_WidthOut[15:0] (Read/Write)
//          others   - reserved
// 0x0024 : reserved
// 0x0028 : Data signal of HwReg_ColorMode
//          bit 7~0 - HwReg_ColorMode[7:0] (Read/Write)
//          others  - reserved
// 0x002c : reserved
// 0x0030 : Data signal of HwReg_PixelRate
//          bit 31~0 - HwReg_PixelRate[31:0] (Read/Write)
// 0x0034 : reserved
// 0x0400 ~
// 0x07ff : Memory 'HwReg_hfltCoeff' (384 * 16b)
//          Word n : bit [15: 0] - HwReg_hfltCoeff[2n]
//                   bit [31:16] - HwReg_hfltCoeff[2n+1]
// 0x2000 ~
// 0x3fff : Memory 'HwReg_phasesH_V' (1920 * 18b)
//          Word n : bit [17:0] - HwReg_phasesH_V[n]
//                   others     - reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XV_HSCALER_CTRL_ADDR_AP_CTRL              0x0000
#define XV_HSCALER_CTRL_ADDR_GIE                  0x0004
#define XV_HSCALER_CTRL_ADDR_IER                  0x0008
#define XV_HSCALER_CTRL_ADDR_ISR                  0x000c
#define XV_HSCALER_CTRL_ADDR_HWREG_HEIGHT_DATA    0x0010
#define XV_HSCALER_CTRL_BITS_HWREG_HEIGHT_DATA    16
#define XV_HSCALER_CTRL_ADDR_HWREG_WIDTHIN_DATA   0x0018
#define XV_HSCALER_CTRL_BITS_HWREG_WIDTHIN_DATA   16
#define XV_HSCALER_CTRL_ADDR_HWREG_WIDTHOUT_DATA  0x0020
#define XV_HSCALER_CTRL_BITS_HWREG_WIDTHOUT_DATA  16
#define XV_HSCALER_CTRL_ADDR_HWREG_COLORMODE_DATA 0x0028
#define XV_HSCALER_CTRL_BITS_HWREG_COLORMODE_DATA 8
#define XV_HSCALER_CTRL_ADDR_HWREG_PIXELRATE_DATA 0x0030
#define XV_HSCALER_CTRL_BITS_HWREG_PIXELRATE_DATA 32
#define XV_HSCALER_CTRL_ADDR_HWREG_HFLTCOEFF_BASE 0x0400
#define XV_HSCALER_CTRL_ADDR_HWREG_HFLTCOEFF_HIGH 0x07ff
#define XV_HSCALER_CTRL_WIDTH_HWREG_HFLTCOEFF     16
#define XV_HSCALER_CTRL_DEPTH_HWREG_HFLTCOEFF     384
#define XV_HSCALER_CTRL_ADDR_HWREG_PHASESH_V_BASE 0x2000
#define XV_HSCALER_CTRL_ADDR_HWREG_PHASESH_V_HIGH 0x3fff
#define XV_HSCALER_CTRL_WIDTH_HWREG_PHASESH_V     18
#define XV_HSCALER_CTRL_DEPTH_HWREG_PHASESH_V     1920
