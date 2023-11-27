// Created by 颜广 on 2023/11/27.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

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
    cout << "叶子结点个数为：" << fun(T);
    return 0;
}
