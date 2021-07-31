#include "Exam.h"
int Exam::counter = 0;
void Exam::setQuestionText(string Q)
{
	questionText = Q;
}

void Exam::setOptionNumber(int OptionNumber)
{
	optionNumber = OptionNumber;
	optionList = new Option[OptionNumber];
}

void Exam::setOption(int OpNumber,string Op, bool correct)
{
 optionList[OpNumber].OptionText= Op;
 optionList[OpNumber].correctOption = correct;
}

string Exam::getQuestionText()
{
	return string(questionText);
}

string Exam::getOption(int OpNumber)
{
	return string(optionList[OpNumber].OptionText);
}

int Exam::getOptionNumber()
{
	return optionNumber;
}

bool Exam::checkAnswer(int n)
{
	if (optionList[n-1].correctOption == 1) { Exam::counter++; return 1; }
	return false;
}

int Exam::getCounter()
{
	return Exam::counter;
}
