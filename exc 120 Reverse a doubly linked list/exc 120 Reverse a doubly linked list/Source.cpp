#include "Header.h"
using namespace std;
void print(int x) {
	cout << x << "-->";
}
int main() {
	DoublyList<int> l;
	for (int i = 0; i < 10; i++) {
		l.InsertList(i + 1, i);
	}
	l.passList(print);
	cout << "null" << endl;
	l.ReverseList();
	l.passList(print);
	cout << "null" << endl;
}