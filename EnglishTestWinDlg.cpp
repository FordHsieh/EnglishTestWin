// EnglishTestWinDlg.cpp : implementation file
//

#include "stdafx.h"
#include "EnglishTestWin.h"
#include "EnglishTestWinDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEnglishTestWinDlg dialog

CEnglishTestWinDlg::CEnglishTestWinDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CEnglishTestWinDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CEnglishTestWinDlg)
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CEnglishTestWinDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CEnglishTestWinDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CEnglishTestWinDlg, CDialog)
	//{{AFX_MSG_MAP(CEnglishTestWinDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEnglishTestWinDlg message handlers

BOOL CEnglishTestWinDlg::OnInitDialog()
{
	Play("Sound/Trumpet1.wav");
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);		// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CEnglishTestWinDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}

}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CEnglishTestWinDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CEnglishTestWinDlg::OnButton1()
{
	Play("Sound/stg_launch.wav");
	int Answer;
	int CheckContinue;
	do {
		Answer = theEnglishTester.examinationC2E();
		CTestDialog TheDialog;
		TheDialog.Answer = Answer;
		TheDialog.SetTestWord1(theEnglishTester.get_questionWord1());
		TheDialog.SetTestWord2(theEnglishTester.get_questionWord2());
		TheDialog.SetTestWord3(theEnglishTester.get_questionWord3());
		TheDialog.SetTestWord4(theEnglishTester.get_questionWord4());
		CheckContinue = TheDialog.DoModal();
	} while (CheckContinue == 1);
}

void CEnglishTestWinDlg::Play(CString strFilePath)
{
	PlaySound(strFilePath, 0, SND_FILENAME | SND_ASYNC);
}
