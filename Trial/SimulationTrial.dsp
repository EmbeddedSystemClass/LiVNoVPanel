# Microsoft Developer Studio Project File - Name="SimulationTrial" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=SimulationTrial - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "SimulationTrial.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "SimulationTrial.mak" CFG="SimulationTrial - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "SimulationTrial - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "SimulationTrial - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "SimulationTrial - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /G5 /MT /W3 /GX /O1 /I "GUI\Include" /I "Config" /D "NDEBUG" /D "TARGET_1375_C8_137X" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /FD /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x407 /d "NDEBUG"
# ADD RSC /l 0x407 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib winmm.lib libc.lib /nologo /subsystem:windows /pdb:none /map /machine:I386 /nodefaultlib /out:"Exe/GUISimulation.exe"
# SUBTRACT LINK32 /debug

!ELSEIF  "$(CFG)" == "SimulationTrial - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /G5 /MTd /W3 /Gm /GX /ZI /Od /I "GUI\Include" /I "Config" /D "_DEBUG" /D "TARGET_1375_C8_137X" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x407 /d "_DEBUG"
# ADD RSC /l 0x409
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib winmm.lib libc.lib /nologo /subsystem:windows /debug /machine:I386 /nodefaultlib /out:"Exe/GUISimulationDebug.exe" /pdbtype:sept

!ENDIF 

# Begin Target

# Name "SimulationTrial - Win32 Release"
# Name "SimulationTrial - Win32 Debug"
# Begin Group "Application"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\Application\GUIDEMO.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO.H
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_Automotive.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_Bitmap.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_Bitmap4bpp.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_Circle.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_ColorBar.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_ColorList.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_Cursor.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_Dialog.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_Font.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_FrameWin.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_Graph.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_HardwareInfo.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_Intro.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_LUT.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_MemDevB.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_Messagebox.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_Navi.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_Polygon.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_ProgBar.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_Speed.c
# End Source File
# Begin Source File

SOURCE=.\Application\GUIDEMO_Touch.c
# End Source File
# Begin Source File

SOURCE=.\Application\MainTask.c
# End Source File
# Begin Source File

SOURCE=.\Application\Map.h
# End Source File
# Begin Source File

SOURCE=.\Application\SeggerLogoBlue.c
# End Source File
# End Group
# Begin Group "GUI"

# PROP Default_Filter ""
# Begin Group "Include"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\GUI\Include\button.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\BUTTON_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\Checkbox.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\CHECKBOX_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\Dialog.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\Dialog_Intern.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\DROPDOWN.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\DROPDOWN_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\Edit.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\Edit_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\FrameWin.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\FRAMEWIN_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GRAPH.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GRAPH_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GUI.H
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GUI_ARRAY.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GUI_ConfDefaults.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GUI_FontIntern.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GUI_HOOK.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GUI_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GUI_Protected.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GUI_SIM_NoWin32.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GUI_SIM_Win32.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GUI_VNC.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GUI_X.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GUIDebug.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GUITYPE.H
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\GUIVersion.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\HEADER.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\HEADER_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\LCD.H
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\LCD_ConfDefaults.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\LCD_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\LCD_Protected.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\LCDSIM.H
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\LCDSIM_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\LISTBOX.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\LISTBOX_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\LISTVIEW.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\LISTVIEW_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\MENU.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\MENU_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\MESSAGEBOX.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\MULTIEDIT.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\MULTIPAGE.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\MULTIPAGE_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\ProgBar.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\PROGBAR_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\Radio.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\RADIO_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\Scrollbar.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\SCROLLBAR_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\SIM.H
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\Slider.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\SLIDER_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\Text.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\TEXT_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\Widget.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\WINDOW_Private.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\WM.H
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\WM_GUI.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\WM_Intern.h
# End Source File
# Begin Source File

SOURCE=.\GUI\Include\WM_Intern_ConfDep.h
# End Source File
# End Group
# Begin Group "Library"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\GUI\Library\GUI.lib
# End Source File
# End Group
# Begin Source File

SOURCE=.\Config\GUIConf.h
# End Source File
# Begin Source File

SOURCE=.\Config\LCDConf.h
# End Source File
# End Group
# Begin Group "Sample"

# PROP Default_Filter ""
# Begin Group "VSCREEN_MultiPage"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\Sample\GUI\VSCREEN_MultiPage\About.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\VSCREEN_MultiPage\Calibration.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\VSCREEN_MultiPage\LogoBitmap.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\VSCREEN_MultiPage\Main.h
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\VSCREEN_MultiPage\MainTask.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\VSCREEN_MultiPage\Setup.c
# PROP Exclude_From_Build 1
# End Source File
# End Group
# Begin Group "WIDGET_Checkbox"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_Checkbox\BitmapBar.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_Checkbox\BitmapCheckXL.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_Checkbox\BitmapCheckXXL.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_Checkbox\Main.h
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_Checkbox\MainTask.c
# PROP Exclude_From_Build 1
# End Source File
# End Group
# Begin Source File

SOURCE=.\Sample\GUI\2DGL_BMPExport.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\2DGL_DrawBMP.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\2DGL_DrawJPEG.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\2DGL_DrawPolygon.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\2DGL_DrawScale.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\AA_HiResAntialiasing.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\AA_HiResPixels.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\AA_Lines.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\AA_Text.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\BASIC_Hello1.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\BASIC_HelloWorld.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\COLOR_DemoLUT.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\COLOR_ShowColorBar.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\CURSOR_Sample.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\DIALOG_All.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\DIALOG_Count.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\DIALOG_MessageBox.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\DIALOG_NestedModal.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\DIALOG_Radio.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\DIALOG_SliderColor.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\FONT_ShiftJIS.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\MEMDEV_AutoDev.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\MEMDEV_Banding.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\MEMDEV_DrawGraph.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\MEMDEV_MemDev.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\MEMDEV_Printing.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\MT_MultiTasking.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\ProblemReport.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\SIM_Hardkey.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\StartApplication.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\TOUCH_Calibrate.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\TOUCH_Sample.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\VNC.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\VSCREEN_RealTime.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_ButtonRound.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_Dropdown.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_Edit.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_EditWinmode.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_Effect.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_FrameWin.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_Header.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_ListBox.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_ListBoxOwnerDraw.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_ListView.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_Multiedit.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_Multipage.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_NumPad.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_PhoneButton.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_Progbar.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_ScrollbarMove.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_SimpleButton.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_SimpleListBox.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_SimpleProgbar.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WIDGET_Window.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WM_LateClipping.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WM_Redraw.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WM_Sample.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Sample\GUI\WM_Video.c
# PROP Exclude_From_Build 1
# End Source File
# End Group
# Begin Group "Simulation"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\Exe\Device.bmp
# End Source File
# Begin Source File

SOURCE=.\Exe\Device1.bmp
# End Source File
# Begin Source File

SOURCE=.\Simulation\SIM_X.c
# End Source File
# Begin Source File

SOURCE=.\Simulation\Simulation.res
# End Source File
# Begin Source File

SOURCE=.\Simulation\WinMain.c
# End Source File
# Begin Source File

SOURCE=.\Simulation\GUISim.lib
# End Source File
# End Group
# End Target
# End Project
