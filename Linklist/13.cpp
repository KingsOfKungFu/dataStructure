// Created by 颜广 on 2023/11/22.
#include <iostream>
#include "headfun.cpp"
using namespace std;

void fun(LNode *&A, LNode *&B){
    LNode *p = A->next, *q = B->next;
    LNode *ra = A;
    A->next = NULL;
    B->next = NULL;
    while (p != NULL && q != NULL){
        if(p->data <= q->data){
            ra->next = p;
            p = p->next;
            ra = ra->next;
        }else{
            ra->next = q;
            q = q->next;
            ra = ra->next;
        }
    }
    if(p != NULL){
        ra->next = p;
    }
    if(q != NULL){
        ra->next = q;
    }
}

int main(){
    cout << "13、两个递增有序的单链表，设计算法成一个非\n"
            "递减有序的链表" << endl;
    LNode *A = aaaa();
    cout << "B:";
    LNode *B = aaaa();
    fun(A, B);
    LNode *q = A->next;
    cout << "合并后:";
    while (q != NULL)
    {
        cout << q->data << " ";
        q = q->next;
    }
    return 0;
}
