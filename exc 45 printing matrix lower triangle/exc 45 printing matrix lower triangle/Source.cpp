#include<iostream>
#include<iomanip>
using namespace std;
void interMatrix(int matrix[][4]);
void printMatrix(int matrix[][4]);
void printDiagonal(int matrix[][4]);
void printUpperTraingle(int matrix[][4]);
void printLowerTraingle(int matrix[][4]);
int main() {
	int Matrix[4][4] = { 0 };
	interMatrix(Matrix);
	printMatrix(Matrix);
	printDiagonal(Matrix);
	printUpperTraingle(Matrix);
	printLowerTraingle(Matrix);
}
void interMatrix(int matrix[][4]) {
	int input = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "matrix [" << i << "][" << j << "]=";
			cin >> matrix[i][j];
		}
	}
}
void printMatrix(int matrix[][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << setfill('0') << setw(2) << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}
void printDiagonal(int matrix[][4]) {
	cout << " matrix diagonal :" << endl;
	for (int i = 0; i < 4; i++) {
		cout << setfill('0') << setw(2) << matrix[i][i] << "\t";
	}
	cout << endl;
}
void printUpperTraingle(int matrix[][4]) {
	cout << "matrix upper triangle" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = i; j > 0; j--) {
			cout << "  " << "\t";
		}
		for (int j = (i+1); j < 4; j++) {
			cout << setfill('0') << setw(2) << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}
void printLowerTraingle(int matrix[][4]) {
	cout << "matrix lower triangle" << endl;
	for (int i = 1; i < 4; i++) {
		for (int j = 0 ; j < i ; j++) {
			cout << setfill('0') << setw(2) << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}