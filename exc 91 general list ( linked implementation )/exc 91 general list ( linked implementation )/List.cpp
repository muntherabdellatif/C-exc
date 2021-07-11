#include"List.h"

void InitioalizeList(List* pl) {
	pl->head = NULL;
	pl->size = 0;
}
bool ListEmpth(List* pl) {
	return (pl->size == 0);
}
bool ListFull(List* pl) {
	return 0;
}
int ListSize(List* pl) {
	return pl->size;
}
void DestroyList(List* pl) {
	NodeList* pn=NULL;
	while (pn) {
		pn = pl->head->next;
		free(pl->head);
		pl->head = pn;
	}
	pn = NULL; pl->head = NULL;
	pl->size = 0;
}
bool InsertList(int iPointer, ListEntry e, List* pl) {
		NodeList* p, * q;
		int i;
		p = (NodeList*)malloc(sizeof(NodeList));
		p->entry = e;
		p->next = NULL;
		if (iPointer == 0) {
			p->next = pl->head;
			pl->head = p;
		}
		else {
			for (q = pl->head, i = 0; i < iPointer - 1; i++) {
				q = q->next;
			}
			p->next = q->next;
			q->next = p;
		}
		pl->size++;
	return 1;
}
bool Deletelist(int dPointer, ListEntry* pe, List* pl) {
	if (ListSize != 0) {
		int i;
		NodeList* q, * tmp;
		if (dPointer == 0) {
			*pe = pl->head->entry;
			tmp = pl->head->next;
			free(pl->head);
			pl->head = tmp;
		}
		else {
			for (q = pl->head, i = 0; i < dPointer - 1; i++) {
				q = q->next;
			}
			*pe = q->next->entry;
			tmp = q->next->next;
			free(q->next);
			q->next = tmp;
		}
		pl->size--;
		return 1;
	}
	return 0;
}
bool TraverseList(List* pl, void(*pf)(ListEntry)) {
	if (ListSize(pl) > 0) {
		NodeList* pn = pl->head;
		while (pn) {
			(*pf)(pn->entry);
			pn = pn->next;
		}
		return 1;
	}
	return 0;
}
bool RetrieveList(int rPointer, ListEntry* pe, List* pl) {
	if (ListSize != 0) {
		int i;
		NodeList* q ;
		for (q = pl->head, i = 0; i < rPointer; i++) {
				q = q->next;
		}
		*pe = q->entry;
		return 1;
	}
	return 0;
}
bool ReplaceList(int rPointer, ListEntry e, List* pl) {
	if (ListSize != 0) {
		int i;
		NodeList* q;
	    for (q = pl->head, i = 0; i < rPointer; i++) {
		q = q->next;
		}
	    q->entry=e;
	    return 1;
	}
	return 0;
}