// Created by 颜广 on 2023/11/24.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void fun(BTNode *p, BTNode*&q, int key){
    if(p != NULL){
        if(p->data == key){
            q = p;
        }else{
            fun(p->lchild,q,key);
            fun(p->rchild,q,key);
        }
    }
}

int main(){
    cout << "9、查找二叉树中 data 域等于 key 的结点是否存\n"
            "在，若存在，将q指向它，否则q为空" << endl;
    BTNode *T = aaaa();
    BTNode *q = NULL;
    char key = '6';
    fun(T, q, key);
    if (q != NULL)
        cout << "q:" << q->data;
    else
        cout << "不存在:" << endl;
    return 0;
}
