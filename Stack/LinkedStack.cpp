//
// Created by HELLO_WORLD on 2/11/2023.
//

#include "LinkedStack.h"
#include<cstdlib>
Status InitStack(LinkList &S){
    S=(LinkList) malloc(sizeof(LNode));
    if(!S)return FAIL;
    S->next= nullptr;
    return OK;
}
Status Push(LinkList &S,ElemType e){
    LNode* p=(LNode*) malloc(sizeof(LNode));
    if(!p)return FAIL;
    p->elem=e;
    p->next=S->next;
    S->next=p;
    return OK;
}
Status GetTop(LinkList S,ElemType &e){
    if(S->next== nullptr)return FAIL;
    LNode *p=S->next;
    e=p->elem;
    return OK;
}
Status Pop(LinkList &S,ElemType &e){
    if(S->next== nullptr)return FAIL;
    e=S->next->elem;
    LNode *p=S->next;
    S->next=p->next;
    free(p);
}
bool  StackEmpty(LinkList S){
    if(S->next)return true;
    return false;
}
int StackSize(LinkList S){
    int count=0;
    LNode *p=S->next;
    while(p){
        count++;
        p=p->next;
    }
    return count;
}