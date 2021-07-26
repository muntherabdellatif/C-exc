#include"Header.h"
void print(int x) {
	cout << x << "\t";
}
int main() {
	int tree[10] = { 5,3,2,4,1,10,8,12,7,9};
	BinaryTree<int> bt;
	for (int i = 0; i < 10; i++) {bt.insertTree(tree[i]);}
	cout << " tree : " << endl;
	bt.print2D();
}