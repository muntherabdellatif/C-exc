#include "Header.h"
using namespace std;
void print(int x) {
	cout << x << "-->";
}
int main() {
	List<int> l;
	for (int i = 0; i < 10; i++) {
		l.PushList(i + 1, i);
	}
	l.PassList(print);
	cout << "null" << endl;
	l.MoveLatoFr();
	l.PassList(print);
	cout << "null" << endl;
	l.MoveLatoFr();
	l.PassList(print);
	cout << "null" << endl;
}