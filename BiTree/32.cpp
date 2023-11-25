// Created by 颜广 on 2023/11/25.
#include <iostream>
#include "31.cpp"
using namespace std;

TNode *First(TNode *p){
    while (p->ltag == 0){
        p = p->lchild;
    }
    return p;
}

TNode *Next(TNode *p){
    if(p->rtag == 0){
        return First(p->rchild);
    }else{
        return p->rchild;
    }
}

void In(TNode *p){
    TNode *q = First(p);
    for (; q != NULL; q = Next(q)) {
        cout << q->data << " ";
    }
}

int main(){
    cout << "32、中序遍历线索二叉树" << endl;
    TNode *T = aa();
    TNode *pre = NULL;
    if (T != NULL){
        InTh(T, pre);
        pre->rchild = NULL;
        pre->rtag = 1;
    }
    In(T);
    return 0;
}