#include<iostream>
using namespace std;
bool ascending(int a, int b);
bool descending(int a, int b);
void sort(int array[],int sise ,bool (*functionptr)(int,int));
void print(int array[], int size);
void main() {
	int size;
	cout << " enter array size :";
	cin >> size;
	int* myArray = new int[size];
	cout << "enter array element :" << endl;
	for (int i = 0; i < size; i++) {
		cout << "Array [" << i << "]=";
		cin >> myArray[i];
	}
	bool (*functionptr)(int, int) = ascending;
	sort(myArray, size, functionptr);
	cout << " ascending :" << endl;
	print(myArray, size);
	functionptr = descending;
	sort(myArray, size, functionptr);
	cout << " descending :" << endl;
	print(myArray, size);
}
bool ascending(int a, int b) {
	if (a > b) { return true; }
	return false;
}
bool descending(int a, int b) {
	if (a < b) { return true; }
	return false;
}
void sort(int array[],int size, bool (*functionptr)(int, int)) {
	int a, b;
	for (int i = 0; i < (size-1); i++) {
		for (int j = 0; j < (size-1); j++) {
			a = array[j];
			b = array[j+1];
			if (functionptr(a,b)) { array[j] = b; array[j + 1] = a; }
		}
	}
}
void print(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << "\t";
	}
	cout << endl;
}