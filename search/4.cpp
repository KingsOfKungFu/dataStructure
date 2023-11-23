// Created by 颜广 on 2023/10/12.
#include <iostream>
#include "BiTree.cpp"
using namespace std;

int pre = -INT_MAX;
int JudgeBST(BTNode *root){
    if(root == NULL){
        return 1;
    }
    int a = JudgeBST(root->lchild);
    if(root->data <= pre || a == 0){
        return 0;
    }else{
        pre = root->data;
    }
    int b = JudgeBST(root->rchild);
    return b;
}

int main(){
    cout << "判定给定二叉树是否是二叉(搜索)排序树" << endl;
    // 5 3 1 # # 4 # # 9 7 # # #
    BTNode *T = aaaa();
    if(JudgeBST(T)){
        cout << "是二叉排序树！";
    }else{
        cout << "不是二叉排序树！";
    }
    return 0;
}