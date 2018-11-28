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
File        : LISTVIEW_Private.h
Purpose     : Private LISTVIEW include
--------------------END-OF-HEADER-------------------------------------
*/

#ifndef LISTVIEW_PRIVATE_H
#define LISTVIEW_PRIVATE_H

#include "WM.h"
#include "LISTVIEW.h"
#include "GUI_ARRAY.h"

#if GUI_WINSUPPORT

/*********************************************************************
*
*       Macros for internal use
*
**********************************************************************
*/

#define LISTVIEW_ID 0x4567   /* Magic numer, should be unique if possible */

#define LISTVIEW_H2P(h) (LISTVIEW_Obj*) WM_H2P(h)

#if GUI_DEBUG_LEVEL > 1
  #define LISTVIEW_ASSERT_IS_VALID_PTR(p) DEBUG_ERROROUT_IF(p->DebugId != LISTVIEW_ID, "xxx.c: Wrong handle type or Object not init'ed")
  #define LISTVIEW_INIT_ID(p)   p->DebugId = LISTVIEW_ID
  #define LISTVIEW_DEINIT_ID(p) p->DebugId = LISTVIEW_ID+1
#else
  #define LISTVIEW_ASSERT_IS_VALID_PTR(p)
  #define LISTVIEW_INIT_ID(p)
  #define LISTVIEW_DEINIT_ID(p)
#endif

/*********************************************************************
*
*       Object definition
*
**********************************************************************
*/

typedef struct {
  GUI_COLOR                    aBkColor[4];
  GUI_COLOR                    aTextColor[4];
  GUI_COLOR                    GridColor;
  const GUI_FONT GUI_UNI_PTR * pFont;
} LISTVIEW_PROPS;

typedef struct {
  GUI_COLOR aBkColor[4];
  GUI_COLOR aTextColor[4];
} LISTVIEW_CELL_INFO;

typedef struct {
  WM_HMEM hCellInfo;                /* Optional cell info. If 0, there is no cell info. (Defaults used) */
  char acText[1];
} LISTVIEW_CELL;

typedef struct {
  GUI_ARRAY CellArray;
  char Disabled;
} LISTVIEW_ROW;

typedef struct {
  U8 Align;
} LISTVIEW_COLUMN;

typedef struct {
  WIDGET          Widget;
  HEADER_Handle   hHeader;
  GUI_ARRAY       RowArray;         /* Every entry is a handle of LISTVIEW_ROW structure. */
  GUI_ARRAY       ColumnArray;      /* Every entry is a handle of LISTVIEW_COLUMN structure. */
  LISTVIEW_PROPS  Props;
  int             Sel;
  int             ShowGrid;
  unsigned        RowDistY;
  unsigned        LBorder;
  unsigned        RBorder;
  WM_SCROLL_STATE ScrollStateV;
  WM_SCROLL_STATE ScrollStateH;
  WM_HWIN         hOwner;
  #if GUI_DEBUG_LEVEL > 1
    int DebugId;
  #endif  
} LISTVIEW_Obj;

/*********************************************************************
*
*       Private (module internal) data
*
**********************************************************************
*/

extern LISTVIEW_PROPS LISTVIEW_DefaultProps;

/*********************************************************************
*
*       Private (module internal) functions
*
**********************************************************************
*/
int       LISTVIEW__UpdateScrollParas   (LISTVIEW_Handle hObj, LISTVIEW_Obj* pObj);
void      LISTVIEW__InvalidateInsideArea(LISTVIEW_Handle hObj, LISTVIEW_Obj* pObj);
unsigned  LISTVIEW__GetRowDistY         (const LISTVIEW_Obj* pObj);
void      LISTVIEW__InvalidateRow       (LISTVIEW_Handle hObj, LISTVIEW_Obj* pObj, int Sel);
int       LISTVIEW__UpdateScrollPos     (LISTVIEW_Handle hObj, LISTVIEW_Obj* pObj);
unsigned  LISTVIEW__GetNumRows          (LISTVIEW_Obj* pObj);
unsigned  LISTVIEW__GetNumColumns       (LISTVIEW_Obj* pObj);
int       LISTVIEW__GetSel              (LISTVIEW_Obj* pObj);
void      LISTVIEW__SetSel              (LISTVIEW_Handle hObj, LISTVIEW_Obj* pObj, int NewSel);
void      LISTVIEW__MoveSel             (LISTVIEW_Handle hObj, LISTVIEW_Obj* pObj, int Dir);

#endif /* GUI_WINSUPPORT */

#else                            /* Avoid problems with empty object modules */
  void LISTVIEW_C(void) {}
#endif

/*************************** End of file ****************************/
