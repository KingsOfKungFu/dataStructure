// Created by 颜广 on 2023/10/12.
#include <iostream>
#include "BiTree.cpp"
using namespace std;

void fun(BTNode *T, char key){
    if(T != NULL){
        fun(T->lchild,key);
        if(T->data > key){
            cout << T->data << " ";
        }
        fun(T->rchild,key);
    }
}

int main(){
    cout << "输出二叉搜索树中所有值大于key的节点" << endl;
    // 5 3 1 # # 4 # # 9 7 # # #
    BTNode *T = aaaa();
    char key = '5';
    fun(T,key);
    return 0;
}