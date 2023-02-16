//
// Created by HELLO_WORLD on 2/11/2023.
//
#include<cstdlib>
#include<cstdio>
#include "LinkedQuene.h"
Status InitQuene(LinkQuene &Q){
    Q.rear=(QNodeList) malloc(sizeof(QNode));
    Q.front=Q.rear;
    if(!Q.front)return FAIL;
    Q.front->next= nullptr;
    return OK;
}
Status DestroyQuene(LinkQuene &Q){
    while (Q.front){
        Q.rear=Q.front->next;
        free(Q.front);
        Q.front=Q.rear;
    }
    return OK;
}
Status ClearQuene(LinkQuene &Q){
    Q.front=Q.rear;
    return OK;
}

Status EnQuene(LinkQuene &Q,QElemType e){
    QNode *p= (QNode*)malloc(sizeof(QNode));
    if(!p)return FAIL;
    p->elem=e;
    p->next= nullptr;
    Q.rear->next=p;
    Q.rear=p;
    return OK;
}
Status DeQuene(LinkQuene &Q,QElemType &e){
    if(Q.front==Q.rear)return FAIL;
    QNode *p=Q.front->next;
    e=p->elem;
    Q.front->next=p->next;
    if(Q.rear==p)Q.rear=Q.front;
    free(p);
    return OK;
}

bool QueneEmpty(LinkQuene Q){
    return Q.front==Q.rear;
}
int QueneLength(LinkQuene Q){
    QNode *p=Q.front;
    int count=0;
    while(p!=Q.rear){
        count++;
        p=p->next;
    }
    return count;
}
Status GetHead(LinkQuene Q,QElemType &e){
    if(Q.front==Q.rear)return FAIL;
    e=Q.front->next->elem;
    return OK;

}