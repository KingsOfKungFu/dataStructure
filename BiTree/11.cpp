// Created by 颜广 on 2023/11/21.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void fun(BTNode *p, char x, int L){
    if(p != NULL){
        if(x == p->data){
            cout << L;
        }
        fun(p->lchild,x,L + 1);
        fun(p->rchild,x,L + 1);
    }
}

void fun1(BTNode *p, char x, int L){
    if(p != NULL){
        if(x == p->data){
            cout << L;
        }
        ++L;
        fun1(p->lchild,x,L + 1);
        fun1(p->rchild,x,L + 1);
        --L;
    }
}

int main(){
    cout << "11、求二叉树中值为x 的层号" << endl;
    BTNode *T = aaaa();
    int L = 0;
    fun(T,'2',L);
    return 0;
}