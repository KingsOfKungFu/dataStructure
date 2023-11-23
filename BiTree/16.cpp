// Created by 颜广 on 2023/11/21.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

BiTree create(char A[], char B[], int L1,int R1, int L2, int R2){
    BTNode *root = new BTNode ;
    root->data = A[L1];
    int i;
    for (i = L2; B[i] != root->data ; ++i) ;
    if(i > L2){
        root->lchild = create(A,B,L1+1,i-L2+L1,L2,i-1);
    }else{
        root->lchild = NULL;
    }
    if(i < R2){
        root->rchild = create(A,B,i-L2+L1+1,R1,i+1,R2);
    }else{
        root->rchild = NULL;
    }
    return root;
}

int main(){
    cout << "16、先序与中序遍历分别存在两个一维数组 A，B中，试着建立二叉链表" << endl;
    char A[7] = "abcdef";
    char B[7] = "cbdaef";
    BTNode *T = create(A, B, 0, 6, 0, 6);
    printTree(T,0);
    return 0;
}