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
File        : LCDP888.C
Purpose     : Color conversion routines for 888 mode
---------------------------END-OF-HEADER------------------------------
*/

#include "LCD_Protected.h"    /* inter modul definitions */

/*********************************************************************
*
*       Public code,
*
*       LCD_FIXEDPALETTE == 888, 4294967296 colors, BBBBBBBBGGGGGGGGRRRRRRRR
*
**********************************************************************
*/
/*********************************************************************
*
*       LCD_Color2Index_888
*/
unsigned LCD_Color2Index_888(LCD_COLOR Color) {
  return Color;
}

/*********************************************************************
*
*       LCD_GetIndexMask_888
*/
unsigned LCD_GetIndexMask_888(void) {
  return (unsigned)0xffffff;
}

/*************************** End of file ****************************/
