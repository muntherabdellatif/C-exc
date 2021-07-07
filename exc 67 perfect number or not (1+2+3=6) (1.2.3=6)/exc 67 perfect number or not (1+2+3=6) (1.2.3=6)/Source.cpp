/*
Perfect number, a positive integer that is equal to the sum of its proper 
divisors. The smallest perfect number is 6, which is the sum of 1, 2, and 3.
Other perfect numbers are 28, 496, and 8,128.
*/
#include<iostream>
using namespace std;
int main() {
	int numberDivisor[100] = { 0 },number ,counter=0, sum=0;
	cout << "enter number to check if it is perfect or not :" << endl;
	cin >> number;
	int inputNumber = number;
	for (int i = 1; i<number; i++) {
		if (number % i == 0) {
			numberDivisor[counter] = i;
			counter++;
		}
	}
	cout << " number divisor is :" << endl;
	for (int i = 0; i < counter; i++) {
		cout << numberDivisor[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < counter; i++) {
		sum += numberDivisor[i];
	}
	cout << " divisor sum is :" << sum << endl;
	if (inputNumber == sum) {
		cout<<"the number "<< inputNumber
			<<" is equal the divisor sum and it's perfect number";
	}
	else {
		cout << "the number " << inputNumber
			<< "is not equal the divisor sum "<< sum <<" and it's not perfect";
	}
}