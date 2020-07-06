#if !defined(AFX_TESTBUTTON_4_H__6E07A5FB_8A4C_488D_AE14_FAD91E8C17F9__INCLUDED_)
#define AFX_TESTBUTTON_4_H__6E07A5FB_8A4C_488D_AE14_FAD91E8C17F9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TestButton_4.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTestButton_4 window

class CTestButton_4 : public CButton
{
// Construction
public:
	CTestButton_4();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestButton_4)
	public:
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	//}}AFX_VIRTUAL

// Implementation
public:
	bool CurtAnswer;
	CString TestWord;
	virtual ~CTestButton_4();

	// Generated message map functions
protected:
	//{{AFX_MSG(CTestButton_4)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTBUTTON_4_H__6E07A5FB_8A4C_488D_AE14_FAD91E8C17F9__INCLUDED_)
