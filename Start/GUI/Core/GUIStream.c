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
File        : GUIStream.c
Purpose     : Support for streamed bitmaps
----------------------------------------------------------------------
*/

#include <stddef.h>           /* needed for definition of NULL */
#include "GUI.h"

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       GUI_DrawStreamedBitmap
*/
void GUI_DrawStreamedBitmap(const GUI_BITMAP_STREAM *pBitmapHeader, int x, int y) {
  GUI_BITMAP Bitmap = {0};
  GUI_LOGPALETTE Palette;
  Bitmap.BitsPerPixel = pBitmapHeader->BitsPerPixel;
  Bitmap.BytesPerLine = pBitmapHeader->BytesPerLine;
  Bitmap.pData        = ((const U8*)pBitmapHeader)+16+4*pBitmapHeader->NumColors;
  Bitmap.pPal         = &Palette;
  Bitmap.XSize        = pBitmapHeader->XSize;
  Bitmap.YSize        = pBitmapHeader->YSize;
  Palette.HasTrans    = pBitmapHeader->HasTrans;
  Palette.NumEntries  = pBitmapHeader->NumColors;
  Palette.pPalEntries = (const LCD_COLOR*)((const U8*)pBitmapHeader+16);
  GUI_DrawBitmap(&Bitmap, x, y);
}

/*************************** End of file ****************************/
