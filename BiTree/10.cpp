// Created by 颜广 on 2023/11/21.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void trave(BTNode *p, int k, int &n){
    if(p != NULL){
        ++n;
        if(k == n){
            cout << p->data;
            return;
        }
        trave(p->lchild,k,n);
        trave(p->rchild,k,n);
    }
}

int main(){
    cout << "10、输出先序遍历第k个结点的值" << endl;
    BTNode *T = aaaa();
    int k = 2, n = 0;
    trave(T,k,n);
    return 0;
}
