//
// Created by HELLO_WORLD on 2/9/2023.
//
#include <cstdlib>
#include "SequenceStack.h"
#include <cstdio>
Status InitStack(SqStack &S){
    S.base=(SElemType *) malloc(sizeof(SElemType));
    if(!(S.base))return FAIL;
    S.top=S.base;
    S.stacksize=STACK_INIT_SIZE;
    return OK;
}
Status GetTop(SqStack S,SElemType &e){
    if(S.top==S.base){//空栈，返回
       return FAIL;
    }
    e=*(S.top-1);
    return OK;
}
Status Push(SqStack &S,SElemType e){
    if(S.top-S.base>S.stacksize){//栈满了，重新分配空间
        S.base=(SElemType*) realloc(S.base,(S.stacksize+STACKINCREMENT)* sizeof(SElemType));
        if(!S.base)return FAIL;
        S.top=S.base+S.stacksize;
        S.stacksize+=STACKINCREMENT;
    }
    *S.top++=e;
    return OK;
}
Status Pop(SqStack &S,SElemType &e){
    if(S.top==S.base){//空栈
        return FAIL;
    }
    e=*--S.top;
    return OK;
}
bool StackEmpty(SqStack S){
    if(S.top==S.base)return true;
    return false;
}
void Converse(){
    SqStack S;
    InitStack(S);
    int N;
    scanf("%d",&N);
    while(N){
        Push(S,N%8);
        N/=8;
    }
    int e;

    while(!StackEmpty(S)){//栈不为空
        Pop(S,e);
        printf("%d",e);
    }
}




