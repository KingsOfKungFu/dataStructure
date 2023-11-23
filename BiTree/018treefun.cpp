#include <iostream>
using namespace std;
typedef struct BTNode{
    char data;
    struct BTNode *lchild, *rchild, *parent;
} BTNode, *BiTree;

void aaaa(BTNode *&T, BTNode *p){
    char x;
    cout << "请输入:";
    cin >> x;
    if (x == '0')
        T = NULL;
    else{
        T = new BTNode;
        T->data = x;
        T->parent = p;
        p = T;
        T->lchild = NULL;
        T->rchild = NULL;
        aaaa(T->lchild, p);
        aaaa(T->rchild, p);
    }
    return;
}