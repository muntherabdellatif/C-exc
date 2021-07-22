/*
* example :
1 —> 2 —> 3 —> 4 —> 5 —> 6 —> 7 —> 8 —> 9 —> 10 —> null

If m = 1, n = 3

1 —> (2 —> 3 —> 4) —> 5 —> (6 —> 7 —> 8) —> 9 —> (10 —> null
1 —> 5 —> 9 —> null


If m = 2, n = 2

1 —> 2 —> (3 —> 4 )—> 5 —> 6 —>( 7 —> 8 )—> 9 —> 10 —>( null
1 —> 2 —> 5 —> 6 —> 9 —> 10 —> null
*/
#include "Header.h"
using namespace std;
void print(int x) {
	cout << x << "-->";
}
int main() {
	List<int> l;
	for (int i = 0; i < 10; i++) {
		l.PushList(i + 1,i);
	}
	l.PassList(print);
	cout <<"null" << endl;
	l.deleteListMN(1,3);
	l.PassList(print);
	cout <<"null" << endl;
}

