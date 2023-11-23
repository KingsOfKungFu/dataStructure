// Created by 颜广 on 2023/11/21.
#include <iostream>
#include "fun.cpp"
using namespace std;

void del(LNode *&L){
    LNode *minp = L;
    LNode *p = L->next;
    while (p != NULL){
        if(p->data < minp->data){
            minp = p;
        }
        p = p->next;
    }
    if(L == minp){
        L = L->next;
        free(minp);
        return;
    }
    p = L;
    while (p->next != minp){
        p = p->next;
    }
    p->next = minp->next;
    free(minp);
}

int main(){
    cout << "8、试编写在不带头结点的单链表L中删除最小\n"
            "值点的高效算法（已知最小值唯一）" << endl;
    LNode *L = aaaa();
    del(L);
    LNode *p = L;
    while (p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
    return 0;
}
