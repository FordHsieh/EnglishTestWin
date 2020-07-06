// EnglishTester.cpp: implementation of the CEnglishTester class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "EnglishTestWin.h"
#include "EnglishTester.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

/* EnglishTester member function -- constructor */
CEnglishTester::CEnglishTester ()
{
	// set and open default value
	filename = "minna.txt";
	open_file ();
	read_file ();

	return;
}

/* EnglishTester menber function -- open_file */
bool	CEnglishTester::open_file (void)
{
	file.open(filename.c_str(), ios::in);
	// check the file open success -- code here
	
	return FuncSUCCESS;
}

/* EnglishTester member function -- read_file() */
bool	CEnglishTester::read_file (void)
{
	string	strEword;
	string	strCword;
	while(file >> strEword >> strCword)
	{
		// clean test object
		test.EnglishWord.erase(0,test.EnglishWord.max_size());
		test.ChineseWord.erase(0,test.ChineseWord.max_size());

		// set English and Chinese word
		test.EnglishWord = strEword;
		test.ChineseWord = strCword;

		// cout << "English Word = " 
		//      << test.EnglishWord << endl;
		// cout << "Chinese Word = " 
		//      << test.ChineseWord <<endl;

		// push TeXT struct value in WordVector
		WordVector.push_back (test);
	}

	return FuncSUCCESS;
}

/* EnglishTester member function -- examinationE2C() */
int	CEnglishTester::examinationE2C (void)
{
	// clean all the FindSimWORD vector data
	FindSimWORD.clear();
	srand( (unsigned)time( NULL ) );
	int	number;
	int	AnswerNum;
	int	vector_size = WordVector.size();
	vector<int> rec;

START:

	// set question word empty
	questionWord[0].EnglishWord = "";
	questionWord[0].ChineseWord = "";
	questionWord[1].EnglishWord = "";
	questionWord[1].ChineseWord = "";
	questionWord[2].EnglishWord = "";
	questionWord[2].ChineseWord = "";
	questionWord[3].EnglishWord = "";
	questionWord[3].ChineseWord = "";

	// pick the rand number
	do {
		number = rand ();
	} while (number >= vector_size);

	int	breakcount = 1;	// for check break
	string	FindWord;		// for find word
	// front
	questionWord[0] = WordVector[number];

	// set finding word
	FindWord = questionWord[0].EnglishWord;

	for (int k = 0 ; k < questionWord[0].EnglishWord.size() ; k++)
	{
		if ((FindWord.size() == 1) || (FindWord == "")) {}
		else
		{ 
			for (int WordCount = 0 ; WordCount < vector_size ; WordCount++)
			{
				// cout << "loop4" << endl;
				int index = WordVector[WordCount].EnglishWord.find(FindWord);
				if ((index != string::npos) && (index == 0))	// check the finding word
				{
					if (questionWord[0].EnglishWord 
						!= WordVector[WordCount].EnglishWord)
					{
						if (FindSimWORD.size() == 0)
						{
							FindSimWORD.push_back(WordVector[WordCount]);
							// cout << "findsimword == 0" << endl;
						}
						else
						{
							int count = 0;
							do {
								if (FindSimWORD[count].EnglishWord
									== WordVector[WordCount].EnglishWord)
								{
									// cout
									// << "erase value : " 
									// << FindSimWORD[count].EnglishWord << endl;
									FindSimWORD.erase(FindSimWORD.begin() + 
																	count);
								}
								count ++;
								// cout << "cout = " << count << endl;
							} while (count < FindSimWORD.size());
							// cout << "push back" << endl;
							FindSimWORD.push_back(WordVector[WordCount]);
						}
					}
				}
			}
		}

		FindWord = FindWord.erase (FindWord.size() - 1, 1);
		// cout << "FindWord = " << FindWord <<endl;
	}
	
	// check word count then 4
	if (FindSimWORD.size() < 4) goto START;
	// cout << "FindSimWORD = " << FindSimWORD.size() << endl;	
	vector_size = FindSimWORD.size();
	// set vector rec
	for (int ii = 0 ; ii < vector_size ; ii++) rec.push_back (ii);
	random_shuffle (rec.begin(), rec.end());

	// set the question word
	questionWord[0] = FindSimWORD[rec[0]];
	questionWord[1] = FindSimWORD[rec[1]];
	questionWord[2] = FindSimWORD[rec[2]];
	questionWord[3] = FindSimWORD[rec[3]];

	// set the AnswerNum
	do {
		AnswerNum = rand();
		AnswerNum = (AnswerNum % 4) + 1;
	} while (AnswerNum > 4);
	
	return 1;
}

/* EnglishTester member function -- examinationC2E() */
int	CEnglishTester::examinationC2E (void)
{
	// clean all the FindSimWORD vector data
	FindSimWORD.clear();
	srand( (unsigned)time( NULL ) );
	int	number;
	int	AnswerNum;
	int	vector_size = WordVector.size();
	vector<int> rec;

START:
	// pick the rand number
	do {
		number = rand ();
	} while (number >= vector_size);

	int	breakcount = 1;		// for check break
	string	FindWord;		// for find word
	// front
	questionWord[0].ChineseWord = WordVector[number].ChineseWord;
	questionWord[0].EnglishWord = WordVector[number].EnglishWord;
	
	// set finding word
	FindWord = questionWord[0].EnglishWord;

	// cout << "FindWord = " << FindWord << endl;
	for (int k = 0 ; k < questionWord[0].EnglishWord.size() ; k++)
	{
		if ((FindWord.size() == 1) || (FindWord == "")) {}
		else
		{
			for (int WordCount = 0 ; WordCount < vector_size ; WordCount++)
			{
				int index = WordVector[WordCount].EnglishWord.find(FindWord);
				if ((index != string::npos) && (index == 0))	// check the finding word
				{
					if (questionWord[0].EnglishWord 
						!= WordVector[WordCount].EnglishWord)
					{
						if (FindSimWORD.size() == 0)
						{
							FindSimWORD.push_back(WordVector[WordCount]);
							// cout << "findsimword == 0" << endl;
						}
						else
						{
							int count = 0;
							do {
								if (FindSimWORD[count].EnglishWord 
									== WordVector[WordCount].EnglishWord)
								{
									// cout 
									// << "erase value : " 
									// << FindSimWORD[count].EnglishWord << endl;
									FindSimWORD.erase(FindSimWORD.begin() + 
																	count);
								}
								count ++;
								// cout << "cout = " << count << endl;
							} while (count < FindSimWORD.size());
							// cout << "push back" << endl;
							FindSimWORD.push_back(WordVector[WordCount]);
						}
					}
				}
			}
		}
						
		FindWord = FindWord.erase (FindWord.size() - 1, 1);
		// cout << "FindWord = " << FindWord <<endl;
	}
	
	// check word count then 4
	if (FindSimWORD.size() < 4) goto START;
	// cout << "FindSimWORD = " << FindSimWORD.size() << endl;	
	vector_size = FindSimWORD.size();
	// set vector rec
	for (int ii = 0 ; ii < vector_size ; ii++)	rec.push_back (ii);
	random_shuffle (rec.begin(), rec.end());

	// set the question word
	questionWord[0] = FindSimWORD[rec[0]];
	questionWord[1] = FindSimWORD[rec[1]];
	questionWord[2] = FindSimWORD[rec[2]];
	questionWord[3] = FindSimWORD[rec[3]];

	// set the AnswerNum
	do {
		AnswerNum = rand();
		AnswerNum = (AnswerNum % 4) + 1;
	} while (AnswerNum > 4);

	return AnswerNum;
}

/* EnglishTester member function -- get_questionWord1() */
TeXT	CEnglishTester::get_questionWord1(void)
{
	return questionWord[0];
}

/* EnglishTester member function -- get_questionWord2() */
TeXT	CEnglishTester::get_questionWord2(void)
{
	return questionWord[1];
}

/* EnglishTester member function -- get_questionWord3() */
TeXT	CEnglishTester::get_questionWord3(void)
{
	return questionWord[2];
}

/* EnglishTester member function -- get_questionWord4() */
TeXT	CEnglishTester::get_questionWord4(void)
{
	return questionWord[3];
}

/* EnglishTester member function -- destructor() */
CEnglishTester::~CEnglishTester()
{

}
