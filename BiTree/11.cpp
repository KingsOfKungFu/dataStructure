// Created by 颜广 on 2023/11/25.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void fun(BTNode *p, char x, int L){
    if(p != NULL){
        if(p->data == x){
            cout << "7所在的层数为:" << L;
        }
        // 这里节点在一层时L一样，左孩子右孩子都加+1
        fun(p->lchild,x,L+1);
        fun(p->rchild,x,L+1);
    }
}

void fun1(BTNode *p, char x, int L){
    if(p != NULL){
        if(p->data == x){
            cout << "7所在的层数为:" << L;
        }
        ++L;
        fun1(p->lchild,x,L);
        fun1(p->rchild,x,L);
        --L;
    }
}

int main(){
    cout << "11、求二叉树中值为x 的层号" << endl;
    BTNode *T = aaaa();
    int L = 1;
    fun(T, '7', L);
    return 0;
}
