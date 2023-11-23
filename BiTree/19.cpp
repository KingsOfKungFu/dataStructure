// Created by 颜广 on 2023/11/22.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void Nonpre(BTNode *bt){
    BTNode *stack[maxsize];
    int top = -1;
    if(bt != NULL){
        stack[++top] = bt;
        while (top != -1){
            bt = stack[--top];
            cout << bt->data;
            if(bt->rchild != NULL){
                stack[++top] = bt->rchild;
            }
            if(bt->lchild != NULL){
                stack[++top] = bt->lchild;
            }
        }
    }
}

void Nonpre2(BTNode *bt){
    BTNode *stack[maxsize];
    int top = -1;
    while (bt || top != -1){
        if(bt != NULL){
            cout << bt->data;
            stack[++top] = bt;
            bt = bt->lchild;
        }else{
            bt = stack[top--];
            bt = bt->rchild;
        }
    }
}

int main(){
    cout << "19、先序非递归遍历二叉树" << endl;
    BTNode *T = aaaa();
    Nonpre2(T);
    return 0;
}