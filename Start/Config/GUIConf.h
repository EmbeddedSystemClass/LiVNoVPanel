/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 2002         SEGGER Microcontroller Systeme GmbH        *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

**** emWin/GSC Grafical user interface for embedded applications ****
emWin is protected by international copyright laws. Knowledge of the
source code may not be used to write a similar product. This file may
only be used in accordance with a license and should not be re-
distributed in any way. We appreciate your understanding and fairness.
----------------------------------------------------------------------
File        : GUIConf.h
Purpose     : Configures emWins abilities, fonts etc.
----------------------------------------------------------------------
*/


#ifndef GUICONF_H
#define GUICONF_H

#define GUI_OS                    (0)  /* Compile with multitasking support */
#define GUI_SUPPORT_TOUCH         (0)  /* Support a touch screen (req. win-manager) */

#define GUI_DEFAULT_FONT          &GUI_Font6x8

/*********************************************************************
*
*         Configuration of available packages
*/
#define GUI_WINSUPPORT                0    /* Window manager not available */
#define GUI_SUPPORT_ROTATION          0    /* Disable support for text rotation */
#define GUI_SUPPORT_MEMDEV            0    /* Memory device package not available */
#define GUI_SUPPORT_AA                0    /* Antialiasing package not available */
#define GUI_ALLOC_SIZE             1000    /* Size of dynamic memory ... For cursor */
#endif  /* Avoid multiple inclusion */
