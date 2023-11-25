// Created by 颜广 on 2023/11/25.
#include <iostream>
#include "033fun.cpp"
using namespace std;

TNode *Next(TNode *p){
    if(p->ltag != 1){
        return p->lchild;
    }
    return p->rchild;
}

void qq(TNode *p){
    for(TNode *q = p; q != NULL; q = Next(q)){
        cout << q->data << " ";
    }
}

int main(){
    cout << "33、先序建立二叉搜索树并先序遍历" << endl;
    TNode *T = aa();
    TNode *pre = NULL;
    if(T != NULL){
        preTh(T,pre);
        pre->rchild = NULL;
        pre->rtag - 1;
    }
    qq(T);
    return 0;
}