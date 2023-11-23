// Created by 颜广 on 2023/10/11.
#include <iostream>
using namespace std;

typedef struct LNode{
    int data;
    LNode *next;
} LNode, *Linklist;

Linklist aaaa(){
    LNode *L = new LNode ;
    LNode *p = L;

    int a;
    cout << "请输入:";
    cin >> a;
    while(a != 0){
        LNode *q = new LNode ;
        q->data = a;
        q->next = NULL;
        p->next = q;
        p = p->next;
        cout << "请输入:";
        cin >> a;
    }
    p->next = NULL;
    return L;
}