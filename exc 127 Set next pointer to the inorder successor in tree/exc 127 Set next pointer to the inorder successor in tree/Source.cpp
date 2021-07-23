/*
example:
The inorder successor of node 2 is 3
The inorder successor of node 3 is 4
The inorder successor of node 4 is 5
The inorder successor of node 5 is 6
The inorder successor of node 6 is 7
The inorder successor of node 7 is 8
The inorder successor of node 8 is null
*/
#include "Header.h"
using namespace std;
void print(int x) {
    static int last=0 ;
    static int current;
    current = x;
    if (current==-1){
        cout << " The inorder successor of node " << last << " is null " << "\n";
    }
    else {
        if (last != 0) {
            cout << " The inorder successor of node " << last << " is " << current << "\n";
        }
    }
    last = current;
}

int main() {
    int element[7] = { 5,7,3,8,6,4,2 };
    BinaryTree<int> bt;
    for (int i = 0; i < 7; i++) { bt.insertTree(element[i]); }
    cout << " tree : \n";
    bt.passInOrder(print);
}