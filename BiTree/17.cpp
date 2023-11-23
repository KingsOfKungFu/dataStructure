// Created by 颜广 on 2023/11/23.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

BiTree create(char A[], int i, int n){
    BTNode *t;
    if(i < n){
        t = new BTNode ;
        t->data = A[i];
        t->lchild = create(A, 2*i+1, n);
        t->rchild = create(A, 2*i+2, n);
        return t;
    }
    return NULL;
}

void pre(BTNode *T){
    if(T != NULL){
        cout << T->data << " ";
        pre(T->lchild);
        pre(T->rchild);
    }
}

int main(){
    cout << "17、二叉树以顺序方式存在于数组 A 的中，设计算法以二叉链表表示" << endl;
    char A[] = "abcde";
    BTNode *T = create(A, 0, 5);
    pre(T);
    cout << endl;
    printTree(T,0);
    return 0;
}
