// Created by 颜广 on 2023/11/16.
#include <iostream>
#include "headfun.cpp"
using namespace std;

void del(LNode *&L, int x){
    LNode *p = L, *q;
    while (p->next != NULL){
        if(p->next->data == x){
            q = p->next;
            p->next = q->next;
            free(q);
        }else{
            p = p->next;
        }
    }
}

void Del(LNode *&L, int x){
    LNode *p = L->next, *pre = L;
    LNode *q;
    while (p != NULL){
        if(p->data == x){
            q = p;
            pre->next = p->next;
            p = p->next;
            free(q);
        }else{
            pre = p;
            p = p->next;
        }
    }
}

int main(){
    cout << "2、删除带头节点单链表中所有值为x的结点" << endl;
    LNode *L = aaaa();
    del(L,3);
    LNode *p = L->next;
    while (p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
    return 0;
}
