#include<iostream>
#include<iomanip>
using namespace std;
int inputArray(int array[]);
void print(int array[], int size);
void printStar(int array1[], int array2[], int size);
void sort(int array[] , int size);
int deleteRepeat(int array1[], int array2[], int size);
void findingRepeat(int counter[],int array1[],int array2[],int size1,int size2);
int main() {
	int arraySize = 0;
	int array[1000] = { 0 } , array2[1000] = { 0 } ,array3[21] = { 0 };
	// input array
	cout << " input array , and -1 to stop " << endl;
	arraySize= inputArray(array);
	// print array
	cout << "the array is :" << endl;
	print(array, arraySize);
	// finding array after delete the repeat
	int step = deleteRepeat(array, array2, arraySize);
	// printing array after delete the repeat
	cout << "this is the array after delete the repeat :" << endl ;
	print(array2, step);
	// arrange the elements of an array :
	sort(array2, step);
	// printing array after arrange the elements
	cout << "this is the array arrange the elements :" << endl;
	print(array2, step);
	// finding repeat time for each value :
	int counter[1000] = { 0 };
	findingRepeat(counter, array , array2, arraySize, step);
	// printing repeat time for each value :
	for (int i = 0; i < step; i++) {
		cout << "the number " << array2[i] << " is repeated " << counter[i] << "times" << endl;
	}
	// printing how match numbers (between 0 and 20 ) repeat as stars (*)
	cout << "printing how match numbers (between 0 and 20 ) repeat as stars (*)" << endl;
	printStar(array, array3, arraySize);
}
int inputArray(int array[]) {
	int input = 0, i = 0 ;
	for (; input != -1; i++) {
		cin >> input;
		array[i] = input;
	}
	return ( i - 1 );
}
void print(int array[], int size) {
	cout << " { " << array[0];
	for (int j = 0; j < (size - 1); j++) {
		cout << " , " << array[j + 1];
		if (((j + 1) % 10) == 0) { cout << endl; }
	}
	cout << "}" << endl;
	cout << "array size =" << size << endl;
}
void printStar(int array1[], int array2[], int size) {
	for (int i = 0; i < size; i++) {
		array2[array1[i]]++;
	}
	for (int i = 0; i < 21; i++) {
		cout << setfill('0') << setw(2) << i << " :";
		for (int j = 0; j < array2[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
void sort(int array[] ,int size) {
	int element1 = 0;
	int element2 = 0;
	for (int i = 0; i < size; i++) {
		for (int j = i; j > 0; j--) {
			element1 = array[j - 1];
			element2 = array[j];
			if (element2 < element1) {
				array[j - 1] = element2;
				array[j] = element1;
			}
		}
	}
}
int deleteRepeat(int array1[], int array2[], int size) {
	int step = 0;
	int counter1 = 0;
	array2[0] = array1[0];
	step = 1;
	for (int i = 1; i < size; i++) {
		counter1 = 0;
		for (int j = 0; j < i; j++) {
			if (array1[i] == array2[j]) { counter1++; }
		}
		if (counter1 == 0) { array2[step] = array1[i]; step++; }
	}
	return step;
}
void findingRepeat(int counter[], int array1[], int array2[], int size1, int size2) {
	for (int c = 0; c < size2; c++) {
		for (int j = 0; j <size1; j++) {
			if (array1[j] == array2[c]) { counter[c]++; }
		}
	}
}