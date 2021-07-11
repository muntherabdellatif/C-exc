#include "List.h"
void listOrdered(ListEntry e, list* lp) {
	int size = ListSize(lp);
	ListEntry counter = 0;
	ListEntry j;
	for (int i = 0; i < size; i++) {
		RetrieveList(i, &j, lp);
		if (j < e) {
			counter++;
		}
	}
	InsertList(counter, e, lp);
}
void print(ListEntry e) {
	cout << e << "\t";
}
int binarySearch(ListEntry e, list* lp) {
	int location;
	int  size = ListSize(lp);
	int med = size / 2;
    int  j;
	ListEntry max=size, min=0;
	while (1) {
		RetrieveList(med, &j, lp);
		if (e == j) { location = med; return location; }
		else if (e > j) { min = med; med = med + (max - min) / 2; }
		else if (e < j) { max = med; med = med - (max - min) / 2; }

		if (max==med || min==med){ return -1; }
	}
}
int main() {
	string line = "\n--------------------------------\n";
	List l;
	InitioalizeList(&l);
	cout << " enter the size of list :";
	int n = 0;
	cin >> n;
	ListEntry e;
	while (n) {
		cout << " insert number to list :";
		cin >> e;
		listOrdered(e, &l);
		TraverseList(&l, print);
		cout << line;
		n--;
	}
	cout << " enter number to find it in list ";
	cin >> e;
	int location= binarySearch(e,&l);
	if (location == -1) { cout << " the number not found ." << endl; }
	else{ cout << " the number is in location :"<< location+1 << endl; }
}