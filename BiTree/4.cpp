// Created by 颜广 on 2023/11/16.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

int getDepth(BTNode *p){
    int n1, n2;
    if(p == NULL){
        return 0;
    }else{
        n1 = getDepth(p->lchild);
        n2 = getDepth(p->rchild);
        return (n1 > n2 ? n1 : n2) + 1;
    }
}

void getDepth2(BTNode *p, int &n, int &max){
    if(p != NULL){
        ++n;
        if(n >= max){
            max = n;
        }
        getDepth2(p->lchild,n,max);
        getDepth2(p->rchild,n,max);
        --n;
    }
}

int main(){
    cout << "4、计算二叉树的深度" << endl;
    BTNode *T = aaaa();
    cout << "深度:" << getDepth(T) << endl;
    int n = 0, max = 1;
    getDepth2(T, n, max);
    cout << "深度:" << max << endl;
    return 0;
}
