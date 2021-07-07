/*
0  1  0  1  0
1  0  1  0  1
0  1  0  1  0
1  0  1  0  1
0  1  0  1  0
*/
#include<iostream>
using namespace std;
int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << ((i + j) % 2)<<"\t";
		}
		cout << endl;
	}
}