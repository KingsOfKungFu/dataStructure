// Created by 颜广 on 2023/11/14.
#include <iostream>
#include "headfun.cpp"
using namespace std;

int find(LNode *head, int k){
    LNode *q = head->next;
    LNode *p = head;
    int i = 1;
    while (q != NULL){
        q  = q->next;
        ++i;
        if(i > k){
            p = p->next;
        }
    }
    if(p == head){
        return 0;
    }
    cout << "倒数第K个节点为：" << p->data;
    return 1;
}

int main(){
    cout << "18、查找单链表中倒数第k个结点，若成功，\n"
            "则输出该节点的 data，并返回1，否则返回0" << endl;
    LNode *L = aaaa();
    int j = find(L, 3);
    return 0;
}
