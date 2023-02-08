//
// Created by HELLO_WORLD on 2/6/2023.
//
#include <cstdio>
#include <cstdarg>
#include <cstdlib>
#include "LinkedList.h"

Status InitLinkedList(LinkList &L,int n,...){
    va_list vaList;
    L=(LinkList) malloc(sizeof(LNode));
    if(!L)return FAIL;
    L->next=nullptr;
    /* 为 num 个参数初始化 vaList */
    va_start(vaList,n);
    for(int i=0;i<n;i++){
        LNode* p=(LNode*) malloc(sizeof(LNode));
        if(!p)return FAIL;
        p->elem= va_arg(vaList,ElemType);
        p->next=L->next;
        L->next=p;
    }
    //清理为可变参数分配的内存
    va_end(vaList);
    return OK;
}
int sum(int num,...){
    va_list vaList;
    int sum = 0;
    /* 为 num 个参数初始化 valist */
    va_start(vaList, num);

    /* 访问所有赋给 valist 的参数 */
    for (int i = 0; i < num; i++)
    {
        sum += va_arg(vaList, ElemType);
    }
    /* 清理为 valist 保留的内存 */
    va_end(vaList);
    return sum;
}
void Print(LinkList L){
    if(L== nullptr||L->next== nullptr)return ;
    LinkList p=L;
    while(p->next!= nullptr){
        printf("%d ",p->next->elem);
        p=p->next;
    }
}
Status GetElem(LinkList L,int i,ElemType &e){
    LNode *p=L->next;
    int j=1;
    while (p&&j<i){
        p=p->next;
        ++j;
    }
    if(!p||j>i)return FAIL;
    e=p->elem;
    return OK;
}
Status LinkListInsert(LinkList &L,int i,ElemType e){
    LNode *p=L;
    int j=0;
    while (p&&j<i-1){//寻找第i-1个节点
        p=p->next;
        ++j;
    }
    if(!p||j>i-1)return FAIL;
    LNode *s=(LNode*) malloc(sizeof(LNode));
    s->elem=e;
    s->next=p->next;
    p->next=s;
}
Status LinkListDelete(LinkList &L,int i,ElemType &e){
    LNode *p=L;
    int j=0;
    while (p&&j<i-1){//找到前驱节点
        p=p->next;
        ++j;
    }
    if(!p->next&&j>i-1)return FAIL;
    LNode *q=p->next;
    p->next=q->next;
    e=q->elem;
    free(q);

    return OK;
}
Status MergeList(LinkList &La,LinkList &Lb,LinkList &Lc){
    LNode *Pa=La->next;
    LNode *Pb=Lb->next;
    LNode *pc=La;
    Lc=pc;
    while (Pa&&Pb){
        if (Pa->elem<=Pb->elem){
            pc->next=Pa;
            pc=Pa;
            Pa=Pa->next;
        }else{
            pc->next=Pb;
            pc=Pb;
            Pb=Pb->next;
        }
    }
    pc->next=Pa?Pa:Pb;
    return OK;

}


