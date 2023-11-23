// Created by 颜广 on 2023/11/21.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void del(BTNode *&p, char x){
    if(p != NULL){
        if(p->data == x){
            p = NULL;
            return;
        }
        del(p->lchild,x);
        del(p->rchild,x);
    }
}

int main(){
    cout << "12、树中元素为x的结点，删除以它为根的子树" << endl;
    BTNode *T = aaaa();
    del(T,'2');
    printTree(T,0);
    return 0;
}