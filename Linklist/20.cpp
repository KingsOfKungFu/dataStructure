// Created by 颜广 on 2023/11/15.
#include <iostream>
#include "circledoublefun.cpp"
using namespace std;

int fun(DNode *L){
    DNode *p = L->next, *q = L->prior;
    while (p->next != q && p != q){
        if(p->data != q->data){
            return 0;
        }
        p = p->next;
        q = q->prior;
    }
    return 1;
}

int main(){
    cout << "20、判断带头结点的循环双链表是否对称" << endl;
    DNode *A = aaaa();
    cout << fun(A) << endl;
    return 0;
}
