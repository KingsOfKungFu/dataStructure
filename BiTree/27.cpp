// Created by 颜广 on 2023/11/27.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

int depth(BTNode *boot){
    if(boot == NULL){
        return 0;
    }
    int front = 0, rear = 0;
    int last = 1, level = 0;
    BTNode *q[maxsize];
    q[++rear] = boot;
    BTNode *p;
    while(front < rear){
        p = q[++front];
        if(p->lchild){
            q[++rear] = p->lchild;
        }
        if(p->rchild){
            q[++rear] = p->rchild;
        }
        if(front == last){
            level++;
            last = rear;
        }
    }
    return level;
}

int main(){
    cout << "27、用层次遍历求解二叉树的高度" << endl;
    BTNode *T = aaaa();
    printTree(T,0);
    cout << "高度:" << depth(T) << endl;
    return 0;
}
