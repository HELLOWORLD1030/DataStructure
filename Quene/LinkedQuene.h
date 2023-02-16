//
// Created by HELLO_WORLD on 2/11/2023.
//

#ifndef DATASTRUCTURE_LINKEDQUENE_H
#define DATASTRUCTURE_LINKEDQUENE_H
#define QElemType int
#include "../std.h"

typedef struct QNode{
    QElemType elem;
    QNode* next;
}QNode,*QNodeList;
typedef struct LinkQuene{
    QNodeList front;
    QNodeList rear;
}LinkQuene;
Status InitQuene(LinkQuene &Q);
Status DestroyQuene(LinkQuene &Q);
Status ClearQuene(LinkQuene &Q);

Status EnQuene(LinkQuene &Q,QElemType e);
Status DeQuene(LinkQuene &Q,QElemType &e);

bool QueneEmpty(LinkQuene Q);
int QueneLength(LinkQuene Q);
Status GetHead(LinkQuene Q,QElemType &e);
#endif //DATASTRUCTURE_LINKEDQUENE_H
