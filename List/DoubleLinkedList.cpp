//
// Created by HELLO_WORLD on 2/8/2023.
//
#include <cstdlib>
#include <cstdio>
#include "DoubleLinkedList.h"
Status DoubleLinkedListInsert(BuLNodeLinkList &L,int i,ElemType e){
    BuLNode *p=L;
    int j=0;
    while(p&&j<i-1){
        p=p->next;
        ++j;
    }
    if(!p||j>i-1)return FAIL;
    BuLNode *s=(BuLNode *) malloc(sizeof(BuLNode));
    s->elem=e;
    s->pre=p->pre;
    p->pre->next=s;
    s->next=p;
    p->pre=s;
    return OK;
}
Status DoubleLinkedListDelete(BuLNodeLinkList &L,int i,ElemType &e){
    BuLNode *p=L;
    int j=0;
    while (p&&j<i-1){//找到前驱节点
        p=p->next;
        ++j;
    }
    if(!p&&j>i-1)return FAIL;
    e=p->next->elem;
    p->next->pre=p->pre;
    p->pre->next=p->next;
    free(p);
    return OK;

}
