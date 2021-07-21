/*
example:
Input:  A[] = { -6, 4, -5, 8, -10, 0, 8 }

Output: The maximum product of a subset is 15360

The subset with the maximum product of its elements is { -6, 4, 8, -10, 8 }
*/
#include<iostream>
using namespace std;
int main() {
	int size ,i=0, number;
	cout << "enter array size:";
	cin >> size;
	int* Myarray = new int[size];
	cout << "enter array elemrnt" << endl;
	while (i < size) {
		cout << i << " :";
		cin >> number;
		Myarray[i++] = number;
	}
}