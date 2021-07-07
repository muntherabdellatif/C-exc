#include"Stack.h"
// start stack
void InitializeStack(Stack* ps) {
	ps->top = 0;
}
// push value to stack
bool Push(StackEntry e, Stack* ps) {
	if (ps->top == MaxStack) { return 0; }
	else {
		ps->entry[(ps->top)++] = e;
		return 1;
	}
}
//check if stzck is full 
bool StackFull(Stack* ps) {
	return (ps->top == MaxStack);
}
// pop value from stack
bool pop(StackEntry* pe, Stack* ps) {
	if (ps->top == 0) { return 0; }
	else {
		*pe = ps->entry[--(ps->top)];
		return 1;
	}
}
// check if stack empty 
bool StackEmpty(Stack* ps) {
	return (!(ps->top));
}
// get stack top element
bool StackTop(StackEntry* pe, Stack* ps) {
	if (ps->top == 0) { return 0; }
	else {
		*pe = ps->entry[(ps->top) - 1];
		return 1;
	}
}
// get stack size 
int StackSize(Stack* ps) {
	return (ps->top);
}
// clear the stack
void ClearStack(Stack* ps) {
	ps->top = 0;
}
// Traverse Stack to function 
void TraverseStack(stack* ps, void (*pf)(StackEntry)) {
	for (int i = ps->top; i > 0; i--) {
		(*pf)(ps->entry[i - 1]);
	}
}