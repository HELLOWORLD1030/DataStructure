//
//循环队列
// Created by HELLO_WORLD on 2/16/2023.
//

#ifndef DATASTRUCTURE_SEQUENCELOOPQUENE_H
#define DATASTRUCTURE_SEQUENCELOOPQUENE_H
#include "../std.h"
#define QElemType int
#define MaxSize 100
typedef struct{
    QElemType *base;
    int front;
    int rear;
}SqLoopQuene;
Status InitQuene(SqLoopQuene &Q);
Status DestroyQuene(SqLoopQuene &Q);
Status ClearQuene(SqLoopQuene &Q);

Status Enquene(SqLoopQuene &Q,QElemType e);
Status Dequene(SqLoopQuene &Q,QElemType &e);

bool QueneEmpty(SqLoopQuene Q);
int QueneLength(SqLoopQuene Q);
Status GetHead(SqLoopQuene Q,QElemType &e);
#endif //DATASTRUCTURE_SEQUENCELOOPQUENE_H
