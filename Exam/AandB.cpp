//
// Created by HELLO_WORLD on 3/21/2023.
//

#include "AandB.h"
#include <cstdlib>
Status And(LinkList A,LinkList B,LinkList &C){
    if(!A->next||!B->next)return FAIL;
    C=(LinkList) malloc(sizeof(LNode));
    if(!C)return FAIL;
    C->next= nullptr;
    LNode *p=A->next;
    LNode *q=B->next;
    while(p){
        if(LocateElem(B,p->elem)!=-1){
            LNode *s= (LNode*)malloc(sizeof(LNode));
            if(!s)return FAIL;
            s->elem=p->elem;
            s->next=C->next;
            C->next=s;
        }
        p=p->next;

    }
}
Status Delete(LinkList &L){
    if(!L||!L->next)return FAIL;
    LNode *p=L->next;
    while(p){
        LNode *q=p->next;
        while(q){
            if(q->elem==p->elem){
                LNode *t=q->next;
                q->elem=t->elem;
                q->next=t->next;
                free(t);
            }else{
                q=q->next;
            }

        }
        p=p->next;
    }
    return OK;

}

