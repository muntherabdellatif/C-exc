#include<iostream>
using namespace std;
int print(int array[], int size , bool (*functionptr)(int) );
bool evenNumber(int a);
bool oddNumber(int a);
bool allNumber(int a);
void main() {
	int size, counter[3] = { 0 };
	cout << " enter array size :";
	cin >> size;
	int* myArray = new int[size];
	cout << "enter array element :" << endl;
	for (int i = 0; i < size; i++) {
		cout << "Array [" << i << "]=";
		cin >> myArray[i];
	}
	bool (*functionptr)(int) = allNumber;
	cout << "All number in array :" << endl;
	counter[0]=print(myArray, size, functionptr);
	functionptr=oddNumber;
	cout << "Odd number in array :" << endl;
	counter[1]=print(myArray, size, functionptr);
	functionptr = evenNumber;
	cout << "even number in array :" << endl;
	counter[2]=print(myArray, size, functionptr);
	cout << "you have entered " << counter[0] << " numbers ";
	cout << counter[1] << " numbers is Odd ";
	cout <<"and "<< counter[2] << " numbers is even " << endl;
}
int print(int array[], int size , bool (*functionptr)(int)) {
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (functionptr(array[i])) {
			cout << array[i] << "\t"; counter++;
		}
	}
	cout << endl;
	return counter;
}
bool evenNumber(int a) {
	if (a % 2 == 0) { return true; }
	return false;
}
bool oddNumber(int a) {
	if (a % 2 == 1) { return true; }
	return false;
}
bool allNumber(int a) {
	return true;
}