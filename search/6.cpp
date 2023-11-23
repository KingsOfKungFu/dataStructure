// Created by 颜广 on 2023/10/12.
#include <iostream>
#include "BiTree.cpp"
using namespace std;

int level(BTNode *bt, char k){
    int n = 1;
    BTNode *t = bt;
    if(bt != NULL){
        while(t->data != k){
            if(t->data < k){
                t = t->rchild;
            }else{
                t = t->lchild;
            }
            ++n;
        }
    }
    return n;
}

int main(){
    cout << "设求出指定节点在给定二叉排序树的层次" << endl;
    // 5 3 1 # # 4 # # 9 7 # # #
    BTNode *T = aaaa();
    cout << "层次为:" << level(T,'4');
    return 0;
}