// Created by 颜广 on 2023/12/5.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void fun(BTNode *p, int deep){
    if(p != NULL){
        if((p->lchild || p->rchild) && deep > 1){
            cout << "(";
        }
        if(p->lchild != NULL){
            fun(p->lchild, deep+1);
        }
        cout << p->data;
        if(p->rchild != NULL){
            fun(p->rchild, deep+1);
        }
        if((p->lchild || p->rchild) && deep > 1){
            cout << ")";
        }
    }
}

int main(){
    cout << "30、将给定的二叉树转化为等价的中缀表达式" << endl;
    BTNode *T = aaaa();
    fun(T, 1);
    return 0;
}
