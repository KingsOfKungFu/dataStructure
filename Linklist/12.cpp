// Created by 颜广 on 2023/11/22.
#include <iostream>
#include "headfun.cpp"
using namespace std;

void del(LNode *&L){
    LNode *p = L->next, *q;
    if(p == NULL){
        return;
    }
    while (p->next != NULL){
        q = p->next;
        if(p->data == q->data){
            p->next = q->next;
            free(q);
        }else{
            p = p->next;
        }
    }
}

int main(){
    cout << "12、删除递增链表中重复的元素" << endl;
    LNode *A = aaaa();
    del(A);
    LNode *q = A->next;
    cout << "A:";
    while (q != NULL){
        cout << q->data << " ";
        q = q->next;
    }
    return 0;
}
