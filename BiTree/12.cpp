// Created by 颜广 on 2023/11/25.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void del(BTNode *&bt, char key){
    if(bt != NULL){
        if(bt->data == key){
            bt = NULL;
            return;
        }
        del(bt->lchild,key);
        del(bt->rchild,key);
        return;
    }
}

int main(){
    cout << "12、树中元素为x的结点，删除以它为根的子树" << endl;
    BTNode *T = aaaa();
    del(T, '5');
    printTree(T,0);
    return 0;
}
