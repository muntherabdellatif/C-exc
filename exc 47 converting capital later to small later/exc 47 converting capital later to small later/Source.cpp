#include<iostream>
using namespace std;
void main() {
	char string[50] ="";
	cout << "input string (capital alter):" << endl;
	cin >> string;
	for (int i = 0; string[i]!='\0'; i++) {
		if (string[i]>46 && string[i]<90)
		string[i] += 32;
	}
	cout << string;
}
