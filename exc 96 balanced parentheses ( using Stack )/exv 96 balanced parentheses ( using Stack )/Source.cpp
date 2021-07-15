#include "Header.h"
using namespace std;

void print(char c) {
	cout << c << "\t";
}

bool checkBalance(string string) {
	char open[3]  = { '(', '[' ,'{' };
	char close[3] = { ')', ']' ,'}' };
	char c = ' ';
	stack<char> s;
	int i = 0;
	while (i<string.length()) {
		if (string[i] == '(' || string[i] == '{' || string[i] == '[') {
			s.StackPush(string[i]);
			s.PassStack(print);
			cout << endl;
		}
		for (int j = 0; j < 3; j++) {
	          if (string[i] == close[j]) {
			       if (!s.isEmpty()){ 
					     s.StackTop(&c);
			             if (c == open[j]) {
				         s.Stackpop(&c);
				         s.PassStack(print);
				         cout << endl;
			             }
			       }
				   else { return 0; }
		      }
		}
		i++;
	}
	if (s.isEmpty()) {
		return 1;
	}
	return 0;
}

int main() {
	string s_equation;
	cout << " enter equation to see if it balanced or not : " << endl;
	cin >> s_equation;
	if (checkBalance(s_equation)) {
		cout << " the equation is balanced ";
	}
	else { cout << " the equation is not balanced "; }
}