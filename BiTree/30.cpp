// Created by 颜广 on 2023/11/25.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void fun(BTNode *p, int deep){
    if(p != NULL){
        if((p->lchild || p->rchild) && deep > 1){
            cout << "(";
        }
        if(p->lchild != NULL){
            fun(p->lchild,deep+1);
        }
        cout << p->data;
        if(p->rchild != NULL){
            fun(p->rchild,deep+1);
        }
        if((p->lchild || p->rchild) && deep > 1){
            cout << ")";
        }
    }
}

void fun2(BTNode *p, int deep){
    if(p != NULL){
        if((p->lchild || p->rchild) && deep > 1){
            cout << "(";
        }
        ++deep;
        if(p->lchild != NULL){
            fun2(p->lchild,deep);
        }
        cout << p->data;
        if(p->rchild != NULL){
            fun2(p->rchild,deep);
        }
        --deep;
        if((p->lchild || p->rchild) && deep > 1){
            cout << ")";
        }
    }
}

int main(){
    cout << "30、将给定的二叉树转化为等价的中缀表达式\n"
            "(具体细节图在视频中会提到）" << endl;
    BTNode *T = aaaa();
    fun(T, 1);
    return 0;
}