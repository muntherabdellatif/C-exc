#include "Stack.h"
/*
	StackEntry e;
	Stack s;
	IntializeStack(&s);
	if (!StackFull) { StackPush(e, &s); }
	if (!StackEmpty) { Stackpop(&e, &s); }
	if (!StackEmpty) { StackTop(&e, &s); }
	ClearStack(&s);
	TraverseStack(&s, print);
	cout << StackSize(&s);
	*/
void print(StackEntry e) {
	cout << e << "\t";
}
int main() {
	StackEntry e = 0;
	Stack s;
	IntializeStack(&s);
	while (e != -2) {
		cout << "enter -1 to pop from stack and -2 to stop and any number to push it" << endl;
		cin >> e;
		if (e == -1) {
			Stackpop(&e, &s); 
		}
		else if (e > 0) {
		    StackPush(e, &s); 
		}
		cout << " your stack element is :";
		TraverseStack(&s, &print);
		cout << endl;
		cout << " your stack Size is : "<< StackSize(&s)<<endl;
	}
}