#include<iostream>
using namespace std;
int main() {
	// define dynamic array for studants marks in each class
	string line = "------------------------\n";
	int classes, studants, marks;
	cout << "enter the number of classes :";
	cin >> classes;
	cout << "enter the number of marks :";
	cin >> marks;
	float*** classesStudantsMarks = new float** [classes];
	int *clasessStudant = new int[classes];
	for (int i = 0; i < classes; i++) {
		cout << "enter the number of studants in class "<<(i+1)<<" :";
		cin >> clasessStudant[i];
		classesStudantsMarks[i] = new float* [clasessStudant[i]];
		for (int j = 0; j < marks; j++) {
			classesStudantsMarks[i][j] = new float[marks];
		}
	}
	cout << line<<line;
	// entar studant marks
	for (int i= 0; i < classes; i++) {
		cout << "class " << i+1 << " :" << endl;
		for (int j = 0; j < clasessStudant[i]; j++) {
			for (int k = 0; k < marks; k++) {
				cout << "class " << i+1 << " studant " << j+1 << " mark " << k+1 << " is :";
				cin >> classesStudantsMarks[i][j][k];
			}
			cout << line;
		}
		cout << line;
	}
	// define sum and average for each studant in each class
	float** sum = new float*[classes];
	float** average = new float* [classes];
	for (int i = 0; i < classes; i++) {
		sum[i] = new float[clasessStudant[i]];
		average[i] = new float[clasessStudant[i]];
	}
	cout << line << line << line;
	// calcolate the average for each studant in each class
	for (int i = 0; i < classes; i++) {
		cout << "class " << i + 1 << " :" << endl;
		for (int j = 0; j < clasessStudant[i]; j++) {
			sum[i][j] = 0;
			for (int k = 0; k < marks; k++) {
				sum[i][j] += classesStudantsMarks[i][j][k];
			}
			average[i][j] = sum[i][j] / marks;
			cout << "studant " << j+1 << " average : " << average[i][j]<<endl;
		}
		cout << line;
	}
}