// EnglishTestWinDlg.h : header file
//

#if !defined(AFX_ENGLISHTESTWINDLG_H__06EF9E29_0B4C_4045_9662_8A051CD4E3FF__INCLUDED_)
#define AFX_ENGLISHTESTWINDLG_H__06EF9E29_0B4C_4045_9662_8A051CD4E3FF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <mmsystem.h>
#include "TestDialog.h"
#include "EnglishTester.h"

/////////////////////////////////////////////////////////////////////////////
// CEnglishTestWinDlg dialog

class CEnglishTestWinDlg : public CDialog
{
// Construction
public:
	void Play(CString strFilePath);
	CEnglishTester theEnglishTester;
	CEnglishTestWinDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CEnglishTestWinDlg)
	enum { IDD = IDD_ENGLISHTESTWIN_DIALOG };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEnglishTestWinDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CEnglishTestWinDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ENGLISHTESTWINDLG_H__06EF9E29_0B4C_4045_9662_8A051CD4E3FF__INCLUDED_)
