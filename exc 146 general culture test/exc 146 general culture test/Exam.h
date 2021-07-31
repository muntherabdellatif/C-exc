#pragma once
#include<iostream>
using namespace std;
class Exam
{
	static int counter;
	struct Option
	{
		string OptionText;
		bool correctOption;
	};
	int optionNumber;
	string questionText;
	Option* optionList;
public:
	void setQuestionText(string Q);
	void setOptionNumber(int OptionNumber);
	void setOption(int OpNumber, string Op, bool correct);
	string getQuestionText();
	string getOption(int OpNumber);
	int getOptionNumber();
	bool checkAnswer(int n);
	static int getCounter();
};

