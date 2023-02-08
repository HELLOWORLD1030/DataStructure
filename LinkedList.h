//
// Created by HELLO_WORLD on 2/6/2023.
//

#ifndef DATASTRUCTURE_LINKEDLIST_H
#define DATASTRUCTURE_LINKEDLIST_H
#include"std.h"
#define ElemType int
typedef struct LNode{
    ElemType elem;
    LNode *next;
}LNode,*LinkList;
Status InitLinkedList(LinkList &L,int n,...);
void Print(LinkList L);
Status GetElem(LinkList L,int i,ElemType &e);
Status LinkListInsert(LinkList &L,int i,ElemType e);
Status LinkListDelete(LinkList &L,int i,ElemType &e);
Status MergeList(LinkList &La,LinkList &Lb,LinkList &Lc);
int sum(int num,...);
#endif //DATASTRUCTURE_LINKEDLIST_H
