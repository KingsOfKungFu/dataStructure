// Created by 颜广 on 2023/10/12.
#include <iostream>
#include "BiTree.cpp"
using namespace std;

int func(BTNode *root){
    if(root == NULL){
        return 0; // 返回的是深度
    }
    int left = func(root->lchild);
    int right = func(root->rchild);
    // 返回-1不是平衡二叉树
    if(left == -1 || right == -1 || abs(left - right) > 1){
        return -1;
    }else{
        return abs(left - right) + 1;
    }
}

bool isBalance(BTNode *root){
    if(func(root) >= 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    cout << "判断一棵树是否为平衡二叉树" << endl;
    // 5 3 1 # # 4 # # 9 7 # # #
    BTNode *T = aaaa();
    if(isBalance(T)){
        cout << "是平衡二叉树!";
    }else{
        cout << "不是平衡二叉树!";
    }
    return 0;
}