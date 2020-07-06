// EnglishTester.h: interface for the CEnglishTester class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ENGLISHTESTER_H__45772C8B_BD73_4269_825D_036159490323__INCLUDED_)
#define AFX_ENGLISHTESTER_H__45772C8B_BD73_4269_825D_036159490323__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////
//// for standard std header file
#include <vector>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

////////////////////////////////////////////////////////////////////
//// define struct text
#define FuncSUCCESS  true
#define FuncFAILURE false

////////////////////////////////////////////////////////////////////
//// TeXT structor
struct TeXT
{
	string EnglishWord;
	string ChineseWord;
};


////////////////////////////////////////////////////////////////////
// class CEnglishTester 
class CEnglishTester  
{
public:
	vector<TeXT>		WordVector;	// vector
	TeXT			test;
	fstream		file;		// file fstream
	string			filename;	// file name
	TeXT			questionWord[4];
	vector<TeXT>		FindSimWORD;

public:
	CEnglishTester ();
	bool		open_file (void);
	bool		read_file (void);
	int		examinationE2C (void);
	int		examinationC2E (void);
	TeXT		get_questionWord1(void);
	TeXT		get_questionWord2(void);
	TeXT		get_questionWord3(void);
	TeXT		get_questionWord4(void);
	virtual	~CEnglishTester();

};

#endif // !defined(AFX_ENGLISHTESTER_H__45772C8B_BD73_4269_825D_036159490323__INCLUDED_)
