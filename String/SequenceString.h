//
// Created by HELLO_WORLD on 2/19/2023.
//

#ifndef DATASTRUCTURE_SEQUENCESTRING_H
#define DATASTRUCTURE_SEQUENCESTRING_H
#include "../std.h"
#define MAXSIZE 255
typedef unsigned char SSTring[MAXSIZE +1];
bool Concat(SSTring &T,SSTring S1,SSTring S2);
Status SubString(SSTring &T,SSTring S,int pos,int len);
int Index(SSTring S,SSTring T,int pos);
Status  InitString(SSTring &S,unsigned char* chars);
int KMP();
#endif //DATASTRUCTURE_SEQUENCESTRING_H
