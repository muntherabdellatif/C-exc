#pragma once
#include<iostream>
using namespace std;
template<class T> class stack {
	// node struct 
	struct Node
	{
		T value;
		Node* next;
	};
	// stack variabile
	Node* Top;
	int size;
public:
	stack();
	bool StackPush(T element);
	bool Stackpop(T* element);
	bool isEmpty();
	bool StackTop(T* element);
	void clearStack();
	bool isFull();
	void PassStack(void(*pf)(T));
	int StackSize();
};
template<class T> stack<T>::stack() {
	Top = NULL;
	size = 0;
}
template<class T> bool stack<T>::StackPush(T element) {
	Node* newNodePtr = new Node;
	if (newNodePtr == NULL) {
		//cout << " can not allocate memeory";
		return 0;
	}
	newNodePtr->value = element;
	newNodePtr->next = Top;
	Top = newNodePtr;
	size++;
	return 1;
}
template<class T> bool stack<T>::Stackpop(T* element) {
	if (!size) { return 0; }
	Node* temp = new Node;
	temp = Top;
	*element = temp->value;
	Top = Top->next;
	temp = temp->next = NULL;
	delete temp;
	size--;
	return 1;
}
template<class T> bool stack<T>::isEmpty() {
	return !size;
}
template<class T> bool stack<T>::StackTop(T* element) {
	if (!size) { return 0; }
	*element = Top->value;
	return 1;
}
template<class T> void stack<T>::clearStack() {
	Node* temp = new Node;
	temp = Top;
	while (size)
	{
		Top = Top->next;
		temp = temp->next = NULL;
		delete temp;
		size--;
	}
}
template<class T> bool stack<T>::isFull() { return 0; }
template<class T> void stack<T>::PassStack(void(*pf)(T)) {
	int n = size;
	Node* temp = new Node;
	temp = Top;
	while (n) {
		(*pf)(temp->value);
		temp = temp->next;
		n--;
	}
}
template<class T> int stack<T>::StackSize() {
	return size;
}
template<class T>
class BinaryTree {
	struct TreeNode {
		T treeEntry;
		TreeNode* left;
		TreeNode* right;
	};
	int size;
	TreeNode* root;
	void ifSymmetric2(TreeNode* tl, TreeNode* tr, bool* b);
	void passPostOrder2(TreeNode* tp, void(*pf)(T));
	void passInOrder2(TreeNode* tp, void(*pf)(T));
	void passPreOrder2(TreeNode* tp, void(*pf)(T));
	void TreeMirror2(TreeNode* np);
	void printPaths2(stack<T>* s, TreeNode* np,void(*pf)(T));
public:
	BinaryTree();
	void insertTree(T element);
	void passPreOrder(void(*pf)(T));
	void passInOrder(void(*pf)(T));
	void passPostOrder(void(*pf)(T));
	bool ifSymmetric();
	void TreeMirror();
	void printPaths(void(*pf)(T));
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
template<class T>void BinaryTree<T>::passPreOrder2(TreeNode* tp, void(*pf)(T)) {
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
template<class T>void BinaryTree<T>::passInOrder2(TreeNode* tp, void(*pf)(T)) {
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
template<class T>void BinaryTree<T>::passPostOrder2(TreeNode* tp, void(*pf)(T)) {
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
template<class T>bool BinaryTree<T>::ifSymmetric() {
	TreeNode* tl = root->left;
	TreeNode* tr = root->right;
	bool b = 1;
	ifSymmetric2(tl, tr, &b);
	return b;
}
template<class T>void BinaryTree<T>::ifSymmetric2(TreeNode* tl, TreeNode* tr, bool* b) {
	if (tl && tr) {
		if (tl->right && !tr->right) { *b = 0; }
		else if (!tl->right && tr->right) { *b = 0; }
		else if (tl->left && !tr->left) { *b = 0; }
		else if (!tl->left && tr->left) { *b = 0; }
		ifSymmetric2(tl->left, tr->left, b);
		ifSymmetric2(tl->right, tr->right, b);
	}
}
template<class T>void BinaryTree<T>::TreeMirror() {
	TreeNode* np = root;
	TreeMirror2(np);
}
template<class T>void BinaryTree<T>::TreeMirror2(TreeNode* np) {
	if (np) {
		TreeNode* np2 = np->left;
		np->left = np->right;
		np->right = np2;
		TreeMirror2(np->left);
		TreeMirror2(np->right);
	}
}
template<class T>void BinaryTree<T>::printPaths(void(*pf)(T)) {
	stack<T> s;
	stack<T>* sp = &s;
	TreeNode* np = root;
	printPaths2(sp,np,pf);
}
template<class T>void BinaryTree<T>::printPaths2(stack<T>* s, TreeNode* np, void(*pf)(T)) {
	static int element;
	if (np) {
		s->StackPush(np->treeEntry);
		printPaths2(s,np->left, pf);
		s->StackTop(&element);
		if (element != np->treeEntry) { s->Stackpop(&element); }
		printPaths2(s,np->right, pf);
		s->StackTop(&element);
		if (element != np->treeEntry) { s->Stackpop(&element); }
	}
	else {
		static int lastelement = 152;
		s->StackTop(&element);
		if (lastelement != element) {
			cout << "NULL";
			s->PassStack(pf);
			cout << endl;
			lastelement = element;
		}
	}
}
