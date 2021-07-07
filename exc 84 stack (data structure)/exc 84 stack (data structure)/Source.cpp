#include<iostream>
using namespace std;
#include"Stack.h"
void Didplay(StackEntry e) {
	printf("%d \t ", e);
}
int main() {
	StackEntry e;
	Stack s;
	InitializeStack(&s);
	for (int i = 0; i < MaxStack; i++) {
		cout << "enter value to stack : ";
		cin >> e;
		Push(e, &s);
	}
	cout << endl<<"the stack is :" << endl;
	TraverseStack(&s, &Didplay);
	cout << endl;
	for (int i = 0; i < MaxStack; i++) {
		cout << "take value from stack : ";
		pop(&e, &s);
		cout << e << endl;
		cout << "stack size is: " << StackSize(&s) << endl;
	}
}