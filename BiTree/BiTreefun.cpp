// Created by 颜广 on 2023/11/8.
#include <iostream>
using namespace std;

typedef struct BTNode {
    char data;
    struct BTNode *lchild, *rchild;
} BTNode, *BiTree;

BiTree aaaa(){
    char x;
    cout << "请输入(0结束):";
    cin >> x;
    if(x != '0'){
        BTNode *T = new BTNode ;
        T->data = x;
        T->lchild = aaaa();
        T->rchild = aaaa();
        return T;
    }
    return NULL;
}

void printTree(struct BTNode *root, int depth) {
    if (root == NULL) {
        return;
    }
    // 递归输出右子树，实现“根右左”顺序
    printTree(root->rchild, depth + 1);

    // 输出当前节点，带有缩进
    for (int i = 0; i < depth; i++) {
        printf("    ");
    }
    printf("%c\n", root->data);

    // 递归输出左子树
    printTree(root->lchild, depth + 1);
}
