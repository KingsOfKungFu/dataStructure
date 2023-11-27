// Created by 颜广 on 2023/11/27.
#include <iostream>
using namespace std;

typedef struct TNode{
    char data;
    struct TNode *lchild, *rchild;
    int ltag = 0, rtag = 0;
} TNode, *iTree;

void InTh(TNode *&p, TNode *&pre){
    if(p != NULL){
        InTh(p->lchild, pre);
        if(p->lchild,pre){
            p->lchild = pre;
            p->ltag = 1;
        }
        if(pre != NULL && pre->rchild == NULL){
            pre->rchild = p;
            pre->rtag = 1;
        }
        pre = p;
        InTh(p->rchild, pre);
    }
}

iTree aa(){
    char x;
    cout << "请输入(0结束):";
    cin >> x;
    if(x != '0'){
        TNode *T = new TNode ;
        T->data = x;
        T->lchild = aa();
        T->rchild = aa();
        return T;
    }
    return NULL;
}