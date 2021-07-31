#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int cl, ro ,allPossibilities ,steps;
	cout << "enter matrix column number :";
	cin >> cl; cl--;
	cout << "enter matrix row nymber :";
	cin >> ro; ro--;
	allPossibilities = pow(2, cl + ro)-1;
	steps = log2(allPossibilities)+1;
	int* binaryArray = new int[steps];
	for (int x = 0; x < allPossibilities+1; x++) {
		for (int i = 0; i < steps; i++) {binaryArray[i] = 0; }
		int sum = 1;
		for (int i = x, j = 0; i != 0; i /= 2, j++) {
			binaryArray[j] = i % 2;
			sum += binaryArray[j];
		}
		if (sum == (ro + 1)) {
			int n = 0, m = 0;
			    cout << " (" << n << "," << m << ") ";
			for (int i = 0; i < steps; i++) {
				if (binaryArray[i] == 0) {
					m++;
				}
				else { n++; }
				cout << " (" << n << "," << m << ") ";
			}
			cout << endl;
		}
		
	}
}