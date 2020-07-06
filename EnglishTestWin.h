// EnglishTestWin.h : main header file for the ENGLISHTESTWIN application
//

#if !defined(AFX_ENGLISHTESTWIN_H__D54C2762_5727_4728_B3A5_0CBD0E4EECF2__INCLUDED_)
#define AFX_ENGLISHTESTWIN_H__D54C2762_5727_4728_B3A5_0CBD0E4EECF2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CEnglishTestWinApp:
// See EnglishTestWin.cpp for the implementation of this class
//

class CEnglishTestWinApp : public CWinApp
{
public:
	CEnglishTestWinApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEnglishTestWinApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CEnglishTestWinApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ENGLISHTESTWIN_H__D54C2762_5727_4728_B3A5_0CBD0E4EECF2__INCLUDED_)
