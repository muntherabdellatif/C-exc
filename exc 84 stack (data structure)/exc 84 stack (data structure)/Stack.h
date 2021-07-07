#pragma once
#define StackEntry int
#define MaxStack 7
typedef struct stack
{
	int top;
	StackEntry entry[MaxStack];

}Stack;
void InitializeStack(Stack* ps);
bool Push(StackEntry e, Stack* ps);
bool StackFull(Stack* ps);
bool pop(StackEntry* pe, Stack* ps);
bool StackEmpty(Stack* ps);
bool StackTop(StackEntry* pe, Stack* ps);
int StackSize(Stack* ps);
void ClearStack(Stack* ps);
void TraverseStack(stack* ps, void (*pf)(StackEntry));