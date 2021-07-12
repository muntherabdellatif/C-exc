#pragma once
#include<iostream>
using namespace std;
#define TreeEntry int

typedef struct treeNode {
	TreeEntry entry;
	struct treeNode* left, * right;
}TreeNode;

typedef TreeNode *Tree;
void InitializeTree(Tree* pt);
void ClearTree(Tree* pt);
void ClearTreeAux(Tree* pt);
int TreeSize(Tree* pt);
int TreeDepth(Tree* pt);
void PreOrderRec(Tree* pt, void(*pf)(TreeEntry));
void InOrderRec(Tree* pt, void(*pf)(TreeEntry));
void PostOrderRec(Tree* pt, void(*pf)(TreeEntry));
bool TreeEmpty(Tree* pt);
bool TreeFull(Tree* pt);
int InsertTree(Tree* pt, TreeEntry* pe);
bool findElementRec(Tree* pt, TreeEntry* pe, int pos);
bool findElement(Tree* pt, TreeEntry* pe, int pos);