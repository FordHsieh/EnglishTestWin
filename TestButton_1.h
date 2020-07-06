#if !defined(AFX_TESTBUTTON_1_H__E9FA8C19_8935_46E3_9138_ADC7F422237E__INCLUDED_)
#define AFX_TESTBUTTON_1_H__E9FA8C19_8935_46E3_9138_ADC7F422237E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TestButton_1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTestButton_1 window

class CTestButton_1 : public CButton
{
// Construction
public:
	CTestButton_1();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestButton_1)
	public:
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	//}}AFX_VIRTUAL

// Implementation
public:
	bool CurtAnswer;
	CString TestWord;
	virtual ~CTestButton_1();

	// Generated message map functions
protected:
	//{{AFX_MSG(CTestButton_1)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTBUTTON_1_H__E9FA8C19_8935_46E3_9138_ADC7F422237E__INCLUDED_)
