#include "List.h"
void print(ListEntry e) {
	cout << e << "\t";
}
int main() {
	string S_number = "\n1\t2\t3\t4\t5\t6\t7\t8\n";
	string Line = "-----------------------------------------------------------\n";
	List l; InitioalizeList(&l);
	ListEntry e;
	while (1) {
		cout << " enter 1 to insert , 2 to delete , 3 to destroy list : ";
		int number;
		int pointer;
		cin >> number;
		switch (number){
		case (1): 
			cout << " enter element : ";
			cin >> e;
			cout << "enter postion : ";
			cin >> pointer;
			if (!ListFull(&l)) { 
				if (InsertList(pointer - 1, e, &l)) {
					// cout << e << " is inserted to postion " << pointer << endl;
				}
			}
			break;
		case (2) :
			cout << "enter postion : ";
			cin >> pointer;
			if (!ListFull(&l)) { Deletelist(pointer-1, &e, &l); }
			cout << " the number " << e << " is deleted ." << endl;
			break;
		case (3) :
			DestroyList(&l);
			cout << " the list is destroyed . ";
			break;
		}
		if (TraverseList(&l, print)) {
			// cout << "Traverse List done" << endl;
		};
		cout << S_number << Line;
	}
}