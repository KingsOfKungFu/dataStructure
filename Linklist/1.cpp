// Created by 颜广 on 2023/11/15.
#include <iostream>
#include "fun.cpp"
using namespace std;

void del_x(LNode *&L, int x){
    LNode *p;
    if(L == NULL){
        return;
    }
    if(L->data == x){
        p = L;
        L = L->next;
        free(p);
        del_x(L,x);
    }else{
        del_x(L->next,x);
    }
}

int main(){
    cout << "1、设计一个递归算法，删除不带头节点的单链\n"
            "表L中所有值为x 的结点" << endl;
    LNode *L = aaaa();
    del_x(L, 10);
    while (L != NULL){
        cout << L->data << " ";
        L = L->next;
    }
    return 0;
}
