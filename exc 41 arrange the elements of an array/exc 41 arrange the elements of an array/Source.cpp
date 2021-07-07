#include<iostream>
using namespace std;
int main() {
	int input = 0;
	int i = 0;
	int array [1000] = { 0 };
	int array2[1000] = { 0 };
	int arraySize = 0;
	// input array
	cout << " input array , and -1 to stop " << endl;
	for (; input != -1; i++) {
		cin >> input;
		array[i] = input;
	}
	arraySize = i - 1;
	// print array
	cout << "the array is :" << endl << " { " << array[0];
	for (int j = 0; j < (i - 2); j++) {
		cout << " , " << array[j + 1];
		if (((j + 1) % 10) == 0) { cout << endl; }
	}
	cout << "}" << endl;
	cout << "array size =" << arraySize << endl;
	// finding array after delete the repeat
	int counter1, step = 0;
	array2[0] = array[0];
	step = 1;
	for (int i = 1; i < arraySize; i++) {
		counter1 = 0;
		for (int j = 0; j < i; j++) {
			if (array[i] == array2[j]) { counter1++; }
		}
		if (counter1 == 0) { array2[step] = array[i]; step++; }
	}
	// printing array after delete the repeat
	cout << "this is the array after delete the repeat :" << endl << "{" << array2[0];
	for (int j = 1; j < step; j++) {
		cout << " , " << array2[j];
		if (((j + 1) % 10) == 0) { cout << endl; }
	}
	cout << "}" << endl;
	cout << "array size =" << step << endl;
	// arrange the elements of an array :
	int element1 = 0;
	int element2 = 0;
	for (int i = 0; i < step; i++) {
		for (int j = i; j > 0 ; j--) {
			element1 = array2[j-1];
			element2 = array2[j];
			if (element2 < element1) { 
				array2[j-1]   = element2;
				array2[j] = element1;
			}
		}
	}
	// printing array after arrange the elements
	cout << "this is the array arrange the elements :" << endl << "{" << array2[0];
	for (int j = 1; j < step; j++) {
		cout << " , " << array2[j];
		if (((j + 1) % 10) == 0) { cout << endl; }
	}
	cout << "}" << endl;
	cout << "array size =" << step << endl;
	// finding repeat time for each value :
	int counter[1000] = { 0 };
	for (int c = 0; c < step; c++) {
		for (int j = 0; j < arraySize; j++) {
			if (array[j] == array2[c]) { counter[c]++; }
		}
	}
	// printing repeat time for each value :
	for (int i = 0; i < step; i++) {
		cout << "the number " << array2[i] << " is repeated " << counter[i] << "times" << endl;
	}
}
