#include"Header.h"
using namespace std;
void print(int x) {
	cout << x << "\t";
}
int main() {
	BinaryTree<int> bt;
	while (1) {
		int x;
		cout << "\n insert element :";
		cin >> x;
		bt.insertTree(x);
		cout << " in_order :" << endl;
		bt.passInOrder(print);
		cout << "\n pre_order :" << endl;
		bt.passPreOrder(print);
		cout << "\n post_order :" << endl;
		bt.passPostOrder(print);
	}
}