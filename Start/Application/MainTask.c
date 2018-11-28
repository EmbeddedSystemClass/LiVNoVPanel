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
File        : MainTask.C
Purpose     : Main program, called from after main after initialisation
---------------------------END-OF-HEADER------------------------------
*/


#include "GUI.h"

extern const GUI_BITMAP bmSeggerLogoBlue;
extern const GUI_BITMAP bmSeggerLogo_1bpp;

/*
  *******************************************************************
  *
  *              main()
  *
  *******************************************************************
*/
void MainTask(void) {
  int i,YPos;
  int LCDXSize = LCD_GET_XSIZE();

  const GUI_BITMAP *pBitmap;
  GUI_Init();
  GUI_SetBkColor(GUI_BLUE); GUI_Clear();
  GUI_Delay(1000);
  GUI_SetColor(GUI_WHITE);

  while(1)
  {
	  GUI_Clear();
	  GUI_Delay(1000);
	  GUI_SetFont(&GUI_Font16B_ASCII);
	  GUI_DispStringHCenterAt("Sohal",LCDXSize/2, 30);
	  GUI_Delay(1000);
  }
}
