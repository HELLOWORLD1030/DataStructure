//
// Created by HELLO_WORLD on 2/9/2023.
//

#ifndef DATASTRUCTURE_SEQUENCESTACK_H
#define DATASTRUCTURE_SEQUENCESTACK_H
#include "../std.h"
#define SElemType int
#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
typedef struct {
    SElemType *base;
    SElemType *top;
    int stacksize;
}SqStack;
Status InitStack(SqStack &S);
Status GetTop(SqStack S,SElemType &e);
Status Push(SqStack &S,SElemType e);
bool StackEmpty(SqStack S);
void Converse();
#endif //DATASTRUCTURE_SEQUENCESTACK_H
