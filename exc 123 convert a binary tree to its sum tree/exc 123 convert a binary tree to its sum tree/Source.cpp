/*
tree :
            5
	    ____|____
       3         7
	___|___   ___|___
    2     4   6     9
 ___|            ___|___
 1               8    10
sum tree:
			50
		____|____
	   7         33
	___|___   ___|___
	1     0   0     18
 ___|            ___|___
 0               0     0
*/
#include "Tree.h"
void print(TreeEntry e) {
	cout << e << "\t";
}
int main() {
	int myarray[10]{ 5,7,3,2,9,10,4,6,1,8 };
	string line = "\n------------------------------------------------\n";
	TreeEntry e;
	Tree t1; InitializeTree(&t1);
	for (int i = 0; i < 10; i++) { InsertTree(&t1, &myarray[i]); }
	cout << line << " Tree :\n"; 
	InOrderRec(&t1, print);
	cout << line << " Sum tree :\n";
	sumTree(&t1); InOrderRec(&t1, print);
}