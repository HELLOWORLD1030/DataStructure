//
// Created by HELLO_WORLD on 2/11/2023.
//
#include <cstdlib>
#include "SequenceQuene.h"
Status InitQuene(SqQuene &Q){
    Q.base=(QElemType*) malloc(QUENE_INIT_SIZE*sizeof(QElemType));
    if(!Q.base)return FAIL;
    Q.top=Q.base;
    Q.quenesize=QUENE_INIT_SIZE;
    return OK;
}
Status EnQuene(SqQuene &Q,QElemType e){
    if(Q.top-Q.base>=Q.quenesize)return FAIL;
    *Q.base++=e;
    return OK;
}
Status DeQuene(SqQuene &Q,QElemType &e){
    if(Q.top==Q.base)return FAIL;
    e=*Q.top++;
    return OK;

}
Status GetHead(SqQuene Q,QElemType e){
    if(Q.top==Q.base)return FAIL;
    e=*Q.top;
    return OK;
}
Status DestoryQuene(SqQuene &Q){
    free(Q.base);
}
Status ClearQuene(SqQuene &Q){
    Q.top==Q.base;
}
Status QueneLength(SqQuene Q){
    return Q.top-Q.base;
}
bool QueneEmpty(SqQuene Q){
    return Q.top==Q.base;
}
