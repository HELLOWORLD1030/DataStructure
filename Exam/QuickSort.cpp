//
// Created by HELLO_WORLD on 3/21/2023.
//

#include "QuickSort.h"
#include <cstdio>
void sort(ElemType source[],int n){
    int low=0;
    int high=n-1;
    ElemType partition=source[0];
    while(high!=low){
        if(source[high]>partition){
            high--;
        } else if(source[high]<partition){
            source[low]=source[high];
            low++;
        }
        if(source[low]<partition){
            low++;
        }else if(source[low]>partition){
            source[high]=source[low];
            high--;
        }
    }
    source[low]=partition;
    for(int i=0;i<n;i++){
        printf("%d ",source[i]);
    }
}

