//
// Created by HELLO_WORLD on 2/3/2023.
//
#include<stdio.h>
#include <stdlib.h>
#include "LinearList.h"
Status InitList(SqList &L){
    L.elem=(ElemType *)malloc(LIST_INIT_SIZE*sizeof(ElemType));
    if(!L.elem){
        return FAIL;
    }
    L.length=0;
    L.listsize=LIST_INIT_SIZE;
    return OK;
}
Status ListInsert(SqList &l,int i,ElemType e){
    if(i<1||i>l.length+1)return FAIL;
    //if length>listSize realloc new space
    if(l.length>=l.listsize){
        ElemType *newbase=(ElemType*) realloc(l.elem,(l.length+LISTINCREMENT)* sizeof(ElemType));
        if(!newbase)return FAIL;
        l.elem=newbase;
        l.listsize+=LISTINCREMENT;
    }
    ElemType *q=&(l.elem[i-1]);//插入位置
    for(ElemType *p = &(l.elem[l.length-1]);p>=q;--p) *(p+1)=*p;
        *q=e;
        ++l.length;
        return OK;
}
void PrintList(SqList L){
    for(int i=0;i<L.length;i++){
        printf("%d ",L.elem[i]);
    }
}
Status ListDelete(SqList &L,int i,ElemType &e){
    if(i<1||i>L.length)return FAIL;
    ElemType *p=&(L.elem[i-1]);
    e=*p;
    ElemType *q=L.elem+L.length-1;
    for(++p;p<=q;++p) *(p-1)=*p;
    --L.length;
    return OK;
}
void MergeList(SqList La,SqList Lb,SqList &Lc){
    InitList(Lc);
//    int count=La.length+Lb.length;
//    int ia=0,ib=0;
//    for(int i=0;i<count;i++){
//        if(La.elem[ia]>Lb.elem[ib]){
//            ListInsert(Lc,i,La.elem[ia]);
//            ia++;
//        }else{
//            ListInsert(Lc,i,Lb.elem[ib]);
//            ib++;
//        }
//    }
    int i=1,j=1,k=0;
    int LaLength= ListLength(La);
    int LbLength= ListLength(Lb);
    while((i<=LaLength)&&(j<=LbLength)){
        ElemType ai,bj;
        GetElem(La,i,ai);
        GetElem(Lb,j,bj);
        if(ai<=bj){//
            ListInsert(Lc,++k,ai);
            i++;
        } else{
            ListInsert(Lc,++k,bj);
            j++;
        }
    }
    while (i<=LaLength){// Lb complete but La haven`t complete
        ElemType ai;
        GetElem(La,i++,ai);
        ListInsert(Lc,++k,ai);
    }
    while (j<=LbLength){// La complete but Lb haven`t complete
        ElemType bj;
        GetElem(Lb,j++,bj);
        ListInsert(Lc,++k,bj);
    }
}
int ListLength(SqList L){
    return L.length;
}
Status GetElem(SqList L,int i,ElemType &e){
    if(i<1||i>L.length) return FAIL;
    e=L.elem[i-1];
    return OK;

}