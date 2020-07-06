// DialogErrAns.cpp : implementation file
//

#include "stdafx.h"
#include "EnglishTestWin.h"
#include "DialogErrAns.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDialogErrAns dialog


CDialogErrAns::CDialogErrAns(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogErrAns::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogErrAns)
	m_RightWord = _T("");
	//}}AFX_DATA_INIT
}


void CDialogErrAns::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogErrAns)
	DDX_Text(pDX, IDC_RIGHTWORD, m_RightWord);
	DDV_MaxChars(pDX, m_RightWord, 50);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogErrAns, CDialog)
	//{{AFX_MSG_MAP(CDialogErrAns)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogErrAns message handlers

void CDialogErrAns::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	CDialog::OnLButtonDown(nFlags, point);
	CDialog::EndDialog(5);
}
