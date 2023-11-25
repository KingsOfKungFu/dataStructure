// Created by 颜广 on 2023/11/25.
#include <iostream>
#include "circledoublefun.cpp"
using namespace std;

int fun(DNode *L){
    DNode *p = L->next;
    DNode *q = L->prior;
    while (p != q && q->next != p){
        if(p->data == q->data){
            p = p->next;
            q = q->prior;
        }else{
            return 0;
        }
    }
    return 1;
}

int main(){
    cout << "20、判断带头结点的循环双链表是否对称" << endl;
    DNode *A = aaaa();
    cout << fun(A) << endl;
    return 0;
}
