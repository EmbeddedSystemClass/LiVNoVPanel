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
File        : GUI_SelectLayer.c.C
Purpose     : Selection of Layer
---------------------------END-OF-HEADER------------------------------
*/

#include <stddef.h>           /* needed for definition of NULL */
#include "GUI_Private.h"

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       GUI_SelectLayer
*/
unsigned int GUI_SelectLayer(unsigned int Index) {
  unsigned int OldIndex;
  GUI_LOCK();
  OldIndex = GUI_Context.SelLayer;
  if (Index < GUI_NUM_LAYERS) {
    GUI_Context.SelLayer = Index;
    GUI_SelectLCD();
  }
  GUI_UNLOCK();
  return OldIndex;
}

/*************************** End of file ****************************/
