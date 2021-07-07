/*
Strong number is a special number whose sum of the factorial of
digits is equal to the original number.
For Example : 145 is strong number.Since, 1!+ 4!+ 5!= 145
*/
#include <iostream>
using namespace std;
int findDigits(int number, int digits[]);
void digitsFactorial(int digits[], int digitsF[] , int digitsSize);
int ArraySum(int array[], int Size);
int main() {
	int number, digitsSize=0 ,sum=0;
	int digits[10] = { 0 }, digitsF[10] = {0};
	cout << " enter number to check if it strong or not :" << endl;
	cin >> number;
	digitsSize=findDigits(number , digits);
	digitsFactorial(digits,digitsF, digitsSize);
	sum = ArraySum(digitsF, digitsSize);
	if (sum == number) { cout << "the number "<<number<< " is strong" << endl; }
	else{ cout << "the number " << number << " is not strong" << endl; }
}
int findDigits(int number, int digits[]) {
	int m = 1, n = 10, size = 0;
	for (int i = 0; number!=0; i++,size++) {
		digits[i] = (number % n);
		number -= digits[i];
		if (digits[i] != 0) { digits[i] /= m; }
		n *= 10; m *= 10;
	}
	cout << " the number " << number << " digits are :"<<endl;
	for (int i = 0; i < size; i++) {
		cout << digits[i] << "\t";
	}
	cout << endl;
	return size;
}
void digitsFactorial(int digits[], int digitsF[], int digitsSize) {
	int factorial;
	for (int i = 0; i < digitsSize; i++) { 
		factorial = 1;
		for (int j = 0; j < digits[i]; j++) {
			factorial *= j+1;
		}
		digitsF[i] = factorial;
	}
	cout << " the number digits factorials are :" << endl;
	for (int i = 0; i < digitsSize; i++) {
		cout << digitsF[i] << "\t";
	}
	cout << endl;
}
int ArraySum(int array[], int Size) {
	int sum = 0;
	for (int i = 0; i < Size; i++) {
		sum += array[i];
	}
	cout << "factorials sum is " << sum << endl;
	return sum;
}