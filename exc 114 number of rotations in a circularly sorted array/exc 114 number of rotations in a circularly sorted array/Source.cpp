/*
example :
Input:  arr = [8, 9, 10, 2, 5, 6]
Output: The array is rotated 3 times

Input:  arr = [2, 5, 6, 8, 9, 10]
Output: The array is rotated 0 times
*/
#include<iostream>
using namespace std;
int NumberOfRotation(int Myarray[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (Myarray[i] > Myarray[i + 1]) {
			return(i + 1);
		}
	}
	return (0);
}
int main() {
	int size = 0,number;
	cout << "enter array size :";
	cin >> size;
	int* Myarray = new int[size];
	cout << "enter array element" << endl;
	for (int i = 0; i < size; i++) {
		cout << "element " << (i + 1) << " is :";
		cin >> number;
		Myarray[i] = number;
	}
	int n=NumberOfRotation(Myarray,size);
	cout << "The array is rotated "<<n <<" times";
}