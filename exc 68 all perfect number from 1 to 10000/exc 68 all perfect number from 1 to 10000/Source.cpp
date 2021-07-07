/*
Perfect number, a positive integer that is equal to the sum of its proper
divisors. The smallest perfect number is 6, which is the sum of 1, 2, and 3.
Other perfect numbers are 28, 496, and 8,128.
*/
#include<iostream>
using namespace std;
int main() {
	int perfectNumber[10] = { 0 } , perfectCounter=0;

	for (int n = 1; n < 10000; n++) {
     int numberDivisor[100] = { 0 }, counter = 0, sum = 0;
	 int inputNumber = n;
	 for (int i = 1; i < n; i++) {
		 if (n % i == 0) {
			 numberDivisor[counter] = i;
			 counter++;
		 }
	 }
	 for (int i = 0; i < counter; i++) {
		 sum += numberDivisor[i];
	 }
	 if (inputNumber == sum) {
		 cout << " number " << n << " divisor is : " << endl;
		 for (int i = 0; i < counter; i++) {
			 cout << numberDivisor[i] << "\t";
		 }

		 cout <<endl<< " divisor sum is :" << sum << endl;
		 cout << "the number " << inputNumber
			 << " is equal the divisor sum and it's perfect number" << endl;
		 perfectNumber[perfectCounter] = n; perfectCounter++;
	 }
	}
	cout << "the perfect number between 0 and 10000 is :" << endl;
	for (int n = 0; n < perfectCounter; n++) {
		cout << perfectNumber[n] << "\t";
	}
}