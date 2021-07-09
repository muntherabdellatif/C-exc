#pragma once
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

void IntializeStack(Stack* ps);
void StackPush(StackEntry e, Stack* ps);
void Stackpop(StackEntry* pe, Stack* ps);
void StackTop(StackEntry* pe, Stack* ps);
bool StackEmpty(Stack* ps);
bool StackFull(Stack* ps);
void ClearStack(Stack* ps);
void TraverseStack(Stack* ps, void(*pf)(StackEntry));
void CustomTraverseStack(Stack* ps1, Stack* ps2, Stack* ps3, void(*pf)(StackEntry));
int StackSize(Stack* ps);
void Move(Stack* ps1, Stack* ps2);
void fullStack(Stack* sp, int ringNumber);
void print(StackEntry e);