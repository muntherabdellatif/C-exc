#include"Header.h"
void print(int x) {
	cout << x << "\t";
}
int main() {
	int tree[10] = { 5,3,2,4,1,10,8,12,7,9 };
	BinaryTree<int> bt1;
	for (int i = 0; i < 10; i++) { bt1.insertInOrderTree(tree[i]); }
	cout << " tree inserted in order : " << endl;
	bt1.print2D();
	BinaryTree<int> bt2;
	for (int i = 0; i < 10; i++) { bt2.insertTree(tree[i]); }
	cout << " tree inserted not in order : " << endl;
	bt2.print2D();
	}