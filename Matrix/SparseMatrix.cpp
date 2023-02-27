//
// Created by HELLO_WORLD on 2/26/2023.
//
#include <cstdio>
#include <cstdlib>
#include "SparseMatrix.h"
Status CreateSMatrix(TSMatrix &M){
    int n;
    int i,j,e;//行号列号和值
    int mu=0;
    int nu=0;
    printf("please input non zero number: ");
    scanf("%d",&n);
    for(int index=1;index<=n;index++){
        scanf("%d,%d,%d",&i,&j,&e);
        Triple T;
        T.i=i;
        T.j=j;
        T.e=e;
        M.data[index]=T;
        if(i>mu)mu=i;
        if(j>nu)nu=j;
    }
    M.mu=mu;
    M.nu=nu;
    M.tu=n;
    return OK;
}
Status DestroySMatrix(TSMatrix &M);
Status PrintSMatrix(TSMatrix M){
    if(!(M.mu>0&&M.nu>0))return FAIL;
    for(int i=1;i<=M.mu;i++){
        for(int j=1;j<=M.nu;j++){
            int flag=0;
            for(int k=1;k<=M.tu;k++){
                if(M.data[k].i==i&&M.data[k].j==j){
                    printf("%d ",M.data[k].e);
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("%d ",0);
            }
        }
        printf("\n");
    }
    return OK;
}
Status CopySMatrix(TSMatrix M,TSMatrix &T){
    if(!(M.mu>0&&M.nu>0))return FAIL;
    T.mu=M.mu;
    T.nu=M.nu;
    T.tu=M.tu;
    for(int i=1;i<=M.tu;i++){
        T.data[i]=M.data[i];
    }
    return OK;
}
Status AddSMatrix(TSMatrix M,TSMatrix N,TSMatrix &Q){
    if(!((M.mu==N.mu)&&(M.nu==N.nu)))return FAIL;
//    int i=1;int j=1;

    Q.mu=M.mu;
    Q.nu=M.nu;
    Q.tu=0;
TSMatrix *P1;
TSMatrix  *P2;
if(M.tu>N.tu){
    P1=&M;
    P2=&N;
}else{
    P1=&N;
    P2=&M;
}
    for(int ind=1;ind<=(*P1).tu;ind++){
        Triple T1 =(*P1).data[ind];
        int i=T1.i;
        int j=T1.j;
        int e1=T1.e;int e2=0;
        for(int ind2=1;ind2<=(*P2).tu;ind2++){
            if((*P2).data[ind2].i==i&&(*P2).data[ind2].j==j)
                e2=N.data[ind2].e;
        }
        T1.e=e1+e2;
        Q.data[ind]=T1;
        Q.tu++;
    }
    return OK;
}
Status SubSMatrix(TSMatrix M,TSMatrix N,TSMatrix &Q){
    if(!((M.mu==N.mu)&&(M.nu==N.nu)))return FAIL;
//    int i=1;int j=1;

    Q.mu=M.mu;
    Q.nu=M.nu;
    Q.tu=0;
    TSMatrix *P1;
    TSMatrix  *P2;
    if(M.tu>N.tu){
        P1=&M;
        P2=&N;
    }else{
        P1=&N;
        P2=&M;
    }
    for(int ind=1;ind<=(*P1).tu;ind++){
        Triple T1 =(*P1).data[ind];
        int i=T1.i;
        int j=T1.j;
        int e1=T1.e;int e2=0;
        for(int ind2=1;ind2<=(*P2).tu;ind2++){
            if((*P2).data[ind2].i==i&&(*P2).data[ind2].j==j)
                e2=N.data[ind2].e;
        }
        T1.e=e1-e2;
        Q.data[ind]=T1;
        Q.tu++;
    }
    return OK;
}
