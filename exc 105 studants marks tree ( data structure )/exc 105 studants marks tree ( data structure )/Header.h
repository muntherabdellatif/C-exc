#pragma once
#include<iostream>
using namespace std;
class BinaryTree {
	struct TreeNode {
		int Mark;
		string Name;
		TreeNode* left;
		TreeNode* right;
	};
	int size;
	TreeNode* root;
public:
	BinaryTree();
	void insertTree(int mark , string name);
	void passInOrder(void(*pf)(string, int));
	void passInOrder2(TreeNode* tp, void(*pf)(string, int));
};
BinaryTree::BinaryTree() {
	size = 0; root = NULL;
}
void BinaryTree::insertTree(int mark, string name) {
	// creat new node
	TreeNode* tp = new TreeNode;
	if (size == 0) { // insert tree root
		tp->Mark = mark;
		tp->Name = name;
		root = tp;
		tp->left = NULL; tp->right = NULL;
	}
	else { // insert ather tree node
		TreeNode* np;
		np = root;
		bool found = 0;
		while (!found) {
			if (mark > np->Mark) {
				if (np->right != NULL) {
					np = np->right;
				}
				else { found = 1; np->right = tp; }
			}
			else if (mark < np->Mark) {
				if (np->left != NULL) {
					np = np->left;
				}
				else { found = 1; np->left = tp; }
			}
		}
		tp->Mark = mark;
		tp->Name = name;
		tp->left = NULL;
		tp->right = NULL;
	}
	size++;
}
void BinaryTree::passInOrder2(TreeNode* tp, void(*pf)(string ,int)) {
	if (tp) {
		passInOrder2(tp->left, pf);
		(*pf)(tp->Name,tp->Mark);
		passInOrder2(tp->right, pf);
	}
}
void BinaryTree::passInOrder(void(*pf)(string, int)) {
	TreeNode* np = root;
	passInOrder2(np, pf);
}