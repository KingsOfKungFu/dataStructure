// Created by 颜广 on 2023/11/27.
#include <iostream>
#include "31.cpp"
using namespace std;
#define maxsize 50

TNode *fun(TNode *T, TNode *p){
    if(p->ltag == 0){
        while (p->rtag == 0){
            p = p->rchild;
        }
        return p;
    }else{
        return p->lchild;
    }
}

int main(){
    cout << "34、寻找中序线索二叉树的前驱结点" << endl;
    TNode *T = aa();
    TNode *p = T->rchild->lchild;
    TNode *pre = NULL;
    if(T != NULL){
        InTh(T,pre);
        pre->rchild = NULL;
        pre->rtag = 1;
    }
    cout << "pre is :" << fun(T,p)->data << endl;
    return 0;
}
