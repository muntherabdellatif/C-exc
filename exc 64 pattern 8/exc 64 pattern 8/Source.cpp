/*
A  B  C  D  E 
1  2  3  4
A  B  C  
1  2  
A
*/
#include <iostream>
using namespace std;
int main() {
	char x = 'A';
	int y = 1;
	for (int i = 0; i < 5; i++) {
		x = 'A'; y = 1;
		for (int j = 0; j < (5-i); j++) {
			if ((i % 2) == 0) {
				cout << x << "\t"; x++; }
			else { 
				cout << y << "\t"; y++; }
		}
		cout << endl;
	}
}