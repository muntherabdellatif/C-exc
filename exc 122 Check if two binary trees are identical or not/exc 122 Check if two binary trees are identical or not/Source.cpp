#include "Tree.h"
void print(TreeEntry e) {
	cout << e << "\t";
}
int main() {
	string line = "\n------------------------------------------------\n";
	TreeEntry e;
	Tree t1; InitializeTree(&t1);
	for (int i = 1; i < 11; i++) { InsertTree(&t1,&i); }
	Tree t2; InitializeTree(&t2);
	for (int i = 1; i < 11; i++) { InsertTree(&t2, &i); }
	Tree t3; InitializeTree(&t3);
	for (int i = 1; i < 10; i++) { InsertTree(&t3, &i); }
	Tree t4; InitializeTree(&t4);
	for (int i = 2; i < 12; i++)  { InsertTree(&t4, &i); }
	cout << line << " tree 1:\n"; InOrderRec(&t1, print);
	cout << line << " tree 2:\n"; InOrderRec(&t2, print);
	cout << line << " tree 3:\n"; InOrderRec(&t3, print);
	cout << line << " tree 4:\n"; InOrderRec(&t4, print);
	cout << line;
	if (ifIdentical(&t1, &t2)){
		cout << "tree 1 and tree 2 are indentical\n";}
	else{
		cout << "tree 1 and tree 2 are not indentical\n"; }
	if (ifIdentical(&t1, &t3)) {
		cout << "tree 1 and tree 3 are indentical\n"; }
	else {
		cout << "tree 1 and tree 3 are not indentical\n"; }
	if (ifIdentical(&t1, &t4)) {
		cout << "tree 1 and tree 4 are indentical\n"; }
	else {
		cout << "tree 1 and tree 4 are not indentical\n"; }
}