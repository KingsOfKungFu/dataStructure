// Created by 颜广 on 2023/11/22.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void Nonin(BTNode *bt){
    BTNode *stack[maxsize];
    int top = -1;
    while (top != -1 || bt){
        if(bt != NULL){
            stack[++top] = bt;
            bt = bt->lchild;
        }else{
            bt = stack[top--];
            cout << bt->data << " ";
            bt = bt->rchild;
        }
    }
}


int main(){
    cout << "20、中序非递归遍历二叉树" << endl;
    BTNode *T = aaaa();
    Nonin(T);
    return 0;
}