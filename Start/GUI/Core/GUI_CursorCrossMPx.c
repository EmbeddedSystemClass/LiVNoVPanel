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
File        : GUI_CursorCrossMPx.C
Purpose     : Defines the pixel offset of the cross cursor, large
---------------------------END-OF-HEADER------------------------------
*/

#include <stdlib.h>
#include "GUI_Protected.h"

GUI_CONST_STORAGE unsigned char GUI_Pixels_CrossM[126] = {
  0x00, 0x00, 0x15, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x55, 0x55, 0x59, 0x55, 0x55, 0x40,
  0x6A, 0xAA, 0xA6, 0xAA, 0xAA, 0x40,
  0x55, 0x55, 0x59, 0x55, 0x55, 0x40,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x00, 0x00, 0x00
};

/*************************** End of file ****************************/
