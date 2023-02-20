//
// Created by HELLO_WORLD on 2/19/2023.
//
#include <cstdio>
#include<cstring>
#include "SequenceString.h"
bool Concat(SSTring &T,SSTring S1,SSTring S2){
    if(S1[0]+S2[0]<=MAXSIZE){//不用截断
        for(int i=1;i<=S1[0];i++){
            T[i]=S1[i];
        }
        for( int i=1;i<=S2[0];i++){
            T[i]=S2[i];
        }
        T[0]=S1[0]+S2[0];
        return true;

    }
    else if(S1[0]<MAXSIZE){//截断，保留S1全部和S2一部分
        for(int i=1;i<=S1[0];i++){
            T[i]=S1[i];
        }
        for(int i=1;i<=MAXSIZE-S1[0];i++){
            T[i+S1[0]]=S2[i];
        }
        T[0]=MAXSIZE;
        return false;
    }
    else{//只保留S1
        for(int i=1;i<=MAXSIZE;i++){
            T[i]=S1[i];
        }
        T[0]=MAXSIZE;
        return false;
    }
}
Status SubString(SSTring &T,SSTring S,int pos,int len){
    if(pos<1||pos>S[0]||len<0||len>S[0]-pos+1)return FAIL;
    for(int i=1;i<len;i++){
        T[i]=S[pos+i-1];
    }
    T[0]=len;
    return OK;
}
int Index(SSTring S,SSTring T,int pos){
    int i=pos;
    int j=1;
    while(i<=S[0]&&j<=T[0]){
        if(S[i]==T[j]){
            ++i;++j;
        }else{
            i=i-j+2;
            j=1;
        }
    }
    if(j>T[0]){//T被完整匹配到了
        return i-T[0];
    }else{
        return 0;
    }
}
Status  InitString(SSTring &S,unsigned char* chars){
    int i=0;
    unsigned char c;
    while((c=chars[i])){
        ++i;
    }
//    printf("%d",i);
    if(!i)return FAIL;

    for(int j=0;j<i;j++){
        S[j+1]=chars[j];
//        printf("%c",S[j]);
    }
    S[0]=i;
    return OK;
}


