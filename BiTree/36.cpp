// Created by 颜广 on 2023/11/27.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void fun(BTNode *T, int n, int &max){
    if(max < n){
        max = n;
    }
    if(T->lchild != NULL){
        fun(T->lchild, n+1, max);
    }
    if(T->rchild != NULL){
        fun(T->rchild, n, max);
    }
}

int main(){
    cout << "36、用孩子兄弟表示法求树的高度" << endl;
    int n = 1;
    int max = 0;
    BTNode *T = aaaa();
    fun(T,n,max);
    cout << max << endl;
    return 0;
}
