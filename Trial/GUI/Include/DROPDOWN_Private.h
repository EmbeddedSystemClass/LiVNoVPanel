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
File        : DROPDOWN_Private.h
Purpose     : DROPDOWN private header file
--------------------END-OF-HEADER-------------------------------------
*/

#ifndef DROPDOWN_PRIVATE_H
#define DROPDOWN_PRIVATE_H

#include "DROPDOWN.h"
#include "WIDGET.h"
#include "GUI_ARRAY.h"

#if GUI_WINSUPPORT

/*********************************************************************
*
*       Macros for internal use
*
**********************************************************************
*/

#if GUI_DEBUG_LEVEL >1
  #define OBJECT_ID 0x4444   /* Magic numer, should be unique if possible */
  #define ASSERT_IS_VALID_PTR(p) GUI_DEBUG_ERROROUT_IF(p->DebugId != OBJECT_ID, "DROPDOWN.C: Wrong handle type or Object not init'ed")
  #define INIT_ID(p)   p->DebugId = OBJECT_ID
  #define DEINIT_ID(p) p->DebugId = 0
#else
  #define ASSERT_IS_VALID_PTR(p)
  #define INIT_ID(p)
  #define DEINIT_ID(p)
#endif

/************************************************************
*
*       Create / Status flags
*/
#define DROPDOWN_SF_AUTOSCROLLBAR DROPDOWN_CF_AUTOSCROLLBAR

#define DROPDOWN_H2P(h) (DROPDOWN_Obj*) GUI_ALLOC_h2p(h)

typedef struct {
  const GUI_FONT GUI_UNI_PTR * pFont;
  GUI_COLOR aBackColor[3];
  GUI_COLOR aTextColor[3];
  GUI_COLOR aColor[2];
  GUI_COLOR aScrollbarColor[3];
  I16       TextBorderSize;
  I16       Align;
} DROPDOWN_PROPS;

typedef struct {
  WIDGET  Widget;
  I16     Sel;                        /* current selection */
  I16     ySizeEx;                    /* Drop down size */
  I16     TextHeight;
  GUI_ARRAY Handles;
  WM_SCROLL_STATE ScrollState;
  DROPDOWN_PROPS Props;
  WM_HWIN hListWin;
  U8      Flags;
  U16     ItemSpacing;
  U8      ScrollbarWidth;
  char  IsPressed;
  #if GUI_DEBUG_LEVEL >1
    int DebugId;
  #endif  
} DROPDOWN_Obj;

/*********************************************************************
*
*       Private (module internal) data
*
**********************************************************************
*/

extern DROPDOWN_PROPS DROPDOWN__DefaultProps;

/*********************************************************************
*
*       Private functions
*
**********************************************************************
*/

void DROPDOWN__AdjustHeight(DROPDOWN_Handle hObj, DROPDOWN_Obj* pObj);
int  DROPDOWN__GetNumItems (DROPDOWN_Obj* pObj);

#endif /* GUI_WINSUPPORT */
#endif /* DROPDOWN_PRIVATE_H */
