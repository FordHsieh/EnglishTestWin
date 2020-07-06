#if !defined(AFX_DISLOGRIGHTANS_H__5D649BEC_91E4_49C7_BE81_3887E9ABCF7B__INCLUDED_)
#define AFX_DISLOGRIGHTANS_H__5D649BEC_91E4_49C7_BE81_3887E9ABCF7B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DislogRightAns.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDislogRightAns dialog

class CDislogRightAns : public CDialog
{
// Construction
public:
	CDislogRightAns(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDislogRightAns)
	enum { IDD = IDD_DIALOG_RIGHTANS };
	CString	m_RightWord;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDislogRightAns)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDislogRightAns)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DISLOGRIGHTANS_H__5D649BEC_91E4_49C7_BE81_3887E9ABCF7B__INCLUDED_)
