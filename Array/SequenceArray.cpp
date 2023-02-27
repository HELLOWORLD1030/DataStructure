//
// Created by HELLO_WORLD on 2/26/2023.
//
#include <cstdarg>
#include<cstdlib>
#include "SequenceArray.h"
Status InitArrar(Array &A,int dim,...){
    if(dim<1||dim>MAX_ARRAY_DIM)return FAIL;
    A.dim=dim;
    A.bounds=(int *) malloc(dim* sizeof(int));
    if(!A.bounds)return FAIL;
    va_list ap;
    int elemtotal=1;
    va_start(ap,dim);
    for(int i=0;i<dim;i++){
        A.bounds[i]= va_arg(ap,int );
        if(A.bounds[i]<0)return FAIL;
        elemtotal*=A.bounds[i];
    }
    va_end(ap);
    A.base=(ElemType *) malloc(elemtotal* sizeof(ElemType));//为数组申请elemtotal个空间
    if(!A.base)return FAIL;
    A.constands=(int *) malloc(dim* sizeof(int));
    if(!A.constands)return FAIL;
    A.constands[dim-1]=1;
    for(int i=dim-2;i>=0;i--){
        A.constands[i]=A.bounds[i+1]*A.constands[i+1];
    }
    return OK;
}
Status DestroyArray(Array &A){
    if(!A.base)return FAIL;
    free(A.base);A.base= nullptr;
    if(!A.bounds)return FAIL;
    free(A.bounds);A.bounds= nullptr;
    if(!A.constands)return FAIL;
    free(A.constands);A.constands= nullptr;
    A.dim=0;
    return OK;
}
Status Value(Array A,ElemType &e,...){
    va_list ap;
    va_start(ap,e);
    int offset;
    if(int result= Locate(A,ap,offset)<=0)return result;
    e=*(A.base+offset);
    return OK;
}
Status Locate(Array A,va_list ap,int &offset){
    offset=0;
    int index=0;
    for(int i=0;i<A.dim;i++){
        index= va_arg(ap,int);
        if(index<0||index>A.bounds[i])return FAIL;
        offset+=A.constands[i]+index;
    }
    return OK;
}
Status Assign(Array &A,ElemType e,...){
    va_list ap;
    va_start(ap,e);
    int offset;
    if(int result= Locate(A,ap,offset)<=0)return result;
    *(A.base+offset)=e;
    return OK;
}