//
// Created by HELLO_WORLD on 2/16/2023.
//
#include<cstdlib>
#include "SequenceLoopQuene.h"
Status InitQuene(SqLoopQuene &Q){
    Q.base=(QElemType*) malloc(MaxSize* sizeof(QElemType));
    if(!Q.base)return FAIL;
    Q.front=Q.rear=0;
    return OK;
}
Status DestroyQuene(SqLoopQuene &Q){
    Q.front=Q.rear=0;
    free(Q.base);
    return OK;
}
Status ClearQuene(SqLoopQuene &Q){
    Q.front=Q.rear=0;
    return OK;
}

Status Enquene(SqLoopQuene &Q,QElemType e){
    if((Q.rear+1)%MaxSize==Q.front)return FAIL;
    Q.base[Q.rear]=e;
    Q.rear=(Q.rear+1)%MaxSize;
    return OK;
}
Status Dequene(SqLoopQuene &Q,QElemType &e){
    if(Q.front==Q.rear)return FAIL;
    e=Q.base[Q.front];
    Q.front=(Q.front+1)%MaxSize;
    return OK;
}

bool QueneEmpty(SqLoopQuene Q){
    return Q.front==Q.rear;
}
int QueneLength(SqLoopQuene Q){
    return Q.rear-Q.front;
}
Status GetHead(SqLoopQuene Q,QElemType &e){
    if(Q.front==Q.rear)return FAIL;
    e=Q.base[Q.front];
    return OK;
}