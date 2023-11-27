// Created by 颜广 on 2023/11/27.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void allpath(BTNode *p, char pathstack[], int top){
    if(p != NULL){
        pathstack[top] = p->data;
        if(!p->lchild && !p->rchild){
            for (int i = 0; i <= top; ++i) {
                cout << pathstack[i] << " ";
            }
            cout << endl;
        }
        allpath(p->lchild,pathstack,top+1);
        allpath(p->rchild,pathstack,top+1);
    }
}

int main(){
    cout << "14、输出根节点到每个叶子结点的路径" << endl;
    int top = 0;
    char pathstack[maxsize];
    BTNode *T = aaaa();
    printTree(T,0);
    cout << endl;
    allpath(T,pathstack,top);
    return 0;
}
