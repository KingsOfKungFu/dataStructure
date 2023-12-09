// Created by 颜广 on 2023/12/9.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void Nonpost(BTNode *bt){
    BTNode *St[maxsize], *tag = NULL;
    int top = -1;
    while (bt ||top != -1){
        if(bt != NULL){
            St[++top] = bt;
            bt = bt->lchild;
        }else{
            bt = St[top];
            if(bt->rchild && bt->rchild != tag){
                bt = bt->rchild;
            }else{
                bt = St[top--];
                cout << bt->data << " ";
                tag = bt;
                bt = NULL;
            }
        }
    }
}

void Nonpost2(BTNode *bt){
    if(bt != NULL){
        BTNode *Stack1[maxsize];
        BTNode *Stack2[maxsize];
        int top1 = -1, top2 = -1;
        Stack1[++top1] = bt;
        while (top1 != -1){
            bt = Stack1[top1--];
            Stack2[++top2] = bt;
            if(bt->lchild != NULL){
                Stack1[++top1] = bt->lchild;
            }
            if(bt->rchild != NULL){
                Stack1[++top1] = bt->rchild;
            }
        }
        while (top2 != -1){
            bt = Stack2[top2--];
            cout << bt->data << " ";
        }
    }
}

int main(){
    cout << "21、后序非递归遍历二叉树" << endl;
    BTNode *T = aaaa();
    Nonpost(T);
    cout << endl;
    Nonpost2(T);
    return 0;
}
