//
// Created by HELLO_WORLD on 2/26/2023.
//

#ifndef DATASTRUCTURE_SPARSEMATRIX_H
#define DATASTRUCTURE_SPARSEMATRIX_H
#include"../std.h"
#define MAXSIZE 12500//非零元最大值
#define ElemType int
typedef struct{
    int i,j;//该非零元的行下标和列下标
    ElemType e;
}Triple;
typedef struct{
    Triple data[MAXSIZE+1];//非零元三元组，data[0]未用
    int mu,nu,tu;//矩阵的行数、列数和非零元个数
}TSMatrix;
Status CreateSMatrix(TSMatrix &M);
Status DestroySMatrix(TSMatrix &M);
Status PrintSMatrix(TSMatrix M);
Status CopySMatrix(TSMatrix M,TSMatrix &T);
Status AddSMatrix(TSMatrix M,TSMatrix N,TSMatrix &Q);
Status SubSMatrix(TSMatrix M,TSMatrix N,TSMatrix &Q);
#endif //DATASTRUCTURE_SPARSEMATRIX_H
