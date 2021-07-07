/*
1  10  11  20  21
2  9   12  19  22
3  8   13  18  23
4  7   14  17  24
5  6   15  16  25
*/
#include<iostream>
using namespace std;
int main() {
	int x = 9;
	int y = 1;
	int w = 1;
	for (int i = 0; i < 5; i++) {
		w = i + 1;
		for (int j = 0; j < 5; j++) {
			cout << w << "\t";
			if ((j % 2) == 0) { w = w + x; }
			else { w = w + y; }
		}
		cout << endl;
		x = x - 2; y = y + 2;
	}
}