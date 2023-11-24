// Created by 颜广 on 2023/11/24.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void Nonpre(BTNode *bt){
    BTNode *Stack[maxsize];
    int top = -1;
    if(bt != NULL){
        Stack[++top] = bt;
        while (top != -1){
            bt = Stack[top--];
            cout << bt->data;
            if(bt->rchild != NULL){
                Stack[++top] = bt->rchild;
            }
            if(bt->lchild != NULL){
                Stack[++top] = bt->lchild;
            }
        }
    }
}

void Nonpre2(BTNode *bt){
    BTNode *Stack[maxsize];
    int top = -1;
    while (bt || top != -1){
        if(bt != NULL){
            cout << bt->data;
            Stack[++top] = bt;
            bt = bt->lchild;
        }else{
            bt = Stack[top--];
            bt = bt->rchild;
        }
    }
}


int main(){
    cout << "19、先序非递归遍历二叉树" << endl;
    BTNode *T = aaaa();
    cout << "方法一:";
    Nonpre(T);
    cout << "\n方法二:";
    Nonpre2(T);
    return 0;
}
