// Created by 颜广 on 2023/11/1.
#include <iostream>
using namespace std;

typedef struct DNode {
    int data;
    struct DNode *next;
    struct DNode *prior;
} DNode, *Dinklist;

Dinklist aaaa(){
    DNode *L = new DNode ;
    DNode *p = L;
    int a;
    cout << "请输入:";
    cin >> a;
    while (a != 0){
        DNode *q = new DNode ;
        q->data = a;
        q->next = NULL;
        q->prior = p;
        p->next = q;
        p = p->next;
        cout << "请输入:";
        cin >> a;
    }
    p->next = L;
    L->prior = p;
    return L;
}
