#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int cl, ro, allPossibilities, steps;
	cout << "enter matrix column number :";
	cin >> cl; cl--;
	cout << "enter matrix row nymber :";
	cin >> ro; ro--;
	allPossibilities = pow(2, cl + ro) - 1;
	steps = log2(allPossibilities) + 1;
	int* binaryArray = new int[steps];
	for (int x = 0; x < allPossibilities + 1; x++) { // generate all possibilities
		for (int i = 0; i < steps; i++) { binaryArray[i] = 0; }
		int sum = 1;
		for (int i = x, j = 0; i != 0; i /= 2, j++) {
			binaryArray[j] = i % 2;
			sum += binaryArray[j];
		}
		int** array2D = new int* [ro + 1];
		for (int i = 0; i < ro+1; i++) {array2D[i] = new int[cl+1];} // creat 2d array
		for (int i = 0; i < ro+1; i++) { // clear 2d array
			for (int j = 0; j < cl+1; j++) {
				array2D[i][j] = 0;
			}
		} 
		//int array2D[5][5] = { 0 };
		if (sum == (ro + 1)) {
			int n = 0, m = 0;
			array2D[n][m] = 1;
			for (int i = 0; i < steps; i++) {
				if (binaryArray[i] == 0) {
					m++;
				}
				else { n++; }
				cout << "(" << n << "," << m << ")";
				array2D[n][m] = 1;
			}
			cout << endl;
			for (int i = 0; i < ro + 1; i++) {
				for (int j = 0; j < cl + 1; j++) {
					if (array2D[i][j] == 0) { cout << " "; }
					else { cout << "+"; }
				}
				cout << endl;
			}
		}
	}
}