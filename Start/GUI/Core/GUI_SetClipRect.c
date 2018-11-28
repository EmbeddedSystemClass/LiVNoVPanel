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
File        : GUI_SetClipRect.c
Purpose     : Implementation of GUI_SetClipRect
---------------------------END-OF-HEADER------------------------------
*/

#include "GUI.h"

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
*       GUI_SetClipRect
*
* Purpose:
*   Sets the rectangle used for clipping.
*
* Parameter:
*   pRect - Points to the rectangle to be used for clipping. If the WM
*           is used, the pointer needs to remain valid during the given
*           rectangle should be used for clipping.
*/
void GUI_SetClipRect(const GUI_RECT* pRect) {
  GUI_LOCK();
  #if GUI_WINSUPPORT
    WM_SetUserClipRect(pRect);
  #else
    {
      GUI_RECT Rect;
      if (!pRect) {
        Rect.x0 = -4096;
        Rect.y0 = -4096;
        Rect.x1 =  4096;
        Rect.y1 =  4096;
        pRect = &Rect;
      }
      LCD_SetClipRectEx(pRect);
    }
  #endif
  GUI_UNLOCK();
}

/*************************** End of file ****************************/
