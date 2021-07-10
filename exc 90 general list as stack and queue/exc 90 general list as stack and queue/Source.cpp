#include "List.h"
void print(ListEntry e) {
	cout << e << "\t";
}
int main() {
	string S_number ="\n1\t2\t3\t4\t5\t6\t7\t8\t\n";
	string S_line ="-------------------------------------------------------\n";
	ListEntry e;
	List l; InitioalizeList(&l);
	cout << "enter 1 to use list as stack and 2 to use it as queue :";
	cin >> e;
	switch (e) {
	case (1):  // srack
		while (e!=-2) {
			cout << " enter -1 to pup , -2 to finisting and any positive number to push it :";
			cin >> e;
			switch (e) {
			case(-1):
				if (!ListEmpth(&l)) { Deletelist(ListSize(&l), &e, &l); }
				break;
			case(-2):
				break;
			default:
				if (!ListFull(&l)) { InsertList(ListSize(&l), e, &l); }
				break;
			}
			TraverseList(&l, print);
			cout << S_number << S_line;
		}
		break;
	case (2):  // queue
		while (e!=-2) {
			cout << " enter -1 to pup , -2 to finisting and any positive number to push it :";
			cin >> e;
			switch (e) {
			case(-1):
				if (!ListEmpth(&l)) { Deletelist(0, &e, &l); }
				break;
			case(-2):
				break;
			default:
				if (!ListFull(&l)) { InsertList(ListSize(&l), e, &l); }
				break;
			}
			TraverseList(&l, print);
			cout << S_number << S_line;
		}
		break;
	}
}