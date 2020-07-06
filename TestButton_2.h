#if !defined(AFX_TESTBUTTON_2_H__163667DC_1682_4AF8_8133_7339222E7B58__INCLUDED_)
#define AFX_TESTBUTTON_2_H__163667DC_1682_4AF8_8133_7339222E7B58__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TestButton_2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTestButton_2 window

class CTestButton_2 : public CButton
{
// Construction
public:
	CTestButton_2();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestButton_2)
	public:
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	//}}AFX_VIRTUAL

// Implementation
public:
	bool CurtAnswer;
	CString TestWord;
	virtual ~CTestButton_2();

	// Generated message map functions
protected:
	//{{AFX_MSG(CTestButton_2)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTBUTTON_2_H__163667DC_1682_4AF8_8133_7339222E7B58__INCLUDED_)
