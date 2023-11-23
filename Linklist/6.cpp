// Created by 颜广 on 2023/11/17.
#include <iostream>
#include "headfun.cpp"
using namespace std;

void del(LNode *&L, int s, int t){
    LNode *p = L, *q;
    while (p->next != NULL){
        if(p->next->data > s && p->next->data < t){
            q = p->next;
            p->next = q->next;
            free(q);
        }else{
            p = p->next;
        }
    }
}

int main(){
    cout << "6、从链表中删除给定值在s到t之间（不包含S\n"
            "和t）的所有元素" << endl;
    LNode *L = aaaa();
    del(L, 5, 10);
    LNode *q = L->next;
    while (q != NULL){
        cout << q->data << " ";
        q = q->next;
    }
    return 0;
}