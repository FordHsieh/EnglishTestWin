#if !defined(AFX_TESTDIALOG_H__1150DAB6_4BF7_4873_8F14_05238D18BB1C__INCLUDED_)
#define AFX_TESTDIALOG_H__1150DAB6_4BF7_4873_8F14_05238D18BB1C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TestDialog.h : header file
//

#include <mmsystem.h>
#include "TestButton_1.h"
#include "TestButton_2.h"
#include "TestButton_3.h"
#include "TestButton_4.h"
#include "EnglishTester.h"
#include "DislogRightAns.h"
#include "DialogErrAns.h"

/////////////////////////////////////////////////////////////////////////////
// CTestDialog dialog

class CTestDialog : public CDialog
{
// Construction
public:
	void Play(CString strFilePath);
	CString m_StaticAnsWord;
	int Answer;
	void SetTestWord4(TeXT StrWord);
	void SetTestWord3(TeXT StrWord);
	void SetTestWord2(TeXT StrWord);
	void SetTestWord1(TeXT StrWord);
	CTestDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CTestDialog)
	enum { IDD = IDD_TESTDIALOG };
	CTestButton_4	m_TestButton_4;
	CTestButton_3	m_TestButton_3;
	CTestButton_2	m_TestButton_2;
	CTestButton_1	m_TestButton_1;
	CString	m_StaticWord;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CTestDialog)
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	TeXT TestWord4;
	TeXT TestWord3;
	TeXT TestWord2;
	TeXT TestWord1;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTDIALOG_H__1150DAB6_4BF7_4873_8F14_05238D18BB1C__INCLUDED_)
