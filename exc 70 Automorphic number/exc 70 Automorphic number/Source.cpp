/*
An automorphic number is an integer whose square ends with the given integer,
as (5)^2=25,(25)^2 = 625, and (76)^2 = 5776.
*/
#include<iostream>
#include<cmath>
using namespace std;
void FindDigitsNumber(int num,int &digitsNumber);
int squareFinalDigits(int square , int digitsNumber);
int main() {
	int number, digitsNumber ,square , squareEnd;
	cout << "Enter number to find if it automorphic or not :";
	cin >> number;
	FindDigitsNumber(number, digitsNumber);
	square = number*number;
	cout << "the bumber "<<number<<" square :" << square << endl;
	squareEnd = squareFinalDigits(square, digitsNumber);
	cout << "square ends :" << squareEnd << endl;
	if (squareEnd == number) {
		cout << "the number " << number << " is automorphic " << endl;
	}
	else{ cout << "the number " << number << " is not automorphic " << endl; }
}
void FindDigitsNumber(int num , int &digitsNumber) {
	int n = 1; digitsNumber = 0;
	for (int i = 0; digitsNumber==0 ; i++) {
		if ((num / n )< 10) { digitsNumber = i + 1; }
		n *= 10;
	}
	cout << num << " is " << digitsNumber << " digits" << endl;
}
int squareFinalDigits(int square, int digitsNumber) {
	int n = 1;
	for (int i = 0; i < digitsNumber; i++) {
		n *= 10;
	}
	return (square % n);
}