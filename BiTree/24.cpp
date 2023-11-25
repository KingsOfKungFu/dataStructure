// Created by 颜广 on 2023/11/25.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void level(BTNode *p){
    int front = 0, rear = 0;
    BTNode *que[maxsize];
    if(p != NULL){
        que[++rear] = p;
        while (front != rear){
            p = que[++front];
            cout << p->data << " ";
            if(p->lchild != NULL){
                que[++rear] = p->lchild;
            }
            if(p->rchild != NULL){
                que[++rear] = p->rchild;
            }
        }
    }
}

int main(){
    cout << "24、层次遍历" << endl;
    BTNode *T = aaaa();
    level(T);
    return 0;
}
