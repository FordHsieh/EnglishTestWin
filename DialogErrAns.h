#if !defined(AFX_DIALOGERRANS_H__BF56790A_5AA4_4675_BE87_1D8DCAB6E8F0__INCLUDED_)
#define AFX_DIALOGERRANS_H__BF56790A_5AA4_4675_BE87_1D8DCAB6E8F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogErrAns.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogErrAns dialog

class CDialogErrAns : public CDialog
{
// Construction
public:
	CDialogErrAns(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogErrAns)
	enum { IDD = IDD_DIALOG_ERRANS };
	CString	m_RightWord;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogErrAns)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogErrAns)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGERRANS_H__BF56790A_5AA4_4675_BE87_1D8DCAB6E8F0__INCLUDED_)
