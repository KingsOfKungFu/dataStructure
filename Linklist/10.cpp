// Created by 颜广 on 2023/11/21.
#include <iostream>
#include "headfun.cpp"
using namespace std;

Linklist create(LNode *&A){
    LNode *B = new LNode ;
    B->next = NULL;
    LNode *ra = A, *rb = B, *p = A->next;
    A->next = NULL;
    while (p != NULL){
        ra->next = p;
        ra = p;
        p = p->next;
        rb->next = p;
        rb = p;
        if(p != NULL){
            p = p->next;
        }
    }
    return B;
}

int main(){
    cout << "10、将一个带头节点的单链表A 分解成两个带\n"
            "头节点的单链表A 和B，使A中含奇数位置元\n"
            "素，B中含偶数位置元素，且相对位置不变" << endl;
    LNode *A = aaaa();
    LNode *B = create(A);
    LNode *q = A->next;
    LNode *p = B->next;
    cout << "A:";
    while (q != NULL){
        cout << q->data << " ";
        q = q->next;
    }
    cout << "\nB:" << endl;
    while (p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
    return 0;
}
