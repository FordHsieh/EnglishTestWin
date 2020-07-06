// TestDialog.cpp : implementation file
//

#include "stdafx.h"
#include "EnglishTestWin.h"
#include "TestDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTestDialog dialog


CTestDialog::CTestDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CTestDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTestDialog)
	m_StaticWord = _T("");
	//}}AFX_DATA_INIT
}


void CTestDialog::DoDataExchange(CDataExchange* pDX)
{
	// set Testing word
	m_TestButton_1.TestWord = (CString)TestWord1.EnglishWord.c_str();
	m_TestButton_2.TestWord = (CString)TestWord2.EnglishWord.c_str();
	m_TestButton_3.TestWord = (CString)TestWord3.EnglishWord.c_str();
	m_TestButton_4.TestWord = (CString)TestWord4.EnglishWord.c_str();
	
	// set currect answer
	if (Answer == 1)
	{
		m_TestButton_1.CurtAnswer = true;
		m_StaticWord = TestWord1.ChineseWord.c_str();
		m_StaticAnsWord = TestWord1.EnglishWord.c_str();
	}
	else if (Answer == 2)
	{
		m_TestButton_2.CurtAnswer = true;
		m_StaticWord = TestWord2.ChineseWord.c_str();
		m_StaticAnsWord = TestWord2.EnglishWord.c_str();
	}
	else if (Answer == 3)
	{
		m_TestButton_3.CurtAnswer = true;
		m_StaticWord = TestWord3.ChineseWord.c_str();
		m_StaticAnsWord = TestWord3.EnglishWord.c_str();
	}
	else if (Answer == 4)
	{
		m_TestButton_4.CurtAnswer = true;
		m_StaticWord = TestWord4.ChineseWord.c_str();
		m_StaticAnsWord = TestWord4.EnglishWord.c_str();
	}

	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTestDialog)
	DDX_Control(pDX, IDC_BUTTON4, m_TestButton_4);
	DDX_Control(pDX, IDC_BUTTON3, m_TestButton_3);
	DDX_Control(pDX, IDC_BUTTON2, m_TestButton_2);
	DDX_Control(pDX, IDC_BUTTON1, m_TestButton_1);
	DDX_Text(pDX, IDC_STATICWORD, m_StaticWord);
	DDV_MaxChars(pDX, m_StaticWord, 50);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CTestDialog, CDialog)
	//{{AFX_MSG_MAP(CTestDialog)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestDialog message handlers

void CTestDialog::SetTestWord1(TeXT StrWord)
{
	TestWord1 = StrWord;
}

void CTestDialog::SetTestWord2(TeXT StrWord)
{
	TestWord2 = StrWord;
}

void CTestDialog::SetTestWord3(TeXT StrWord)
{
	TestWord3 = StrWord;
}

void CTestDialog::SetTestWord4(TeXT StrWord)
{
	TestWord4 = StrWord;
}

void CTestDialog::OnButton1() 
{
	if (m_TestButton_1.CurtAnswer == true)
	{
		Play("Sound/stg_ready.wav");
		CDislogRightAns theDialogRig;
		theDialogRig.m_RightWord = "答案是 : " + m_StaticAnsWord;
		theDialogRig.DoModal();
		CDialog::OnOK();
	} 
	else if (m_TestButton_1.CurtAnswer == false)
	{
		Play("Sound/cuckoo.wav");
		CDialogErrAns theDialogErr;
		theDialogErr.m_RightWord = "答案是 : " + m_StaticAnsWord;
		theDialogErr.DoModal();
		CDialog::OnOK();
	}
}

void CTestDialog::OnButton2() 
{
	if (m_TestButton_2.CurtAnswer == true)
	{
		Play("Sound/stg_ready.wav");
		CDislogRightAns theDialogRig;
		theDialogRig.m_RightWord = "答案是 : " + m_StaticAnsWord;
		theDialogRig.DoModal();
		CDialog::OnOK();
	}
	else if (m_TestButton_2.CurtAnswer == false)
	{
		Play("Sound/cuckoo.wav");
		CDialogErrAns theDialogErr;
		theDialogErr.m_RightWord = "答案是 : " + m_StaticAnsWord;
		theDialogErr.DoModal();
		CDialog::OnOK();
	}	
}

void CTestDialog::OnButton3() 
{
	if (m_TestButton_3.CurtAnswer == true)
	{
		Play("Sound/stg_ready.wav");
		CDislogRightAns theDialogRig;
		theDialogRig.m_RightWord = "答案是 : " + m_StaticAnsWord;
		theDialogRig.DoModal();
		CDialog::OnOK();
	}
	else if (m_TestButton_3.CurtAnswer == false)
	{
		Play("Sound/cuckoo.wav");
		CDialogErrAns theDialogErr;
		theDialogErr.m_RightWord = "答案是 : " + m_StaticAnsWord;
		theDialogErr.DoModal();
		CDialog::OnOK();
	}	
	
}

void CTestDialog::OnButton4() 
{
	if (m_TestButton_4.CurtAnswer == true)
	{
		Play("Sound/stg_ready.wav");
		CDislogRightAns theDialogRig;
		theDialogRig.m_RightWord = "答案是 : " + m_StaticAnsWord;
		theDialogRig.DoModal();
		CDialog::OnOK();
	}
	else if (m_TestButton_4.CurtAnswer == false)
	{
		Play("Sound/cuckoo.wav");
		CDialogErrAns theDialogErr;
		theDialogErr.m_RightWord = "答案是 : " + m_StaticAnsWord;
		theDialogErr.DoModal();
		CDialog::OnOK();
	}		
}

void CTestDialog::OnCancel() 
{
	CDialog::OnCancel();
}

void CTestDialog::Play(CString strFilePath)
{
	PlaySound(strFilePath, 0, SND_FILENAME | SND_ASYNC);
}
