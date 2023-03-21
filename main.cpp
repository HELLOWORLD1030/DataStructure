//
// Created by HELLO_WORLD on 2/3/2023.
//
#include <iostream>
#include "List/LinearList.h"
#include "List/LinkedList.h"
#include "Stack/SequenceStack.h"
#include "Quene/SequenceQuene.h"
#include "Quene/LinkedQuene.h"
#include "Quene/SequenceLoopQuene.h"
#include "String/HeapString.h"
#include "String/SequenceString.h"
#include "Matrix/SparseMatrix.h"
#include "Tree/LinkedBiTree.h"
#include "Exam/QuickSort.h"
#include "Exam/AandB.h"
void SequenceList(){
    //    线性表
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
}
void LinedList(){
    ////链表
    LinkList L,L2,L3;
//    printf("%d",sum(5,1,2,3,4,5));
    InitLinkedList(L,9,1,2,3,4,5,9,8,7,6);
    InitLinkedList(L2,5,6,7,8,9,10);
//    Print(L);
//    int e;
//    printf("\n");
//    LinkListInsert(L,1,10);
//    Print(L);
//    printf("\n");
//    LinkListDelete(L,1,e);
//    Print(L);
//    printf("\n");
////    printf("%d", e);
//    MergeList(L,L2,L3);
//    Print(L3);
   printf("%d",CountX(L,1)) ;
}
void Stack(){
    //栈
    Converse();
}
void Quene(){
    //顺序队列
    SqQuene Q;
    InitQuene(Q);
    EnQuene(Q,1);
    int e;
    DeQuene(Q,e);
    printf("%d",e);
}
void LinkedQuene(){
    //链队列
     LinkQuene Q;
     InitQuene(Q);
    EnQuene(Q,1);
    EnQuene(Q,2);
    int e;

    GetHead(Q,e);
    printf("%d\n",e);
    printf("%d", QueneLength(Q));
//    DeQuene(Q,e);
//    printf("%d\n",e);
}
void SequenceLoopQuene(){
    //顺序循环队列
    SqLoopQuene Q;
    InitQuene(Q);
    Enquene(Q,1);
    Enquene(Q,2);
    printf("length:%d\n", QueneLength(Q));
    int e;
    GetHead(Q,e);
    printf("head: %d\n",e);
    Dequene(Q,e);
    printf("de: %d\n",e);
    GetHead(Q,e);
    printf("head: %d\n",e);
}
void SequenceString(){
    SSTring S,T;
    InitString(S, (unsigned char *) "1212314");
    InitString(T, (unsigned char *) "14");
    printf("%d,%d\n",S[0],T[0]);
    int index= Index(S,T,1);
    printf("%d",index);
}
void HeapString(){
    //堆构造串
    HString S;
    StrAssign(S,"djsadjlkadj");
    HString T= SubString(S,2,3);
    for(int i=0;i<3;i++){
        printf("%c",T.ch[i]);

    }
}
void SparseMatrix(){
    //稀疏矩阵
    TSMatrix M,N,Q;
    CreateSMatrix(M);
//    CopySMatrix(M,N);
    CreateSMatrix(N);
    AddSMatrix(M,N,Q);
//    printf("%d,d%d,%d\n",N.mu,N.tu,N.nu);
    PrintSMatrix(Q);
}
void BinaryTree(){
    //二叉树
    BiTree T;
    CreateBiTree(T);
    ChangeLeftAndRight(T);
    PreOrderTraverse(T,PrintNode);

}
void Exam(){
    int a[]={5,6,3,2,1,7};
//    sort(a,6);
    LinkList L,L2,L3;
//    printf("%d",sum(5,1,2,3,4,5));
    InitLinkedList(L,11,1,2,3,4,5,5,9,8,7,6,6);
    InitLinkedList(L2,5,6,7,8,9,10);
//    And(L,L2,L3);
    Delete(L);
    Print(L);

}
int main() {
//    Quene();
//    LinkedQuene();
//    SequenceLoopQuene();
//    HeapString();
//SequenceString();
//SparseMatrix();

BinaryTree();
//LinedList();
//Exam();
    return 0;
}
