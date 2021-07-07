#include<iostream>
using namespace std;
int main() {
	float size;
	cout << "enter the number of marks you want to calcolate the average for it :" << endl;
	cin >> size;
	float sum =0 ;
	float* marks = new float[size] ;
	for (int i = 0; i < size; i++) {
		cout << "mark " << (i + 1) << " is :";
		cin >> marks[i];
	}
	for (int i = 0; i < size; i++) {
		sum += marks[i];
	}
	float average = sum / size;
	cout << "the anverage is " << average;
	delete[] marks;
	marks = NULL;
}