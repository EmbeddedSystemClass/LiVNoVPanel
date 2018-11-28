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
File        : SLIDER_Private.h
Purpose     : SLIDER private header file
--------------------END-OF-HEADER-------------------------------------
*/

#ifndef SLIDER_PRIVATE_H
#define SLIDER_PRIVATE_H

#include "WM.h"
#include "WIDGET.h"
#include "SLIDER.h"

#if GUI_WINSUPPORT

/*********************************************************************
*
*       Object definition
*
**********************************************************************
*/
typedef struct {
  GUI_COLOR BkColor;
  GUI_COLOR Color;
  GUI_COLOR FocusColor;
} SLIDER_PROPS;

typedef struct {
  WIDGET Widget;
  SLIDER_PROPS Props;
  int Min, Max, v;
  int Flags;
  int NumTicks;
  I16 Width;
  #if GUI_DEBUG_LEVEL >1
    int DebugId;
  #endif
} SLIDER_Obj;

/*********************************************************************
*
*       Macros for internal use
*
**********************************************************************
*/
#define SLIDER_H2P(h) (SLIDER_Obj*) GUI_ALLOC_h2p(h)

/*********************************************************************
*
*       Public data (internal defaults)
*
**********************************************************************
*/
extern SLIDER_PROPS SLIDER__DefaultProps;

#endif

#endif
