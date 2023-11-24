// Created by 颜广 on 2023/11/24.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void level(BTNode *p){
    BTNode *stack[maxsize];
    int top = -1;
    int front = 0, rear = 0;
    BTNode *que[maxsize];
    if(p != NULL){
        que[++rear] = p;
        while (front != rear){
            p = que[++front];
            stack[++top] = p;
            if(p->lchild != NULL){
                que[++rear] = p->lchild;
            }
            if(p->rchild != NULL){
                que[++rear] = p->rchild;
            }
        }
    }
    for (int i = top; i > -1; --i) {
        cout << stack[i]->data << " ";
    }
}

int main(){
    cout << "25、试给出自下而上从右到左的层次遍历" << endl;
    BTNode *T = aaaa();
    level(T);
    return 0;
}
