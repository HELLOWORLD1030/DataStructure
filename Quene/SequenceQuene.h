//
// Created by HELLO_WORLD on 2/11/2023.
//

#ifndef DATASTRUCTURE_SEQUENCEQUENE_H
#define DATASTRUCTURE_SEQUENCEQUENE_H
#include "../std.h"
#define QElemType int
#define QUENE_INIT_SIZE 100
#define QUENEINCREMENT 10
typedef struct {
    QElemType *base;
    QElemType *top;
    int quenesize;
}SqQuene;
Status InitQuene(SqQuene &Q);
Status EnQuene(SqQuene &Q,QElemType e);
Status DeQuene(SqQuene &Q,QElemType &e);
Status GetHead(SqQuene Q,QElemType &e);
Status DestoryQuene(SqQuene &Q);
Status ClearQuene(SqQuene &Q);
Status QueneLength(SqQuene Q);
bool QueneEmpty(SqQuene Q);
#endif //DATASTRUCTURE_SEQUENCEQUENE_H
