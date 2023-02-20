//
// Created by HELLO_WORLD on 2/19/2023.
//
#include<cstdio>
#include<cstdlib>
#include "HeapString.h"
Status StrInert(HString &S,int pos,HString T){
    if(pos<1||pos>S.length+1)return FAIL;
    if(T.length){
        if(!(S.ch=(char*) realloc(S.ch,(S.length+T.length)* sizeof(char)) ))return FAIL;
        for(int i=S.length-1;i>=pos-1;--i){
            S.ch[i+T.length]=S.ch[i];
        }
        for(int i=0;i<T.length;i++){
            S.ch[pos-1+i]=T.ch[i];
        }
        S.length+=T.length;

    }
    return OK;
}
Status StrAssign(HString &T,char *chars){
    int i=0;
    char c;
    if (T.length)
        free(T.ch);
    while((c=chars[i])!='\0'){
        ++i;
    }
    if(!i){
        T.ch= nullptr;
        T.length=0;
    }else{
        T.ch=(char*) malloc(sizeof(char)*i);
        if(!T.ch)return FAIL;
    }
    for(int j=0;j<i;j++){
        T.ch[j]=chars[j];
    }
    T.length=i;
    return OK;
}
int StrLength(HString S){
    return S.length;
}
int StrCompare(HString S,HString T){
    for(int i=0;i<S.length&&i<T.length;i++){
        if(S.ch[i]!=T.ch[i])return S.ch[i]-T.ch[i];
    }
    return S.length-T.length;
}
Status ClearString(HString &S){
    if(S.length){
        free(S.ch);
        S.ch= nullptr;
        S.length=0;
    }
    return OK;
}
Status Concat(HString &T,HString S1,HString S2){
    if(T.length)free(T.ch);
    T.ch=(char*) malloc(sizeof(char)*(S1.length+S2.length));
    if(!T.ch){
        return FAIL;
    }
    for(int i=0;i<S1.length;i++){
        T.ch[i]=S1.ch[i];
    }
    for(int i=0;i<S2.length;i++){
        T.ch[S1.length+i]=S2.ch[i];
    }
    return OK;
}
HString SubString(HString S,int pos,int len){
    HString T;
    if(pos<1||pos>S.length||len<0||len>S.length-pos+1)exit(FAIL);
    T.ch=(char*) malloc(sizeof(char )*len);
    for(int i=0;i<len;i++){
        T.ch[i]=S.ch[pos-1+i];
    }
    T.length=len;
    return T;
}