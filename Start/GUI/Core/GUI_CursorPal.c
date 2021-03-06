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
File        : GUI_CursorPal.C
Purpose     : Defines the colors for most cursors
---------------------------END-OF-HEADER------------------------------
*/

#include <stdlib.h>
#include "GUI_Protected.h"

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

static GUI_CONST_STORAGE GUI_COLOR _aColor[] = {
  0x0000FF, 0x000000, 0xFFFFFF
};

GUI_CONST_STORAGE GUI_LOGPALETTE GUI_CursorPal = {
  3,	/* number of entries */
  1, 	/* Has transparency */
  &_aColor[0]
};

/*************************** End of file ****************************/
