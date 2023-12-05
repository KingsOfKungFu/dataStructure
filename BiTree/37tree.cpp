// Created by 颜广 on 2023/11/28.
#include <iostream>
using namespace std;
#define maxsize 50

typedef struct CBNode {
    char data;
    struct CBNode *lchild, *rchild;
} CBNode, *CBTree;
