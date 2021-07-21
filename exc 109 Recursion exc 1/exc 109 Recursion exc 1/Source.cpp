/*
Write a recursive function that takes a list of numbers as an input
and returns the product of all the numbers in the list.
*/
#include<iostream>
using namespace std;
int ArrayProduct(int array[], int size) {
	static int x = 1;
	if (size > 0) {
		x = x * array[size - 1];
		ArrayProduct(array, --size);
	}
	return x;
}

int main() {
	int MyArray[10] = { 1,2,3,4,5,6,7,8,9,10};
	cout << ArrayProduct(MyArray,10);
}