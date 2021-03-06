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
File        : LCD_SelectLCD.c
Purpose     : Implementation of said routine
---------------------------END-OF-HEADER------------------------------
*/

#include <stddef.h>           /* needed for definition of NULL */

#include "GUI_Private.h"
#if GUI_WINSUPPORT
#include "WM.h"
#endif

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       _SelectLCD
*/
void LCD_SelectLCD(void) {
  #if GUI_SUPPORT_DEVICES
  #if GUI_NUM_LAYERS == 1
    GUI_Context.pDeviceAPI   = LCD_aAPI[0];
  #else
    GUI_Context.pDeviceAPI   = LCD_aAPI[GUI_Context.SelLayer];
  #endif
    GUI_Context.hDevData = 0;
  #endif
  GUI_Context.pClipRect_HL = &GUI_Context.ClipRect;
  LCD_SetClipRectMax();
}

/*************************** End of file ****************************/
