//
// Created by HELLO_WORLD on 2/11/2023.
//

#ifndef DATASTRUCTURE_LINKEDSTACK_H
#define DATASTRUCTURE_LINKEDSTACK_H
//#include "../List/LinkedList.h"
#include "../std.h"
#define ElemType int
typedef struct LNode{
    ElemType elem;
    LNode *next;
}LNode,*LinkList;
Status InitStack(LinkList &S);
Status GetTop(LinkList S,ElemType &e);
Status Push(LinkList &S,ElemType e);
bool StackEmpty(LinkList S);
#endif //DATASTRUCTURE_LINKEDSTACK_H
