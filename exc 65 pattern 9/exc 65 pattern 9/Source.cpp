/*
1   10   11
100 101  110
111 1000 1001
*/
#include<iostream>
using namespace std;
int toBinary(int x );
int main() {
	int x = 1;
	for (int i = 0; i < 3;i++) {
		for (int j = 0; j < 3; j++) {
			cout << toBinary(x++) << "\t";
		}
		cout << endl;
	}
}
int toBinary(int x) {
	int y1 = (x % 16)/8;
	int y2 = (x % 8)/4;
	int y3 = (x % 4)/2;
	int y4 = (x % 2);
	x = y1 * 1000 + y2 * 100 + y3 * 10 + y4;
	return x;
}