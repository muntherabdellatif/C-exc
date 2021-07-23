#include "Tree.h"
void InitializeTree(Tree* pt) {
	*pt = NULL;
}
void ClearTreeAux(Tree* pt) {
	if (*pt) {
		ClearTree(&(*pt)->left);
		ClearTree(&(*pt)->right);
		free(*pt);
	}
}
void ClearTree(Tree* pt) {
	ClearTreeAux(pt);
	*pt = NULL;
}
int TreeSize(Tree* pt) {
	if (!(*pt)) {
		return 0;
	}
	return (1 + TreeSize(&(*pt)->left) + TreeSize(&(*pt)->right));
}
int TreeDepth(Tree* pt) {
	if (!(*pt)) {
		return 0;
	}
	int a = TreeDepth(&(*pt)->left);
	int b = TreeDepth(&(*pt)->left);
	return (a > b ? 1 + a : 1 + b);
}
void InOrderRec(Tree* pt, void(*pf)(TreeEntry)) {
	if (*pt) {
		InOrderRec(&(*pt)->left, pf);
		(*pf)((*pt)->entry);
		InOrderRec(&(*pt)->right, pf);
	}
}
bool ifIdentical2(Tree* pt1, Tree* pt2 ) {
	static bool b = 1;
	if (*pt1 && *pt2) {
		ifIdentical2(&(*pt1)->left, &(*pt2)->left);
		if ((*pt1)->entry != (*pt2)->entry) { 
			b = 0;
		}
		ifIdentical2(&(*pt1)->right, &(*pt1)->right);
	}
	return b;
}
bool ifIdentical(Tree* pt1, Tree* pt2) {
	if (TreeSize(pt1) == TreeSize(pt2)) {
		return ifIdentical2(pt1, pt2);
    }
	return 0;
}
bool TreeEmpty(Tree* pt) {
	return (!*pt);
}
bool TreeFull(Tree* pt) {
	return 0;
}
int InsertTree(Tree* pt, TreeEntry* pe) {
	static int depth = 0;
	if (!*pt) {
		*pt = (Tree)malloc(sizeof(TreeNode));
		(*pt)->entry = *pe;
		(*pt)->left = NULL;
		(*pt)->right = NULL;
		return depth;
	}
	else if (*pe < ((*pt)->entry)) {
		InsertTree(&(*pt)->left, pe);
	}
	else {
		InsertTree(&(*pt)->right, pe);
	}
	depth++;
}
bool findElementRec(Tree* pt, TreeEntry* pe, int element) {
	if (!*pt) {
		return 0;
	}
	if ((*pt)->entry == element) {
		*(pe) = (*pt)->entry;
		return 1;
	}
	else if (element < (*pt)->entry) {
		return findElement(&(*pt)->left, pe, element);
	}
	else {
		return findElement(&(*pt)->right, pe, element);
	}
}
bool findElement(Tree* pt, TreeEntry* pe, int element) {
	bool found = 0;
	TreeNode* p = *pt;
	while (p && !found) {
		if (element < p->entry) {
			p = p->left;
		}
		else { p = p->right; }
		found = (p->entry == element);
	}
	return found;
}
bool DeleteItemTree(Tree* pt, TreeEntry* pe, int element) {
	bool found = 0;
	TreeNode* q = *pt, * r = NULL;
	while (q && !(found = (q->entry == element))) {
		r = q;
		if (element < q->entry) {
			q = q->left;
		}
		else {
			q = q->right;
		}
	}
	if (found) {
		(*pe) = q->entry;
		if (!r) { // delete the root
			DeleteNodeTree(pt);
		}
		else if (element < r->entry) {
			DeleteNodeTree(&r->left);
		}
		else {
			DeleteNodeTree(&r->right);
		}
	}
	return found;
}
void DeleteNodeTree(Tree* pt) {
	TreeNode* q = *pt, * r;
	if (!(*pt)->left) { // no node in left side of tree
		(*pt) = (*pt)->right;
	}
	else if (!(*pt)->right) { // no node in right side of tree
		(*pt) = (*pt)->left;
	}
	else { // there is node in both sides of tree
		(*pt) = (*pt)->right;
		for (r = q->right; r->left; r = r->left);
		r->left = q->left; // connect 2 trees 
	}
	free(q);
}