//
// Created by HELLO_WORLD on 2/8/2023.
//

#ifndef DATASTRUCTURE_DOUBLELINKEDLIST_H
#define DATASTRUCTURE_DOUBLELINKEDLIST_H
#include "../std.h"
#define ElemType int
typedef struct BuLNode{
    ElemType elem;
    BuLNode *pre;
    BuLNode *next;
}BuLNode ,*BuLNodeLinkList;



Status DoubleLinkedListInsert(BuLNodeLinkList &L,int i,ElemType e);
Status DoubleLinkedListDelete(BuLNodeLinkList &L,int i,ElemType &e);
#endif //DATASTRUCTURE_DOUBLELINKEDLIST_H
