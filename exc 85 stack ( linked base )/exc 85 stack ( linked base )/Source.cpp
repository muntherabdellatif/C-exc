#include <iostream>
using namespace std;
#define StackEntry int

typedef struct stackNode {
	StackEntry entry;
	struct stackNode* next;
}StackNode;

typedef struct stack {
	StackNode* top;
}Stack;

int main() {

}