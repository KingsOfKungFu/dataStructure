// Created by 颜广 on 2023/12/5.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

int fun(BTNode *p){
    if(p == NULL){
        return 0;
    }
    if(p->lchild == NULL){
        return fun(p->rchild) + 1;
    }
    return fun(p->lchild) + fun(p->rchild);
}

int main(){
    cout << "35、用孩子兄弟表示法求树所有叶子结点个数" << endl;
    BTNode *T = aaaa();
    cout << "叶子节点个数为:" << fun(T);
    return 0;
}
