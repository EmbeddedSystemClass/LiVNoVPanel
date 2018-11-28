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
File        : HEADER_Private.h
Purpose     : Private HEADER include
--------------------END-OF-HEADER-------------------------------------
*/

#ifndef HEADER_PRIVATE_H
#define HEADER_PRIVATE_H


#include "WIDGET.h"
#include "HEADER.h"
#include "WM.h"
#include "GUI_ARRAY.h"

#if GUI_WINSUPPORT

/*********************************************************************
*
*       Macros for internal use
*
**********************************************************************
*/

#define HEADER_ID 0x4567   /* Magic numer, should be unique if possible */

#define HEADER_H2P(h) (HEADER_Obj*) WM_H2P(h)

#if GUI_DEBUG_LEVEL > 1
  #define HEADER_ASSERT_IS_VALID_PTR(p) DEBUG_ERROROUT_IF(p->DebugId != HEADER_ID, "xxx.c: Wrong handle type or Object not init'ed")
  #define HEADER_INIT_ID(p)   p->DebugId = HEADER_ID
  #define HEADER_DEINIT_ID(p) p->DebugId = HEADER_ID+1
#else
  #define HEADER_ASSERT_IS_VALID_PTR(p)
  #define HEADER_INIT_ID(p)
  #define HEADER_DEINIT_ID(p)
#endif

/*********************************************************************
*
*       Object definition
*
**********************************************************************
*/

typedef struct {
  int Width;
  I16 Align;
  WM_HMEM hDrawObj;
  char acText[1];
} HEADER_COLUMN;

typedef struct {
  WIDGET Widget;
  GUI_COLOR BkColor;
  GUI_COLOR TextColor;
  GUI_ARRAY Columns;
  int CapturePosX;
  int CaptureItem;
  int ScrollPos;
  const GUI_FONT GUI_UNI_PTR * pFont;
  #if (GUI_DEBUG_LEVEL > 1)
    int DebugId;
  #endif  
} HEADER_Obj;

void HEADER__SetDrawObj(HEADER_Handle hObj, unsigned Index, GUI_DRAW_HANDLE hDrawObj);


#endif /* GUI_WINSUPPORT */
#endif /* Avoid multiple inclusion */
