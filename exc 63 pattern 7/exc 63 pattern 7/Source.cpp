/*
            1
         1  1
      1  2  1
   1  3  2  1
1  4  6  4  1
*/
#include <iostream>
using namespace std;
int main() {
	int x[5][5] = { 0 };
	for (int i = 0; i < 5; i++) { x[i][0] = 1; }
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4-i ; j++) {
			cout << " " << "\t";
		}
		for (int j = 0; j < 5; j++) {
			if (i > 0 && j > 0) {
				x[i][j] = x[i - 1][j] + x[i - 1][j - 1];
			}
			if (x[i][j] > 0) {
				cout << x[i][j] << "\t";
			}
		}
		cout << endl;
	}
}