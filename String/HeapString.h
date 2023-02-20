//
// Created by HELLO_WORLD on 2/19/2023.
//

#ifndef DATASTRUCTURE_HEAPSTRING_H
#define DATASTRUCTURE_HEAPSTRING_H
#include "../std.h"
typedef struct {
    char *ch;
    int length;
}HString;
Status StrInert(HString &S,int pos,HString T);
Status StrAssign(HString &T,char *chars);
int StrLength(HString S);
int StrCompare(HString S,HString T);
Status ClearString(HString &S);
Status Concat(HString &T,HString S1,HString S2);
HString SubString(HString S,int pos,int len);
#endif //DATASTRUCTURE_HEAPSTRING_H
