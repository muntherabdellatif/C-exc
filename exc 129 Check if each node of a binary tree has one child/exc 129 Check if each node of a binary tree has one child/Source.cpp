#include"Header.h"
using namespace std;
void print(int x) {
	cout << x << "\t";
}
int main() {
	int tree[4][6] = { { 7,8,11,12,15,18 },  //each elelment have one child
					   { 7,8,20,15,11,12 },  //each elelment have one child
					   { 11,8,7,12,15,18 },  //each elelment not have one child ( 2 or 1 )
					   { 7,8,20,12,11,15 }}; //each elelment not have one child ( 2 or 1 )
	BinaryTree<int> bt[4];
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			bt[j].insertTree(tree[j][i]);
		}
	}
	for (int j = 0; j < 4; j++) {
		cout << " tree "<< j << " : " << endl;
		bt[j].passInOrder(print); cout << endl;
		if (bt[j].ifNodesHaveOneChild()) {
			cout << "tree " << j << "each elelment have one child "<<endl;
		}
		else { cout << "tree " << j << "each elelment not have one child ( 2 or 1 ) "<<endl; }
	}
}