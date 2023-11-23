// Created by 颜广 on 2023/10/25.
#include <iostream>
using namespace std;
typedef struct LNode{
    int data;
    struct LNode *next;
} LNode, *Linklist;

Linklist aaaa(){
    LNode *L = new LNode ;
    int a;
    cout << "请输入(0结束):";
    cin >> a;
    L->data = a;
    // 声明一个指针指向头结点
    LNode *p = L;
    // 生成链表
    cout << "请输入(0结束):";
    cin >> a;
    while (a != 0){
        LNode *q = new LNode ;
        q->data = a;
        q->next = NULL;
        p->next = q;
        p = p->next;
        cout << "请输入(0结束):";
        cin >> a;
    }
    p->next = NULL;
    return L;
}