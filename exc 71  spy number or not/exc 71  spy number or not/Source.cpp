/*
A number is a Spy number, if sum and product of all digits are equal. 
Example: Number 123 is a Spy number, sum of its digits is 6 (1+2+3 =6) 
and product of its digits is 6 (1x2x3 = 6), sum and product are same,
thus, 123 is a spy number
*/
#include <iostream>
using namespace std;
int findDigits(int number, int digits[]);
int digitsSum(int digits[], int size);
int digitsProduct(int digits[], int size);
int main() {
	int number, digits[10] = { 10 }, size,sum , product;
	cout << " enter number to find if it is spy or not :";
	cin >> number;
	size=findDigits(number, digits);
	sum = digitsSum(digits, size);
	product = digitsProduct(digits, size);
	cout << "digit sum =" << sum << " , digit product ="<< product<<endl;
	if (sum == product) {cout << "the number " << number << " is spy " << endl;}
	else { cout << "the number " << number << " is not spy " << endl; }
}
int findDigits(int number, int digits[]) {
	int m = 1, n = 10, size = 0;
	for (int i = 0; number != 0; i++, size++) {
		digits[i] = (number % n);
		number -= digits[i];
		if (digits[i] != 0) { digits[i] /= m; }
		n *= 10; m *= 10;
	}
	cout << " the number " << number << " digits are :" << endl;
	for (int i = 0; i < size; i++) {
		cout << digits[i] << "\t";
	}
	cout << endl;
	return size;
}
int digitsSum(int digits[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += digits[i];
     }
	return sum;
}
int digitsProduct(int digits[], int size) {
	int product = 1;
	for (int i = 0; i < size; i++) {
		product *= digits[i];
	}
	return product;
}