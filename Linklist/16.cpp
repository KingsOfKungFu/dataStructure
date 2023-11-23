// Created by 颜广 on 2023/11/13.
#include <iostream>
#include "headfun.cpp"
using namespace std;

void Union(LNode *&A, LNode *&B){
    LNode *p = A->next;
    LNode *q = B->next;
    LNode *ra = A, *u;
    while (p != NULL && q != NULL){
        if(p->data < q->data){
            u = p;
            p = p->next;
            free(u);
        }else if(p->data > q->data){
            u = q;
            q = q->next;
            free(u);
        }else{
            ra->next = p;
            ra = p;
            p = p->next;
            u = q;
            q = q->next;
            free(u);
        }
    }
    while (p != NULL){
        u = p;
        p = p->next;
        free(u);
    }
    while (q != NULL){
        u = q;
        q = q->next;
        free(u);
    }
    ra->next = NULL;
    free(q);
}

int main(){
    cout << "16、A,B 两个单链表递增有序，从A，B中找出\n"
            "公共元素并存放于A链表中" << endl;
    LNode *A = aaaa();
    cout << "B:";
    LNode *B = aaaa();
    Union(A, B);
    LNode *q = A->next;
    while (q != NULL){
        cout << q->data << " ";
        q = q->next;
    }
    return 0;
}