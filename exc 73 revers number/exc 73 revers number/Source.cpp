#include<iostream>
using namespace std;
int findDigits(int number, int digits[]);
int main() {
	int number, digits[10] = {0} ,size=0 , reversNumber=0;
	cout << "enter number to reverse it" << endl;
	cin >> number;
	size=findDigits(number, digits);
	for (int i = 0; i<size ; i++) {
		static int n = pow(10,size-1);
		reversNumber += digits[i] * n;
		n /= 10;
	}
	cout << "the revers number is " << reversNumber;
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