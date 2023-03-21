//
// Created by HELLO_WORLD on 2/28/2023.
//
#include <cstdlib>
#include <cstdio>
#include "LinkedBiTree.h"
Status CreateBiTree(BiTree &T){
    int c;
    scanf("%d",&c);
    if(c==-1){
        T= nullptr;
    }
    else{
        T=(BiNode*) malloc(sizeof(BiNode));
        if(!T)return FAIL;
        T->data=c;
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
    return OK;
}
Status PreOrderTraverse(BiTree T,Status(*visit)(TElemType e)){
    if(T){
        visit(T->data);
    }
    if(T->lchild)
    PreOrderTraverse(T->lchild,visit);
    if(T->rchild)
    PreOrderTraverse(T->rchild,visit);

}
Status InOrderTraverse(BiTree T,Status(*visit)(TElemType e)){

    InOrderTraverse(T->lchild,visit);
    if(T){
        visit(T->data);
    }
    InOrderTraverse(T->rchild,visit);
}
Status PostOrderTraverse(BiTree T,Status(*visit)(TElemType e)){

}
Status PrintNode(TElemType e){
    printf("%d ",e);
    return OK;
}
Status ChangeLeftAndRight(BiTree &T){
    BiTree p= nullptr;
    if(T) {
        p = T->lchild;
        T->lchild = T->rchild;
        T->rchild = p;
    }
    ChangeLeftAndRight(T->lchild);
    ChangeLeftAndRight(T->rchild);
}
Status FindParents(BiTree T,TElemType e);

