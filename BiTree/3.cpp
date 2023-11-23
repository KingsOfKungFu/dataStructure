// Created by 颜广 on 2023/11/22.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

int count(BTNode *p){
    int n1, n2;
    if(p == NULL){
        return 0;
    }
    if(p->lchild && p->rchild){
        n1 = count(p->lchild);
        n2 = count(p->rchild);
        return n1 + n2 + 1;
    }else{
        n1 = count(p->lchild);
        n2 = count(p->rchild);
        return n1 + n2;
    }
}

int main(){
    cout << "3、计算二叉树中所有双分支的节点个数" << endl;
    BTNode *T = aaaa();
    cout << "双分支的节点个数:" << count(T);
    return 0;
}
