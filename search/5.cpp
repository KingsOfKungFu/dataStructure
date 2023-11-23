// Created by 颜广 on 2023/10/12.
#include <iostream>
#include "BiTree.cpp"
using namespace std;

BiTree Min(BTNode *bt){
    while(bt->lchild != NULL){
        bt = bt->lchild;
    }
    return bt;
}
BiTree Max(BTNode *bt){
    while(bt->rchild != NULL){
        bt = bt->rchild;
    }
    return bt;
}

int main(){
    cout << "寻找二叉排序树中最大值与最小值" << endl;
    // 5 3 1 # # 4 # # 9 7 # # #
    BTNode *T = aaaa();
    cout << Min(T)->data << endl;
    cout << Max(T)->data << endl;
    return 0;
}