#include"Stack.h"
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
void CustomTraverseStack(Stack* ps1, Stack* ps2, Stack* ps3, void(*pf)(StackEntry)) {
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
		else { cout << "           "; }
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
	if (StackSize(ps1)) {
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
		if (i > (5 - e) && i < (5 + e)) { cout << "="; }
		else { cout << " "; }
	}
}