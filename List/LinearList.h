//
// Created by HELLO_WORLD on 2/3/2023.
//

#ifndef DATASTRUCTURE_LINEARLIST_H
#define DATASTRUCTURE_LINEARLIST_H
#include "../std.h"
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define ElemType int
typedef struct {
    ElemType *elem;//存储基址
    int length;//当前长度
    int listsize;//当前分配的储存容量
} SqList;
Status InitList(SqList &L);
Status ListInsert(SqList &L,int i,ElemType e);
Status ListDelete(SqList &L,int i,ElemType &e);
void DestoryList(SqList &L);
void ClearList(SqList &L);
bool ListEmpty(SqList L);
int ListLength(SqList l);
void MergeList(SqList La,SqList Lb,SqList &Lc);
Status GetElem(SqList L,int i,ElemType &e);
void PrintList(SqList L);
//void LocateElem(SqList &l,)
#endif //DATASTRUCTURE_LINEARLIST_H
