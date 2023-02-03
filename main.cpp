//
// Created by HELLO_WORLD on 2/3/2023.
//
#include <iostream>
#include "LinearList.h"
int main() {
    SqList L;
    SqList L2;
    InitList(L);
    InitList(L2);
    for(int i=0;i<9;i++){
        ListInsert(L,i,i);

    }
    for(int i=0;i<9;i++){
        ListInsert(L2,i,i+10);
    }
//    ElemType e;
//    ListDelete(L,8,e);
//    ElemType e1;
//    GetElem(L,5,e1);
//    printf("%d\n",e1);
    SqList L3;
    MergeList(L,L2,L3);
    PrintList(L3);
    return 0;
}
