#include<iostream>
using namespace std;
void main() {
	int input = 0;
	int array[1000] = { 0 };
	int i = 0;
	int arraySize = 0;
	cout << " input studants degrees , and -1 to stop " << endl;
	for (; input != -1; i++) {
		cin >> input;
		array[i] = input;
	}
	arraySize = i - 1;
	cout << "the degrees is :" << endl << " { " << array[0];
	for (int j = 0; j < (i - 2); j++) {
		cout << " , " << array[j + 1];
		if (((j + 1) % 10) == 0) { cout << endl; }
	}
	cout << "}" << endl;
	cout << "array size =" << arraySize << endl;
	cout << "input numer to see how match it repeat :";
	cin >> input;
	int counter=0;
	for (int c = 0; c < arraySize; c++) {
		if (array[c] == input) { counter++; }
	}
	cout << "the count is :" << counter;
}