#if !defined(AFX_TESTBUTTON_3_H__653B2ECC_8B5E_4F45_B963_5489F8A22C27__INCLUDED_)
#define AFX_TESTBUTTON_3_H__653B2ECC_8B5E_4F45_B963_5489F8A22C27__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TestButton_3.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTestButton_3 window

class CTestButton_3 : public CButton
{
// Construction
public:
	CTestButton_3();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestButton_3)
	public:
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	//}}AFX_VIRTUAL

// Implementation
public:
	bool CurtAnswer;
	CString TestWord;
	virtual ~CTestButton_3();

	// Generated message map functions
protected:
	//{{AFX_MSG(CTestButton_3)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTBUTTON_3_H__653B2ECC_8B5E_4F45_B963_5489F8A22C27__INCLUDED_)
