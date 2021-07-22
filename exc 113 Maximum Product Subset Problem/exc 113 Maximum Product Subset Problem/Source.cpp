/*
example:
Input:  A[] = { -6, 4, -5, 8, -10, 0, 8 }

Output: The maximum product of a subset is 15360

The subset with the maximum product of its elements is { -6, 4, 8, -10, 8 }
*/
#include<iostream>
#include"Header.h"
using namespace std;
void p_pruduct(stack<int> *sp, long int *product) {
	int size = (*sp).StackSize();
	int element = 0;
	for (int i = 0; i < size; i++) {
		(*sp).Stackpop(&element);
		*product = *product * element;
	}
}
void n_pruduct(stack<int>* sp, stack<int>* used , long int* product) {
	int size = (*sp).StackSize();
	int element1 = 0;
	int element2 = 0;
	if (size % 2 == 1) {
		(*sp).Stackpop(&element1);
		for (int i = 1; i < size; i++) {
			(*sp).Stackpop(&element2);
			if (element1 > element2) {
				*product = *product * element2;
				(*used).StackPush(element2);
			}
			else {
				*product = *product * element1;
				(*used).StackPush(element1);
				element1 = element2;
			}
		}
	}
	else { p_pruduct(sp, product); }
}
void print(int x) {
	cout << x << "\t";
}
int main() {
	stack<int> sp;
	stack<int> sn;
	stack<int> used;
	int size ,i=0, number , p_number=0 , n_number =0 ;
	long int product = 1;
	cout << "enter array size:";
	cin >> size;
	int* Myarray = new int[size];
	cout << "enter array elemrnt" << endl;
	// geting number from user
	while (i < size) {
		cout << i << " :";
		cin >> number;
		Myarray[i++] = number;
		if (number > 1) { sp.StackPush(number); p_number++; used.StackPush(number); }
		else if (number < -1) { sn.StackPush(number); n_number++; }
	}
	// the product of positave and nigative number :
	p_pruduct(&sp, &product);
	n_pruduct(&sn,&used,&product);
	// the used number 
	cout << " the used number :";
	used.PassStack(print);
	cout << "\nthe used number product :"<< product;
}