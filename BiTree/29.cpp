// Created by 颜广 on 2023/11/24.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

int fun(BTNode *p){
    BTNode *que[maxsize];
    int front = 0, rear = 0;
    int wpl = 0, last = 1, deep = 0;
    que[++rear] = p;
    while (front != rear){
        p = que[++front];
        if(!p->lchild && !p->rchild){
            wpl += deep * (p->data - '0');
        }
        if(p->lchild != NULL){
            que[++rear] = p->lchild;
        }
        if(p->rchild != NULL){
            que[++rear] = p->rchild;
        }
        if(front == last){
            deep++;
            last = rear;
        }
    }
    return wpl;
}

int fun2(BTNode *p, int deep){
    int A, B;
    if(p == NULL){
        return 0;
    }
    if(!p->lchild && !p->rchild){
        return deep * (p->data - '0');
    }
    A = fun2(p->lchild, deep+1);
    B= fun2(p->rchild, deep+1);
    return A + B;
}

int fun3(BTNode *p, int &deep){
    if(p == NULL){
        return 0;
    }
    int A, B;
    if(!p->lchild && !p->rchild){
        return (p->data - '0') * deep;
    }
    ++deep;
    A = fun3(p->lchild,deep);
    B = fun3(p->rchild,deep);
    --deep;
    return A + B;
}


int main(){
    cout << "29、计算二叉树的带权路径长度（叶子节点）" << endl;
    BTNode *T = aaaa();
    printTree(T,0);
    int x = 0;
    cout << "方法一wpl:" << fun(T) << endl;
    cout << "方法二wpl:" << fun2(T,x) << endl;
    x = 0;
    cout << "方法三wpl:" << fun3(T,x) << endl;
    return 0;
}
