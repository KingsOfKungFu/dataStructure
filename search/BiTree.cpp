// Created by 颜广 on 2023/10/12.
#include <iostream>
using namespace std;
typedef struct BTNode
{
    char data;
    struct BTNode *lchild, *rchild;
} BTNode, *BiTree;
BiTree aaaa()
{
    char x;
    cout << "请输入(#结束):";
    cin >> x;
    if (x != '#')
    {
        BTNode *T = new BTNode;
        T->data = x;
        T->lchild = aaaa();
        T->rchild = aaaa();
        return T;
    }
    return NULL;
}
