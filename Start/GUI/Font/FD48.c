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
File        : FD48.C
Purpose     : Implementation of the proportional 48 pixel digit
Height      : 48
---------------------------END-OF-HEADER------------------------------
*/

#include "GUI_FontIntern.h"

GUI_CONST_STORAGE unsigned char acFontD48_Space[144] = { /* code 0020 */
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________};

GUI_CONST_STORAGE unsigned char acFontD48_Add[240] = {
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________};

GUI_CONST_STORAGE unsigned char acFontD48_Sub[240] = {
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________,
  ________,________,________,________,________};

GUI_CONST_STORAGE unsigned char acFontD48_DP[144] = { /* code 002E */
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  ________,________,________};

GUI_CONST_STORAGE unsigned char acFontD48[10][240] = {
{
  ________,_______X,XXXXXX__,________,________,
  ________,____XXXX,XXXXXXXX,X_______,________,
  ________,__XXXXXX,XXXXXXXX,XXX_____,________,
  ________,_XXXXXXX,XXXXXXXX,XXXX____,________,
  ________,XXXXXXXX,XXXXXXXX,XXXXX___,________,
  _______X,XXXXXXXX,XXXXXXXX,XXXXX___,________,
  _______X,XXXXXXXX,_____XXX,XXXXXX__,________,
  ______XX,XXXXXX__,_______X,XXXXXXX_,________,
  ______XX,XXXXX___,________,XXXXXXX_,________,
  _____XXX,XXXXX___,________,XXXXXXXX,________,
  _____XXX,XXXX____,________,_XXXXXXX,________,
  _____XXX,XXXX____,________,_XXXXXXX,________,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XX______,________,___XXXXX,X_______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ____XXXX,XX______,________,___XXXXX,X_______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  _____XXX,XXXX____,________,_XXXXXXX,________,
  _____XXX,XXXX____,________,_XXXXXXX,________,
  _____XXX,XXXXX___,________,XXXXXXXX,________,
  ______XX,XXXXX___,________,XXXXXXX_,________,
  ______XX,XXXXXX__,_______X,XXXXXXX_,________,
  _______X,XXXXXXXX,_____XXX,XXXXXX__,________,
  _______X,XXXXXXXX,XXXXXXXX,XXXXXX__,________,
  ________,XXXXXXXX,XXXXXXXX,XXXXX___,________,
  ________,_XXXXXXX,XXXXXXXX,XXXX____,________,
  ________,__XXXXXX,XXXXXXXX,XXX_____,________,
  ________,____XXXX,XXXXXXXX,X_______,________,
  ________,_______X,XXXXXX__,________,________},

{
  ________,________,_XXXXXX_,________,________,
  ________,________,_XXXXXX_,________,________,
  ________,________,XXXXXXX_,________,________,
  ________,________,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,______XX,XXXXXXX_,________,________,
  ________,_____XXX,XXXXXXX_,________,________,
  ________,___XXXXX,XXXXXXX_,________,________,
  ________,_XXXXXXX,XXXXXXX_,________,________,
  ____XXXX,XXXXXXXX,XXXXXXX_,________,________,
  ____XXXX,XXXXXXXX,XXXXXXX_,________,________,
  ____XXXX,XXXXXXXX,XXXXXXX_,________,________,
  ____XXXX,XXXXXXXX,XXXXXXX_,________,________,
  ____XXXX,XXXXXXXX,XXXXXXX_,________,________,
  ____XXXX,XXXXXXXX,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________,
  ________,_______X,XXXXXXX_,________,________},

{
  ________,________,XXXXXXXX,________,________,
  ________,____XXXX,XXXXXXXX,XXX_____,________,
  ________,___XXXXX,XXXXXXXX,XXXX____,________,
  ________,_XXXXXXX,XXXXXXXX,XXXXXX__,________,
  ________,XXXXXXXX,XXXXXXXX,XXXXXXX_,________,
  ________,XXXXXXXX,XXXXXXXX,XXXXXXX_,________,
  _______X,XXXXXXXX,______XX,XXXXXXXX,________,
  ______XX,XXXXXX__,________,XXXXXXXX,X_______,
  ______XX,XXXXX___,________,_XXXXXXX,X_______,
  _____XXX,XXXXX___,________,__XXXXXX,X_______,
  _____XXX,XXXX____,________,__XXXXXX,XX______,
  _____XXX,XXXX____,________,___XXXXX,XX______,
  _____XXX,XXXX____,________,___XXXXX,XX______,
  ____XXXX,XXX_____,________,___XXXXX,XX______,
  ____XXXX,XXX_____,________,___XXXXX,XX______,
  ____XXXX,XXX_____,________,___XXXXX,XX______,
  ____XXXX,XXX_____,________,___XXXXX,XX______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ________,________,________,__XXXXXX,X_______,
  ________,________,________,_XXXXXXX,X_______,
  ________,________,________,XXXXXXXX,________,
  ________,________,________,XXXXXXXX,________,
  ________,________,_______X,XXXXXXX_,________,
  ________,________,_____XXX,XXXXXXX_,________,
  ________,________,____XXXX,XXXXXX__,________,
  ________,________,__XXXXXX,XXXXX___,________,
  ________,________,_XXXXXXX,XXXX____,________,
  ________,________,XXXXXXXX,XXX_____,________,
  ________,______XX,XXXXXXXX,X_______,________,
  ________,_____XXX,XXXXXXXX,________,________,
  ________,___XXXXX,XXXXXXX_,________,________,
  ________,__XXXXXX,XXXXX___,________,________,
  ________,_XXXXXXX,XXXX____,________,________,
  ________,XXXXXXXX,XX______,________,________,
  ________,XXXXXXXX,X_______,________,________,
  _______X,XXXXXXX_,________,________,________,
  ______XX,XXXXXX__,________,________,________,
  ______XX,XXXXX___,________,________,________,
  _____XXX,XXXX____,________,________,________,
  _____XXX,XXXX____,________,________,________,
  ____XXXX,XXX_____,________,________,________,
  ____XXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ____XXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ____XXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______},

{
  ________,______XX,XXXXXX__,________,________,
  ________,___XXXXX,XXXXXXXX,X_______,________,
  ________,_XXXXXXX,XXXXXXXX,XXX_____,________,
  ________,XXXXXXXX,XXXXXXXX,XXXX____,________,
  _______X,XXXXXXXX,XXXXXXXX,XXXXX___,________,
  ______XX,XXXXXXXX,XXXXXXXX,XXXXXX__,________,
  ______XX,XXXXXXX_,_____XXX,XXXXXXX_,________,
  _____XXX,XXXXX___,_______X,XXXXXXX_,________,
  _____XXX,XXXX____,________,XXXXXXX_,________,
  ____XXXX,XXXX____,________,XXXXXXXX,________,
  ____XXXX,XXX_____,________,_XXXXXXX,________,
  ____XXXX,XXX_____,________,_XXXXXXX,________,
  ___XXXXX,XX______,________,_XXXXXXX,________,
  ___XXXXX,XX______,________,_XXXXXXX,________,
  ___XXXXX,XX______,________,_XXXXXXX,________,
  ________,________,________,XXXXXXX_,________,
  ________,________,________,XXXXXXX_,________,
  ________,________,_______X,XXXXXXX_,________,
  ________,________,______XX,XXXXXX__,________,
  ________,________,___XXXXX,XXXXX___,________,
  ________,_______X,XXXXXXXX,XXXXX___,________,
  ________,_______X,XXXXXXXX,XXX_____,________,
  ________,_______X,XXXXXXXX,XXXX____,________,
  ________,_______X,XXXXXXXX,XXXXX___,________,
  ________,_______X,XXXXXXXX,XXXXXX__,________,
  ________,_______X,XXXXXXXX,XXXXXXX_,________,
  ________,________,_____XXX,XXXXXXXX,________,
  ________,________,________,XXXXXXXX,________,
  ________,________,________,_XXXXXXX,X_______,
  ________,________,________,__XXXXXX,X_______,
  ________,________,________,__XXXXXX,X_______,
  ________,________,________,___XXXXX,XX______,
  __XXXXXX,X_______,________,___XXXXX,XX______,
  __XXXXXX,X_______,________,___XXXXX,XX______,
  __XXXXXX,X_______,________,___XXXXX,XX______,
  __XXXXXX,X_______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,__XXXXXX,XX______,
  ___XXXXX,XXX_____,________,_XXXXXXX,X_______,
  ___XXXXX,XXX_____,________,_XXXXXXX,X_______,
  ____XXXX,XXXX____,_______X,XXXXXXXX,________,
  ____XXXX,XXXXXXX_,______XX,XXXXXXXX,________,
  _____XXX,XXXXXXXX,XXXXXXXX,XXXXXXX_,________,
  ______XX,XXXXXXXX,XXXXXXXX,XXXXXX__,________,
  _______X,XXXXXXXX,XXXXXXXX,XXXXX___,________,
  ________,XXXXXXXX,XXXXXXXX,XXXX____,________,
  ________,__XXXXXX,XXXXXXXX,XX______,________,
  ________,______XX,XXXXXX__,________,________},

{
  ________,________,_____XXX,XXXX____,________,
  ________,________,____XXXX,XXXX____,________,
  ________,________,___XXXXX,XXXX____,________,
  ________,________,___XXXXX,XXXX____,________,
  ________,________,__XXXXXX,XXXX____,________,
  ________,________,_XXXXXXX,XXXX____,________,
  ________,________,_XXXXXXX,XXXX____,________,
  ________,________,XXXXXXXX,XXXX____,________,
  ________,_______X,XXXXXXXX,XXXX____,________,
  ________,_______X,XXXXXXXX,XXXX____,________,
  ________,______XX,XXXX_XXX,XXXX____,________,
  ________,_____XXX,XXX__XXX,XXXX____,________,
  ________,____XXXX,XXX__XXX,XXXX____,________,
  ________,____XXXX,XX___XXX,XXXX____,________,
  ________,___XXXXX,X____XXX,XXXX____,________,
  ________,__XXXXXX,X____XXX,XXXX____,________,
  ________,__XXXXXX,_____XXX,XXXX____,________,
  ________,_XXXXXX_,_____XXX,XXXX____,________,
  ________,XXXXXXX_,_____XXX,XXXX____,________,
  ________,XXXXXX__,_____XXX,XXXX____,________,
  _______X,XXXXX___,_____XXX,XXXX____,________,
  ______XX,XXXXX___,_____XXX,XXXX____,________,
  ______XX,XXXX____,_____XXX,XXXX____,________,
  _____XXX,XXX_____,_____XXX,XXXX____,________,
  ____XXXX,XXX_____,_____XXX,XXXX____,________,
  ___XXXXX,XX______,_____XXX,XXXX____,________,
  ___XXXXX,XX______,_____XXX,XXXX____,________,
  __XXXXXX,X_______,_____XXX,XXXX____,________,
  _XXXXXXX,________,_____XXX,XXXX____,________,
  _XXXXXXX,________,_____XXX,XXXX____,________,
  _XXXXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  _XXXXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  _XXXXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  _XXXXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  _XXXXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  _XXXXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ________,________,_____XXX,XXXX____,________,
  ________,________,_____XXX,XXXX____,________,
  ________,________,_____XXX,XXXX____,________,
  ________,________,_____XXX,XXXX____,________,
  ________,________,_____XXX,XXXX____,________,
  ________,________,_____XXX,XXXX____,________,
  ________,________,_____XXX,XXXX____,________,
  ________,________,_____XXX,XXXX____,________,
  ________,________,_____XXX,XXXX____,________,
  ________,________,_____XXX,XXXX____,________,
  ________,________,_____XXX,XXXX____,________,
  ________,________,_____XXX,XXXX____,________},

{
  ________,XXXXXXXX,XXXXXXXX,XXXXXXXX,________,
  ________,XXXXXXXX,XXXXXXXX,XXXXXXXX,________,
  ________,XXXXXXXX,XXXXXXXX,XXXXXXXX,________,
  ________,XXXXXXXX,XXXXXXXX,XXXXXXXX,________,
  ________,XXXXXXXX,XXXXXXXX,XXXXXXXX,________,
  _______X,XXXXXXXX,XXXXXXXX,XXXXXXXX,________,
  _______X,XXXXXXXX,XXXXXXXX,XXXXXXXX,________,
  _______X,XXXXXX__,________,________,________,
  _______X,XXXXXX__,________,________,________,
  _______X,XXXXX___,________,________,________,
  _______X,XXXXX___,________,________,________,
  ______XX,XXXXX___,________,________,________,
  ______XX,XXXXX___,________,________,________,
  ______XX,XXXXX___,________,________,________,
  ______XX,XXXX____,________,________,________,
  ______XX,XXXX____,________,________,________,
  ______XX,XXXX____,_XXXXXXX,________,________,
  _____XXX,XXXX__XX,XXXXXXXX,XXX_____,________,
  _____XXX,XXXX_XXX,XXXXXXXX,XXXX____,________,
  _____XXX,XXXXXXXX,XXXXXXXX,XXXXX___,________,
  _____XXX,XXXXXXXX,XXXXXXXX,XXXXXX__,________,
  _____XXX,XXXXXXXX,XXXXXXXX,XXXXXXX_,________,
  ____XXXX,XXXXXXX_,_____XXX,XXXXXXXX,________,
  ____XXXX,XXXXX___,_______X,XXXXXXXX,________,
  ____XXXX,XXXX____,________,_XXXXXXX,X_______,
  ____XXXX,XXX_____,________,_XXXXXXX,X_______,
  ________,________,________,__XXXXXX,X_______,
  ________,________,________,__XXXXXX,XX______,
  ________,________,________,___XXXXX,XX______,
  ________,________,________,___XXXXX,XX______,
  ________,________,________,___XXXXX,XX______,
  ________,________,________,___XXXXX,XX______,
  ________,________,________,___XXXXX,XX______,
  ________,________,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XXX_____,________,__XXXXXX,X_______,
  ___XXXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XXX_____,________,_XXXXXXX,X_______,
  ____XXXX,XXXX____,________,_XXXXXXX,________,
  _____XXX,XXXXX___,________,XXXXXXXX,________,
  _____XXX,XXXXXXX_,______XX,XXXXXXX_,________,
  ______XX,XXXXXXXX,XXXXXXXX,XXXXXX__,________,
  _______X,XXXXXXXX,XXXXXXXX,XXXXXX__,________,
  ________,XXXXXXXX,XXXXXXXX,XXXXX___,________,
  ________,_XXXXXXX,XXXXXXXX,XXX_____,________,
  ________,___XXXXX,XXXXXXXX,XX______,________,
  ________,______XX,XXXXXXX_,________,________},

{
  ________,________,XXXXXXX_,________,________,
  ________,_____XXX,XXXXXXXX,XX______,________,
  ________,___XXXXX,XXXXXXXX,XXXX____,________,
  ________,__XXXXXX,XXXXXXXX,XXXXX___,________,
  ________,XXXXXXXX,XXXXXXXX,XXXXXX__,________,
  _______X,XXXXXXXX,XXXXXXXX,XXXXXXX_,________,
  _______X,XXXXXXXX,______XX,XXXXXXX_,________,
  ______XX,XXXXXX__,________,XXXXXXXX,________,
  _____XXX,XXXXX___,________,_XXXXXXX,________,
  _____XXX,XXXX____,________,_XXXXXXX,________,
  ____XXXX,XXXX____,________,__XXXXXX,X_______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XXX_____,________,________,________,
  ___XXXXX,XXX_____,________,________,________,
  ___XXXXX,XX______,________,________,________,
  ___XXXXX,XX______,________,________,________,
  ___XXXXX,XX______,________,________,________,
  ___XXXXX,XX______,XXXXXXX_,________,________,
  __XXXXXX,XX____XX,XXXXXXXX,XX______,________,
  __XXXXXX,XX__XXXX,XXXXXXXX,XXXX____,________,
  __XXXXXX,X__XXXXX,XXXXXXXX,XXXXX___,________,
  __XXXXXX,X_XXXXXX,XXXXXXXX,XXXXXX__,________,
  __XXXXXX,XXXXXXXX,XXXXXXXX,XXXXXXX_,________,
  __XXXXXX,XXXXXXX_,______XX,XXXXXXXX,________,
  __XXXXXX,XXXXXX__,________,XXXXXXXX,________,
  __XXXXXX,XXXX____,________,_XXXXXXX,X_______,
  __XXXXXX,XXXX____,________,_XXXXXXX,X_______,
  __XXXXXX,XXX_____,________,__XXXXXX,X_______,
  __XXXXXX,XXX_____,________,__XXXXXX,XX______,
  __XXXXXX,XX______,________,___XXXXX,XX______,
  __XXXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,___XXXXX,XX______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XXXX____,________,_XXXXXXX,X_______,
  _____XXX,XXXXX___,________,_XXXXXXX,X_______,
  _____XXX,XXXXXX__,_______X,XXXXXXXX,________,
  ______XX,XXXXXXXX,______XX,XXXXXXXX,________,
  ______XX,XXXXXXXX,XXXXXXXX,XXXXXXX_,________,
  _______X,XXXXXXXX,XXXXXXXX,XXXXXX__,________,
  ________,XXXXXXXX,XXXXXXXX,XXXXX___,________,
  ________,__XXXXXX,XXXXXXXX,XXXX____,________,
  ________,____XXXX,XXXXXXXX,XX______,________,
  ________,______XX,XXXXXXX_,________,________},

{
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ___XXXXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ________,________,________,__XXXXXX,X_______,
  ________,________,________,_XXXXXXX,________,
  ________,________,________,XXXXXXX_,________,
  ________,________,________,XXXXXX__,________,
  ________,________,_______X,XXXXXX__,________,
  ________,________,______XX,XXXXX___,________,
  ________,________,_____XXX,XXXX____,________,
  ________,________,_____XXX,XXX_____,________,
  ________,________,____XXXX,XXX_____,________,
  ________,________,___XXXXX,XX______,________,
  ________,________,___XXXXX,XX______,________,
  ________,________,__XXXXXX,X_______,________,
  ________,________,__XXXXXX,________,________,
  ________,________,_XXXXXXX,________,________,
  ________,________,XXXXXXX_,________,________,
  ________,________,XXXXXXX_,________,________,
  ________,________,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,_______X,XXXXXX__,________,________,
  ________,______XX,XXXXX___,________,________,
  ________,______XX,XXXXX___,________,________,
  ________,_____XXX,XXXXX___,________,________,
  ________,_____XXX,XXXX____,________,________,
  ________,_____XXX,XXXX____,________,________,
  ________,____XXXX,XXXX____,________,________,
  ________,____XXXX,XXX_____,________,________,
  ________,____XXXX,XXX_____,________,________,
  ________,___XXXXX,XXX_____,________,________,
  ________,___XXXXX,XXX_____,________,________,
  ________,___XXXXX,XX______,________,________,
  ________,___XXXXX,XX______,________,________,
  ________,__XXXXXX,XX______,________,________,
  ________,__XXXXXX,XX______,________,________,
  ________,__XXXXXX,XX______,________,________,
  ________,__XXXXXX,XX______,________,________,
  ________,__XXXXXX,X_______,________,________,
  ________,_XXXXXXX,X_______,________,________,
  ________,_XXXXXXX,X_______,________,________,
  ________,_XXXXXXX,X_______,________,________,
  ________,_XXXXXXX,X_______,________,________,
  ________,_XXXXXXX,X_______,________,________},

{
  ________,______XX,XXXXXXX_,________,________,
  ________,___XXXXX,XXXXXXXX,XX______,________,
  ________,_XXXXXXX,XXXXXXXX,XXXX____,________,
  ________,XXXXXXXX,XXXXXXXX,XXXXX___,________,
  _______X,XXXXXXXX,XXXXXXXX,XXXXXX__,________,
  ______XX,XXXXXXXX,XXXXXXXX,XXXXXXX_,________,
  _____XXX,XXXXXXX_,______XX,XXXXXXXX,________,
  _____XXX,XXXXXX__,_______X,XXXXXXXX,________,
  _____XXX,XXXXX___,________,XXXXXXXX,________,
  ____XXXX,XXXX____,________,_XXXXXXX,X_______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  ____XXXX,XXX_____,________,__XXXXXX,X_______,
  _____XXX,XXXX____,________,_XXXXXXX,________,
  _____XXX,XXXXX___,________,XXXXXXXX,________,
  ______XX,XXXXXX__,_______X,XXXXXXX_,________,
  _______X,XXXXXXX_,______XX,XXXXXX__,________,
  ________,XXXXXXXX,XXXXXXXX,XXXXX___,________,
  ________,__XXXXXX,XXXXXXXX,XXX_____,________,
  ________,_XXXXXXX,XXXXXXXX,XXX_____,________,
  _______X,XXXXXXXX,XXXXXXXX,XXXXX___,________,
  ______XX,XXXXXXXX,XXXXXXXX,XXXXXX__,________,
  _____XXX,XXXXXXXX,XXXXXXXX,XXXXXXX_,________,
  ____XXXX,XXXXXX__,______XX,XXXXXXXX,________,
  ____XXXX,XXXX____,_______X,XXXXXXXX,X_______,
  ___XXXXX,XXX_____,________,_XXXXXXX,X_______,
  ___XXXXX,XX______,________,__XXXXXX,X_______,
  __XXXXXX,XX______,________,__XXXXXX,XX______,
  __XXXXXX,X_______,________,___XXXXX,XX______,
  __XXXXXX,X_______,________,___XXXXX,XX______,
  __XXXXXX,X_______,________,___XXXXX,XX______,
  __XXXXXX,X_______,________,___XXXXX,XX______,
  __XXXXXX,X_______,________,___XXXXX,XX______,
  __XXXXXX,X_______,________,___XXXXX,XX______,
  ___XXXXX,XX______,________,__XXXXXX,X_______,
  ___XXXXX,XXX_____,________,_XXXXXXX,X_______,
  ___XXXXX,XXX_____,________,_XXXXXXX,X_______,
  ____XXXX,XXXXX___,_______X,XXXXXXXX,________,
  ____XXXX,XXXXXXX_,______XX,XXXXXXXX,________,
  _____XXX,XXXXXXXX,XXXXXXXX,XXXXXXX_,________,
  ______XX,XXXXXXXX,XXXXXXXX,XXXXXX__,________,
  _______X,XXXXXXXX,XXXXXXXX,XXXXX___,________,
  ________,XXXXXXXX,XXXXXXXX,XXXX____,________,
  ________,__XXXXXX,XXXXXXXX,XX______,________,
  ________,______XX,XXXXXX__,________,________},

{
  ________,______XX,XXXXXX__,________,________,
  ________,__XXXXXX,XXXXXXXX,X_______,________,
  ________,XXXXXXXX,XXXXXXXX,XXX_____,________,
  _______X,XXXXXXXX,XXXXXXXX,XXXX____,________,
  ______XX,XXXXXXXX,XXXXXXXX,XXXXX___,________,
  _____XXX,XXXXXXXX,XXXXXXXX,XXXXXX__,________,
  ____XXXX,XXXXXX__,____XXXX,XXXXXX__,________,
  ____XXXX,XXXX____,______XX,XXXXXXX_,________,
  ___XXXXX,XXX_____,________,XXXXXXX_,________,
  ___XXXXX,XXX_____,________,XXXXXXXX,________,
  ___XXXXX,XX______,________,_XXXXXXX,________,
  __XXXXXX,XX______,________,_XXXXXXX,________,
  __XXXXXX,X_______,________,__XXXXXX,X_______,
  __XXXXXX,X_______,________,__XXXXXX,X_______,
  __XXXXXX,X_______,________,__XXXXXX,X_______,
  __XXXXXX,X_______,________,__XXXXXX,X_______,
  __XXXXXX,X_______,________,__XXXXXX,X_______,
  __XXXXXX,X_______,________,__XXXXXX,XX______,
  __XXXXXX,X_______,________,__XXXXXX,XX______,
  __XXXXXX,XX______,________,_XXXXXXX,XX______,
  ___XXXXX,XX______,________,_XXXXXXX,XX______,
  ___XXXXX,XXX_____,________,XXXXXXXX,XX______,
  ___XXXXX,XXX_____,________,XXXXXXXX,XX______,
  ____XXXX,XXXX____,______XX,XXXXXXXX,XX______,
  ____XXXX,XXXXXX__,____XXXX,XXXXXXXX,XX______,
  _____XXX,XXXXXXXX,XXXXXXXX,XXXXXXXX,XX______,
  ______XX,XXXXXXXX,XXXXXXXX,XX_XXXXX,XX______,
  _______X,XXXXXXXX,XXXXXXXX,X__XXXXX,XX______,
  ________,XXXXXXXX,XXXXXXXX,__XXXXXX,XX______,
  ________,__XXXXXX,XXXXXX__,__XXXXXX,XX______,
  ________,_____XXX,XXXX____,__XXXXXX,X_______,
  ________,________,________,__XXXXXX,X_______,
  ________,________,________,__XXXXXX,X_______,
  ________,________,________,__XXXXXX,X_______,
  ________,________,________,_XXXXXXX,X_______,
  ________,________,________,_XXXXXXX,________,
  ___XXXXX,XX______,________,_XXXXXXX,________,
  ___XXXXX,XX______,________,XXXXXXX_,________,
  ___XXXXX,XXX_____,________,XXXXXXX_,________,
  ____XXXX,XXX_____,_______X,XXXXXXX_,________,
  ____XXXX,XXXX____,______XX,XXXXXX__,________,
  _____XXX,XXXXXX__,____XXXX,XXXXX___,________,
  _____XXX,XXXXXXXX,XXXXXXXX,XXXXX___,________,
  ______XX,XXXXXXXX,XXXXXXXX,XXXX____,________,
  _______X,XXXXXXXX,XXXXXXXX,XX______,________,
  ________,XXXXXXXX,XXXXXXXX,X_______,________,
  ________,__XXXXXX,XXXXXXX_,________,________,
  ________,_____XXX,XXXX____,________,________},
};

GUI_CONST_STORAGE unsigned char acFontD48_Colon[144] = { /* code 003A */
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXX__,________,
  ________,________,________};

GUI_CONST_STORAGE GUI_CHARINFO GUI_FontD48_CharInfo[15] = {
   {  18,  18,  3, acFontD48_Space } /* code 0020 ' ' */
  ,{  37,  37,  5, acFontD48_Add   } /* code 002B '+' */
  ,{  37,  37,  5, acFontD48_Sub   } /* code 002D '-' */
  ,{  18,  18,  3, acFontD48_DP    } /* code 002E '.' */
  ,{  37,  37,  5, acFontD48[0]    } /* code 0030 '0' */
  ,{  37,  37,  5, acFontD48[1]    } /* code 0031 '1' */
  ,{  37,  37,  5, acFontD48[2]    } /* code 0032 '2' */
  ,{  37,  37,  5, acFontD48[3]    } /* code 0033 '3' */
  ,{  37,  37,  5, acFontD48[4]    } /* code 0034 '4' */
  ,{  37,  37,  5, acFontD48[5]    } /* code 0035 '5' */
  ,{  37,  37,  5, acFontD48[6]    } /* code 0036 '6' */
  ,{  37,  37,  5, acFontD48[7]    } /* code 0037 '7' */
  ,{  37,  37,  5, acFontD48[8]    } /* code 0038 '8' */
  ,{  37,  37,  5, acFontD48[9]    } /* code 0039 '9' */
  ,{  18,  18,  3, acFontD48_Colon } /* code 003A ':' */
};

GUI_CONST_STORAGE GUI_FONT_PROP GUI_FontD48_Prop4 = {
   0x0030                              /* first character */
  ,0x003A                              /* last character  */
  ,&GUI_FontD48_CharInfo[  4]          /* address of first character */
  ,(GUI_CONST_STORAGE GUI_FONT_PROP*)0 /* pointer to next GUI_FONT_PROP */
};

GUI_CONST_STORAGE GUI_FONT_PROP GUI_FontD48_Prop3 = {
   0x002D                              /* first character */
  ,0x002E                              /* last character  */
  ,&GUI_FontD48_CharInfo[  2]          /* address of first character */
  ,&GUI_FontD48_Prop4                  /* pointer to next GUI_FONT_PROP */
};

GUI_CONST_STORAGE GUI_FONT_PROP GUI_FontD48_Prop2 = {
   0x002B                              /* first character */
  ,0x002B                              /* last character  */
  ,&GUI_FontD48_CharInfo[  1]          /* address of first character */
  ,&GUI_FontD48_Prop3                  /* pointer to next GUI_FONT_PROP */
};

GUI_CONST_STORAGE GUI_FONT_PROP GUI_FontD48_Prop1 = {
   0x0020                              /* first character */
  ,0x0020                              /* last character  */
  ,&GUI_FontD48_CharInfo[  0]          /* address of first character */
  ,&GUI_FontD48_Prop2                  /* pointer to next GUI_FONT_PROP */
};

GUI_CONST_STORAGE GUI_FONT GUI_FontD48 = {
   GUI_FONTTYPE_PROP                   /* type of font    */
  ,48                                  /* height of font  */
  ,48                                  /* space of font y */
  ,1                                   /* magnification x */
  ,1                                   /* magnification y */
  ,{&GUI_FontD48_Prop1}
  ,48                                  /* Baseline */
  ,0                                   /* LHeight */
  ,48                                  /* CHeight */
};

