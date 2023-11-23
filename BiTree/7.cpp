// Created by 颜广 on 2023/11/17.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

bool fun(BTNode *T1, BTNode *T2){
    int left, right; // 有1必须有0！！！有出口有结果
    if(T1 == NULL && T2 == NULL){
        return true;
    }
    if(T1 == NULL || T2 == NULL){
        return false;
    }else{
        left = fun(T1->lchild,T2->lchild);
        right = fun(T1->rchild,T2->rchild);
        return left && right;
    }
}

int main(){
    cout << "7、判断两个二叉树是否相似（指都为空或者都\n"
            "只有一个根节点，或者左右子树都相似）" << endl;
    BTNode *p = aaaa();
    cout << "B" << endl;
    BTNode *q = aaaa();
    cout << "两个树是否相似:" << fun(p, q) << endl;
    return 0;
}
