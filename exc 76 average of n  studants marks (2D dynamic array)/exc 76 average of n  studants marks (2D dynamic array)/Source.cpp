#include <iostream>
using namespace std;
int main() {
	string line = "----------------------------\n";
	float studants,marks;
	cout << "enter the number of studants : ";
	cin >> studants;
	cout << "enter the number of marks : ";
	cin >> marks;
	cout << line;
	float** studantsMarks = new float*[studants];
	for (int i = 0; i < studants; i++) {
		studantsMarks[i] = new float[marks];
	}
	for (int i = 0; i < studants; i++) {
		for (int j = 0; j < marks; j++) {
			cout << "studant " << (i+1) << " mark " << (j+1) << " is :";
				cin >> studantsMarks[i][j];
		}
		cout << line;
	}
	float* marksSum = new float[studants];
	float* marksAveage = new float[studants];
	for (int i = 0; i < studants; i++) {
		marksSum[i] = 0;
		for (int j = 0; j < marks; j++) {
			marksSum[i] += studantsMarks[i][j];
		}
		marksAveage[i] = marksSum[i] / marks;
		cout << " studant " << i+1 << " average :" << marksAveage[i] << endl;
	}
	for (int i = 0; i < studants; i++) {
		delete[]studantsMarks[i];
   }
	delete[]studantsMarks;
	studantsMarks = NULL;
}