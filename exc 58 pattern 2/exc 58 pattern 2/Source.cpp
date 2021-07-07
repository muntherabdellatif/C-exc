/*
1  6   11  16  21
2  7   12  17  22 
3  8   13  18  23
4  9   14  19  24
5  10  15  20  25
*/
#include<iostream>
using namespace std;
void main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << ((i + 1) + 5 * j) << "\t";
		}
		cout << endl;
	}
}