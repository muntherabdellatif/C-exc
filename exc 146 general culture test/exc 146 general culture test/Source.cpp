#include "Exam.h"
#include "Question.h"
#define questionNumber 10
int main() {
	int answer;
	Exam MyExam[questionNumber];
	setQuestion(MyExam , questionNumber);
	for (int i = 0; i < questionNumber; i++) {
		cout << MyExam[i].getQuestionText()<<"\n";
		for (int j = 0; j < MyExam[i].getOptionNumber(); j++) {
			cout <<j+1<<" ) " << MyExam[i].getOption(j) << endl;
		}
		cin >> answer;
		if (MyExam[i].checkAnswer(answer)) {cout << "correct answer" << endl;}
		else { cout << "incorrect answer" << endl;}
	}
	cout << "your mark is :" << Exam::getCounter()<<" /10 ";
}