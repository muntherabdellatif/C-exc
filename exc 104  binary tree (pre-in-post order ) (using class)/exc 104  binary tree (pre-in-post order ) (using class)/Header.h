#pragma once
#include<iostream>
template<class T>
class BinaryTree {
	struct TreeNode {
		T treeEntry;
		TreeNode* left;
		TreeNode* right;
	};
	int size;
	TreeNode* root;
public:
	BinaryTree();
	void insertTree(T element);
	void passPreOrder(void(*pf)(T));
	void passPreOrder2(TreeNode* tp,void(*pf)(T));
	void passInOrder(void(*pf)(T));
	void passInOrder2(TreeNode* tp,void(*pf)(T));
	void passPostOrder(void(*pf)(T));
	void passPostOrder2(TreeNode* tp,void(*pf)(T));
};
template<class T> BinaryTree<T>::BinaryTree() {
	size = 0; root = NULL;
}
template<class T> void BinaryTree<T>::insertTree(T element) {
	// creat new node
	TreeNode* tp = new TreeNode;
	if (size == 0) { // insert tree root
		tp->treeEntry = element;
		root = tp;
		tp->left = NULL; tp->right = NULL;
	}
	else { // insert ather tree node
		TreeNode* np;
		np = root;
		bool found = 0;
		while (!found) {
			if (element > np->treeEntry) {
				if (np->right != NULL) {
					np = np->right;
				}
				else { found = 1; np->right = tp; }
			}
			else if (element < np->treeEntry) {
				if (np->left != NULL) {
					np = np->left;
				}
				else { found = 1; np->left = tp; }
			}
		}
		tp->treeEntry = element; tp->left = NULL; tp->right = NULL;
	}
	size++;
}
template<class T>void BinaryTree<T>::passPreOrder2(TreeNode* tp,void(*pf)(T)) {
	if (tp) {
		(*pf)(tp->treeEntry);
		passPreOrder2(tp->left, pf);
		passPreOrder2(tp->right, pf);
	}
}
template<class T>void BinaryTree<T>::passPreOrder(void(*pf)(T)) {
	TreeNode* np = root;
	passPreOrder2(np, pf);
}
template<class T>void BinaryTree<T>::passInOrder2(TreeNode* tp,void(*pf)(T)) {
		if (tp) {
			passInOrder2(tp->left, pf);
			(*pf)(tp->treeEntry);
			passInOrder2(tp->right, pf);
		}
}
template<class T>void BinaryTree<T>::passInOrder(void(*pf)(T)) {
	TreeNode* np = root;
	passInOrder2(np, pf);
}
template<class T>void BinaryTree<T>::passPostOrder2(TreeNode* tp,void(*pf)(T)) {
	if (tp) {
		passPostOrder2(tp->left, pf);
		passPostOrder2(tp->right, pf);
		(*pf)(tp->treeEntry);
	}
}
template<class T>void BinaryTree<T>::passPostOrder(void(*pf)(T)) {
	TreeNode* np = root;
	passPostOrder2(np, pf);
}