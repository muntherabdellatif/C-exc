#include "Stack.h"
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