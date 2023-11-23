// Created by 颜广 on 2023/11/22.
#include <iostream>
#include "headfun.cpp"
using namespace std;

Linklist create(LNode *&A){
    LNode *B = new LNode ;
    B->next = NULL;
    LNode *ra = A, *p = A->next, *q;
    A->next = NULL;
    while (p != NULL){
        ra->next = p;
        ra = p;
        p = p->next;
        q = p;
        if(q == NULL){
            break;
        }
        p = p->next;
        q->next = B->next;
        B->next = q;
    }
    ra->next = NULL;
    return B;
}

int main(){
    cout << "11、将一个单链表(a1,b1,a2,b2•⋯an,bn}拆分成\n"
            "a1,a2,...an )和{ bn,bn-1,⋯b1}" << endl;
    LNode *A = aaaa();
    LNode *B = create(A);
    LNode *q = A->next;
    LNode *p = B->next;
    cout << "A:";
    while (q != NULL){
        cout << q->data << " ";
        q = q->next;
    }
    cout << "\nB:";
    while (p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
    return 0;
}
