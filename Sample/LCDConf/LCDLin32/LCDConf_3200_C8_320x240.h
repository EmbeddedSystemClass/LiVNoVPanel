/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2005  SEGGER Microcontroller Systeme GmbH        *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

** emWin V3.96 - Graphical user interface for embedded applications **
emWin is protected by international copyright laws.   Knowledge of the
source code may not be used to write a similar product.  This file may
only be used in accordance with a license and should not be re-
distributed in any way. We appreciate your understanding and fairness.
----------------------------------------------------------------------
File        : LCDConf_3200_C8_320x240.h
Purpose     : Sample configuration file for Quarter VGA
----------------------------------------------------------------------
*/

#ifndef LCDCONF_H
#define LCDCONF_H

#define LCD_CONTROLLER      3200

#define LCD_BITSPERPIXEL       8
#define LCD_XSIZE            320
#define LCD_YSIZE            240
#define LCD_VRAM_ADR     0x20000
#define LCD_ENDIAN_BIG         0

#endif /* LCDCONF_H */
