// Created by 颜广 on 2023/11/17.
#include <iostream>
#include "headfun.cpp"
using namespace std;

void del_min(LNode *&L){
    LNode *p = L, *minp = L->next;
    while (p->next != NULL){
        if(p->next->data < minp->data){
            minp = p;
        }
        p = p->next;
    }
    LNode *u = minp->next;
    minp->next = u->next;
    free(u);
}

int main(){
    cout << "7、试编写在带头结点的单链表L中删除最小值\n"
            "点的高效算法（已知最小值唯一）" << endl;
    LNode *L = aaaa();
    del_min(L);
    LNode *q = L->next;
    while (q != NULL){
        cout << q->data << " ";
        q = q->next;
    }
    return 0;
}