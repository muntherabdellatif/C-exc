/*
example :
Input:  AA —> XYZ —> CD —> C —> ZYX —> AA —> null
Output: String AAXYZCDCZYXAA is palindrome


Input:  A —> B —> C —> DC —> B —> null
Output: String ABCDCB is not a palindrome
*/
#include"Header.h"
using namespace std;
void TakingApart( List<string> *l, List<char>* l2) {
	string element;
	int counter =0 ;
	int size = (*l).ListSize();
	for (int i = 0; i < size; i++) {
		(*l).GetList(&element, i);
		for (int j = 0; j < element.length(); j++) {
			(*l2).PushList(element[j], counter);
			counter++;
		}
	}
}
bool isPalindromic(List<char>* l2) {
	char element1, element2;
	int size = (*l2).ListSize();
	for (int i = 0; i < ((size/2)+(size%2)); i++) {
		(*l2).GetList(&element1, i);
		(*l2).GetList(&element2, size-1-i);
		if (element1 != element2) { return 0; }
	}
	return 1;
}
void S_print(string s) {
	cout << s << " -> ";
}
void C_print(char s) {
	cout << s << " -> ";
}
int main() {
	//string MyString[] = { "AA","XYZ","CD","C","ZYX","AA" }; int size = 6;
	string MyString[] = { "A","B","C","DC","B" }; int size = 5;
	List<string> l;
	List<char> l2;
	for (int i = 0; i < size; i++) {l.PushList(MyString[i], i);}
	l.PassList(S_print);
	cout << "NULL\n";
	TakingApart(&l, &l2);
	l2.PassList(C_print);
	cout << "NULL\n";
	if (isPalindromic(&l2)) {
		cout << "String  is palindrome\n";
	}
	else{ cout << "String  is not palindrome\n"; }
}