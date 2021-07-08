
#include <iostream>
using namespace std;
#define StackEntry int

typedef struct stackNode {
	StackEntry entry;
	struct stackNode* next;
}StackNode;

typedef struct stack {
	StackNode* top;
	int size;
}Stack;

void IntializeStack(Stack* ps) {
	ps->top = NULL;
	ps->size = 0;
}
void StackPush(StackEntry e, Stack* ps) {
	// creating pointer for location of size stack node and put it in pn 
	StackNode* pn = (stackNode*)malloc(sizeof(StackNode));
	pn->entry = e;
	pn->next = ps->top;
	ps->top = pn;
	(ps->size)++;
}
void Stackpop(StackEntry* pe, Stack* ps) {
	StackNode* pn; // pointer used for free entry memory location 
	*pe = ps->top->entry;
	pn = ps->top; // pn point to poped element 
	ps->top = ps->top->next;
	free(pn); // free entry memory location 
	(ps->size)--;
}
void StackTop(StackEntry* pe, Stack* ps) {
	*pe = ps->top->entry;
}
bool StackEmpty(Stack* ps) {
	return(ps->top == NULL);
}
bool StackFull(Stack* ps) {
	return 0;
}
void ClearStack(Stack* ps) {
	StackNode* pn = ps->top;
	while (pn) {
		pn = pn->next;
		free(ps->top);
		ps->top = pn;
	}
	ps->size = 0;
}
void TraverseStack(Stack* ps, void(*pf)(StackEntry)) {
	stackNode* pn = ps->top;
	while (pn) {
		(*pf)(pn->entry);
		pn = pn->next;
	}
}
void CustomTraverseStack(Stack* ps1,Stack* ps2,Stack* ps3,void(*pf)(StackEntry)) {
	stackNode* pn1 = ps1->top;
	stackNode* pn2 = ps2->top;
	stackNode* pn3 = ps3->top;
	int size1 = ps1->size;
	int size2 = ps2->size;
	int size3 = ps3->size;
	int max = size1;
	if (size2 > max) { max = size2; }
	if (size3 > max) { max = size3; }
	for (int i = 0; i < max; i++) {
		if ((i + size1) >= max && pn1) {
			(*pf)(pn1->entry);
			pn1 = pn1->next;
         }
		else { cout<< "           "; }
		if ((i + size2) >= max && pn2) {
			(*pf)(pn2->entry);
			pn2 = pn2->next;
		}	
		else { cout << "           "; }
		if ((i + size3) >= max && pn3) {
			(*pf)(pn3->entry);
			pn3 = pn3->next;
		}
		else { cout << "           "; }
		cout << endl;
    }
}
int StackSize(Stack* ps) {
	/*int counter = 0;
	for (stackNode* pn = ps->top;pn;counter++, pn = pn->next){}
	return counter;*/
	return (ps->size);
}

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
void Move(Stack* ps1, Stack* ps2) {
	StackEntry e = 0;
	if (StackSize(ps1)){ 
		Stackpop(&e, ps1); 
		StackPush(e, ps2);
	}
}
void fullStack(Stack* sp, int ringNumber) {
	for (StackEntry i = ringNumber; i > 0; i--) {
		StackPush(i, sp);
	}
}
void print(StackEntry e) {
	for (int i = 0; i < 11; i++) {
		if (i>(5-e) && i<(5+e)){ cout << "="; }
		else { cout << " "; }
	}
}
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