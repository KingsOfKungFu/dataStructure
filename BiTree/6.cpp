// Created by 颜广 on 2023/11/23.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void Max(BTNode *p, char &max){
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
    printTree(T,0);
    char max = '0';
    Max(T, max);
    cout << "最大值为:" << max << endl;
    return 0;
}
