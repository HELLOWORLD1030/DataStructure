//
// Created by HELLO_WORLD on 2/3/2023.
//
#include <iostream>
#include "LinearList.h"
#include "LinkedList.h"
int main() {
//    线性表
//    SqList L;
//    SqList L2;
//    InitList(L);
//    InitList(L2);
//    for(int i=0;i<9;i++){
//        ListInsert(L,i,i);
//
//    }
//    for(int i=0;i<9;i++){
//        ListInsert(L2,i,i+10);
//    }
////    ElemType e;
////    ListDelete(L,8,e);
////    ElemType e1;
////    GetElem(L,5,e1);
////    printf("%d\n",e1);
//    SqList L3;
//    MergeList(L,L2,L3);
//    PrintList(L3);
//链表
    LinkList L,L2,L3;
//    printf("%d",sum(5,1,2,3,4,5));
    InitLinkedList(L,5,1,2,3,4,5);
    InitLinkedList(L2,5,6,7,8,9,10);
    Print(L);
    int e;
    printf("\n");
    LinkListInsert(L,1,10);
    Print(L);
    printf("\n");
    LinkListDelete(L,1,e);
    Print(L);
    printf("\n");
//    printf("%d", e);
    MergeList(L,L2,L3);
    Print(L3);
    return 0;
}
