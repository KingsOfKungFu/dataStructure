// Created by 颜广 on 2023/11/23.
#include <iostream>
#include "headfun.cpp"
using namespace std;

Linklist common(LNode *A, LNode *B){
    LNode *p = A->next, *q = B->next;
    LNode *C = new LNode ;
    LNode *r = C, *s;
    while (p != NULL && q != NULL){
        if(p->data < q->data){
            p = p->next;
        }else if(p->data > q->data){
            q = q->next;
        }else{
            s = new LNode ;
            s->data = p->data;
            r->next = s;
            r = s;
            p = p->next;
            q = q->next;
        }
    }
    r->next = NULL;
    return C;
}

int main(){
    cout << "15、A,B两个单链表递增有序，从A，B中找出\n"
            "公共元素产生单链表C，要求不破环 A，B结点" << endl;
    cout << "A:" << endl;
    LNode *A = aaaa();
    cout << "B:" << endl;
    LNode *B = aaaa();
    LNode *C = common(A, B);
    LNode *q = C->next;
    while (q != NULL){
        cout << q->data << " ";
        q = q->next;
    }
    return 0;
}