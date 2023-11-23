// Created by 颜广 on 2023/11/16.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void Max(BTNode *p, int &max){
    if(p != NULL){
        if(p->data > max){
            max = p->data;
        }
        Max(p->lchild,max);
        Max(p->rchild,max);
    }
}

int main(){
    cout << "6、找出二叉树中最大值的点" << endl;
    BTNode *T = aaaa();
    int max = 0;
    Max(T,max);
    cout << "最大值:" << max - '0';
    return 0;
}
