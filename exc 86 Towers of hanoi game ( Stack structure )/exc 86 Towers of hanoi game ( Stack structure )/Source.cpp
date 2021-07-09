#include "Stack.h"

int main() {
	string line = "-------------------------------";
	int ringNumber;
	Stack s1; IntializeStack(&s1);
	Stack s2; IntializeStack(&s2);
	Stack s3; IntializeStack(&s3);
	cout << "enter the number of ring in game from 1 to 5 : ";
	cin >> ringNumber;
	fullStack(&s1, ringNumber);
	CustomTraverseStack(&s1, &s2, &s3, print);
	cout << "     1    |     2     |    3    " << endl;
	cout << line << endl;
	cout << StackSize(&s1);
	int number1, number2;
	while (StackSize(&s1) != 0 || StackSize(&s2) != 0) {
		cout << "Move ring from :";
		cin >> number1;
		cout << " to :";
		cin >> number2;
		cout << line << endl;
		Stack* sp1=NULL;
		switch(number1) {
		case(1): sp1 = &s1; break;
		case(2): sp1 = &s2; break;
		case(3): sp1 = &s3; break;
		}
		Stack* sp2 = NULL;
		switch (number2) {
		case(1): sp2 = &s1; break;
		case(2): sp2 = &s2; break;
		case(3): sp2 = &s3; break;
		}
		Move(sp1, sp2);
		CustomTraverseStack(&s1, &s2, &s3, print);
		cout << "     1    |     2     |    3    " << endl;
		cout << line << endl;
	}
	cout << "you win :-) " << endl;
}