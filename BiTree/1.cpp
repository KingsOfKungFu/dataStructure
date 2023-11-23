// Created by 颜广 on 2023/11/22.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

int count(BTNode *p){
    int n1, n2;
    if(p == NULL){
        return 0;
    }else{
        n1 = count(p->lchild);
        n2 = count(p->rchild);
        return n1 + n2 + 1;
    }
}

void count2(BTNode *p, int &n){
    if(p != NULL){
        ++n;
        count2(p->lchild,n);
        count2(p->rchild,n);
    }
}

int main(){
    cout << "1、计算二叉树中所有结点个数" << endl;
    BTNode *T = aaaa();
    cout << count(T) << endl;
    int n = 0;
    count2(T, n);
    cout << "方法二:" << n << endl;
    return 0;
}
