#include"Stack.h"
using namespace std;

void print(int element) {
	cout << element << "\t";
}

int main() {
	int e = 0;
	stack<int> s;
	while (e != -2) {
		cout << "enter -1 to pop from stack and -2 to stop and any number to push it" << endl;
		cin >> e;
		if (e == -1) {
			s.Stackpop(&e);
		}
		else if (e > 0) {
			s.StackPush(e);
		}
		cout << " your stack element is :";
		s.PassStack(print);
		cout << endl;
		cout << " your stack Size is : " << s.StackSize() << endl;
	}
}