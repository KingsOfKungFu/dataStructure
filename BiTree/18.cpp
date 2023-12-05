// Created by 颜广 on 2023/12/5.
#include <iostream>
#include "018treefun.cpp"
using namespace std;

void printpath(BTNode *p){
    while (p != NULL){
        cout << p->data << " ";
        p = p->parent;
    }
    cout << endl;
}

void allpath(BTNode *p){
    if(p != NULL){
        printpath(p);
        allpath(p->lchild);
        allpath(p->rchild);
    }
}

int main(){
    cout << "18、增加一个指向双亲节点的 parent 指针，\n"
            "输出所有节点到根节点的路径" << endl;
    BTNode *T, *p = NULL;
    aaaa(T,p);
    allpath(T);
    return 0;
}
