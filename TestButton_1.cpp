// TestButton_1.cpp : implementation file
//

#include "stdafx.h"
#include "EnglishTestWin.h"
#include "TestButton_1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTestButton_1

CTestButton_1::CTestButton_1()
{
	CurtAnswer = false;
	TestWord = "";
}

CTestButton_1::~CTestButton_1()
{
	// TODO
}


BEGIN_MESSAGE_MAP(CTestButton_1, CButton)
	//{{AFX_MSG_MAP(CTestButton_1)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestButton_1 message handlers

void CTestButton_1::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct) 
{
	CDC dc;
	dc.Attach(lpDrawItemStruct->hDC);     //Get device context object
	CRect rt;
	rt = lpDrawItemStruct->rcItem;        //Get button rect
	dc.FillSolidRect(rt, RGB(0, 0, 255)); //Fill button with blue color
	UINT state = lpDrawItemStruct->itemState; //Get state of the button
	if ( (state & ODS_SELECTED) )            // If it is pressed
	{
		dc.DrawEdge(rt,EDGE_SUNKEN,BF_RECT);    // Draw a sunken face
	}
	else
	{
		dc.DrawEdge(rt,EDGE_RAISED,BF_RECT);    // Draw a raised face
	}
	dc.SetTextColor(RGB(255,255,120));  // Set the color of the caption to be yellow
	CString strTemp = TestWord;
	dc.DrawText(strTemp,rt,DT_CENTER|DT_VCENTER|DT_SINGLELINE); 	// Draw out the caption
	if ( (state & ODS_FOCUS ) )       // If the button is focused
	{
		// Draw a focus rect which indicates the user 
		// that the button is focused
		int iChange = 3;
		rt.top += iChange;
		rt.left += iChange;
		rt.right -= iChange;
		rt.bottom -= iChange;
		dc.DrawFocusRect(rt);
	}
	dc.Detach();	
}
