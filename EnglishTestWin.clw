; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CTestDialog
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "EnglishTestWin.h"

ClassCount=9
Class1=CEnglishTestWinApp
Class2=CEnglishTestWinDlg

ResourceCount=5
Resource1=IDR_MAINFRAME
Resource2=IDD_DIALOG_RIGHTANS
Class3=CTestDialog
Class4=CTestButton_1
Class5=CTestButton_2
Class6=CTestButton_3
Class7=CTestButton_4
Resource3=IDD_ENGLISHTESTWIN_DIALOG
Class8=CDislogRightAns
Resource4=IDD_TESTDIALOG
Class9=CDialogErrAns
Resource5=IDD_DIALOG_ERRANS

[CLS:CEnglishTestWinApp]
Type=0
HeaderFile=EnglishTestWin.h
ImplementationFile=EnglishTestWin.cpp
Filter=N

[CLS:CEnglishTestWinDlg]
Type=0
HeaderFile=EnglishTestWinDlg.h
ImplementationFile=EnglishTestWinDlg.cpp
Filter=D
LastObject=CEnglishTestWinDlg
BaseClass=CDialog
VirtualFilter=dWC



[DLG:IDD_ENGLISHTESTWIN_DIALOG]
Type=1
Class=CEnglishTestWinDlg
ControlCount=2
Control1=IDCANCEL,button,1342242816
Control2=IDC_BUTTON1,button,1342242816

[DLG:IDD_TESTDIALOG]
Type=1
Class=CTestDialog
ControlCount=6
Control1=IDCANCEL,button,1342275584
Control2=IDC_BUTTON1,button,1342275595
Control3=IDC_BUTTON2,button,1342275595
Control4=IDC_BUTTON3,button,1342275595
Control5=IDC_BUTTON4,button,1342275595
Control6=IDC_STATICWORD,static,1342312961

[CLS:CTestDialog]
Type=0
HeaderFile=TestDialog.h
ImplementationFile=TestDialog.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CTestDialog

[CLS:CTestButton_1]
Type=0
HeaderFile=TestButton_1.h
ImplementationFile=TestButton_1.cpp
BaseClass=CButton
Filter=W
VirtualFilter=BWC
LastObject=CTestButton_1

[CLS:CTestButton_2]
Type=0
HeaderFile=TestButton_2.h
ImplementationFile=TestButton_2.cpp
BaseClass=CButton
Filter=W
VirtualFilter=BWC

[CLS:CTestButton_3]
Type=0
HeaderFile=TestButton_3.h
ImplementationFile=TestButton_3.cpp
BaseClass=CButton
Filter=W
VirtualFilter=BWC

[CLS:CTestButton_4]
Type=0
HeaderFile=TestButton_4.h
ImplementationFile=TestButton_4.cpp
BaseClass=CButton
Filter=W
VirtualFilter=BWC

[DLG:IDD_DIALOG_RIGHTANS]
Type=1
Class=CDislogRightAns
ControlCount=2
Control1=IDC_STATIC,static,1342308353
Control2=IDC_RIGHTWORD,static,1342308353

[CLS:CDislogRightAns]
Type=0
HeaderFile=DislogRightAns.h
ImplementationFile=DislogRightAns.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_RIGHTWORD

[DLG:IDD_DIALOG_ERRANS]
Type=1
Class=CDialogErrAns
ControlCount=2
Control1=IDC_RIGHTWORD,static,1342308353
Control2=IDC_STATIC,static,1342308353

[CLS:CDialogErrAns]
Type=0
HeaderFile=DialogErrAns.h
ImplementationFile=DialogErrAns.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_RIGHTWORD
VirtualFilter=dWC

