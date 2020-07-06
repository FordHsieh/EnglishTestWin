// DislogRightAns.cpp : implementation file
//

#include "stdafx.h"
#include "EnglishTestWin.h"
#include "DislogRightAns.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDislogRightAns dialog


CDislogRightAns::CDislogRightAns(CWnd* pParent /*=NULL*/)
	: CDialog(CDislogRightAns::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDislogRightAns)
	m_RightWord = _T("");
	//}}AFX_DATA_INIT
}


void CDislogRightAns::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDislogRightAns)
	DDX_Text(pDX, IDC_RIGHTWORD, m_RightWord);
	DDV_MaxChars(pDX, m_RightWord, 50);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDislogRightAns, CDialog)
	//{{AFX_MSG_MAP(CDislogRightAns)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDislogRightAns message handlers

void CDislogRightAns::OnLButtonDown(UINT nFlags, CPoint point) 
{		
	CDialog::OnLButtonDown(nFlags, point);
	CDialog::EndDialog(5);	// close the dialog for answer right
}
