#include<iostream>
using namespace std;
void main() {
	int input = 0;
	int array[1000] = { 0 };
	int array2[1000] = { 0 };
	int i = 0;
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
	int counter,step=0;
	array2[0] = array[0];
	step = 1;
	for (int i = 1; i < arraySize; i++) {
		counter = 0;
		for (int j = 0; j < i; j++) {
			if (array[i] == array2[j]) { counter++; }
		}
		if (counter == 0) { array2[step] = array[i]; step++; }
	}
	// printing array after delete the repeat
	cout << "this is the array after delete the repeat :" << endl<<"{"<<array2[0];
	for (int j = 1; j < step; j++) {
		cout << " , " << array2[j];
		if (((j + 1) % 10) == 0) { cout << endl; }
	}
	cout << "}" << endl;
	cout << "array size =" << step << endl;
}