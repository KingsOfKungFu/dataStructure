// Created by 颜广 on 2023/11/24.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void swap(BTNode *p){
    if(p != NULL){
        swap(p->lchild);
        swap(p->rchild);
        BTNode *temp = p->lchild;
        p->lchild = p->rchild;
        p->rchild = temp;
    }
}

int main(){
    cout << "8、把二叉树所有节点左右子树交换" << endl;
    BTNode *T = aaaa();
    printTree(T,0);
    swap(T);
    cout << "交换后：" << endl;
    printTree(T,0);
    return 0;
}
