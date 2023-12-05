// Created by 颜广 on 2023/11/28.
#include <iostream>
#include "headfun.cpp"
#include "stackfun.cpp"
using namespace std;

int fun(LNode *L){
    int n = 0, j;
    Stack s;
    Init(s);
    LNode *p = L->next;
    while (p != NULL){
        ++n;
        p = p->next;
    }
    p = L->next;
    for (j = 0; j < n/2; ++j) {
        push(s,p->data);
        p = p->next;
    }
    if(n % 2 != 0){
        p = p->next;
    }
    while (p != NULL){
        if(pop(s) == p->data){
            p = p->next;
        }else{
            return 0;
        }
    }
    return 1;
}

int main(){
    cout << "2、判断单链表的全部n个字符是否中心对称" << endl;
    LNode *L = aaaa();
    cout << fun(L) << endl;
    return 0;
}