//
// Created by HELLO_WORLD on 2/26/2023.
//

#ifndef DATASTRUCTURE_SEQUENCEARRAY_H
#define DATASTRUCTURE_SEQUENCEARRAY_H
#include "../std.h"
#define ElemType int
#define MAX_ARRAY_DIM 8
typedef struct {
    ElemType *base;//数组基址
    int dim;//数组维度
    int *bounds;//数组维度基址
    int *constands;//数组映像函数基址
}Array;
Status InitArrar(Array &A,int dim,...);
Status DestroyArray(Array &A);
Status Value(Array A,ElemType &e,...);
Status Assign(Array &A,ElemType e,...);
Status Locate(Array A,va_list ap,int &offset);
#endif //DATASTRUCTURE_SEQUENCEARRAY_H
