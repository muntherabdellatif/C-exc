/*
1  0  1  0  1
0  0  0  0  0
1  0  1  0  1
0  0  0  0  0
1  0  1  0  1
*/
#include<iostream>
using namespace std;
int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if ((i%2)==1 || (j%2)==1){ cout << 0 << "\t"; }
			else{ cout << 1 << "\t"; }
		}
		cout << endl;
	}
}