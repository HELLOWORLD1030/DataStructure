//
// Created by HELLO_WORLD on 2/28/2023.
//

#ifndef DATASTRUCTURE_LINKEDBITREE_H
#define DATASTRUCTURE_LINKEDBITREE_H
#include "../std.h"
#define TElemType int
typedef struct BiNode{
    TElemType data;
    BiNode *lchild;
    BiNode *rchild;
}BiNode,*BiTree;
Status CreateBiTree(BiTree &T);
Status PreOrderTraverse(BiTree T,Status(*visit)(TElemType e));
Status InOrderTraverse(BiTree T,Status(*visit)(TElemType e));
Status PostOrderTraverse(BiTree T,Status(*visit)(TElemType e));
Status PrintNode(TElemType e);
Status ChangeLeftAndRight(BiTree &T);
Status FindParents(BiTree T,TElemType e);

#endif //DATASTRUCTURE_LINKEDBITREE_H
