
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