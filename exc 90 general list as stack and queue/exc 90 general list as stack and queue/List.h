#pragma once
#include<iostream>
using namespace std;
#define MaxList 8
#define ListEntry int

typedef struct list {
	ListEntry entry[MaxList];
	int size;
}List;

void InitioalizeList(List* pl);
bool ListEmpth(List* pl);
bool ListFull(List* pl);
int ListSize(List* pl);
void DestroyList(List* pl);
bool InsertList(int iPointer, ListEntry e, List* pl);
bool Deletelist(int dPointer, ListEntry* pe, List* pl);
bool TraverseList(List* pl, void(*pf)(ListEntry));
void RetrieveList(int rPointer, ListEntry* pe, List* pl);
void ReplaceList(int rPointer, ListEntry e, List* pl);