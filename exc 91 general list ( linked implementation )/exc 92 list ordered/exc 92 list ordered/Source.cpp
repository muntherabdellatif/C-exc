#include "List.h"
void listOrdered(ListEntry e, list* lp) {
	int size = ListSize(lp);
	ListEntry counter=0;
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
int main() {
	string line = "\n--------------------------------\n";
	List l;
	InitioalizeList(&l);
	while (1) {
		ListEntry e;
		cout << " insert number to list :";
		cin >> e;
		listOrdered(e, &l);
		TraverseList(&l, print);
		cout << line;
	}
}