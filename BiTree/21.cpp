// Created by 颜广 on 2023/11/22.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void Nonpost(BTNode *bt){
    BTNode *St[maxsize], *tag = NULL;
    int top = -1;
    while (bt || top != -1){
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
        BTNode *stack1[maxsize];
        BTNode *stact2[maxsize];
        int top1 = -1, top2 = -1;
        stack1[++top1] = bt;
        while (top1 != -1){
            bt = stack1[top1--];
            stact2[++top2] = bt;
            if(bt->lchild != NULL){
                stack1[++top1] = bt->lchild;
            }
            if(bt->rchild != NULL){
                stack1[++top1] = bt->rchild;
            }
        }
        while (top2 != -1){
            bt = stact2[top2--];
            cout << bt->data << " ";
        }
    }
}

int main(){
    cout << "21、后序非递归遍历二叉树" << endl;
    BTNode *T = aaaa();
    Nonpost2(T);
    return 0;
}