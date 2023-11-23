// Created by 颜广 on 2023/11/17.
#include <iostream>
#include "headfun.cpp"
using namespace std;

void reverse(LNode *&L){
    LNode *p = L->next, *u;
    // 把头差拆出来, u作为后部分的头节点
    // ,p先为后部分的头结点，之后拆出来连接到L上再将u后移
    L->next = NULL;
    while (p != NULL){
        u = p->next;
        p->next = L->next;
        L->next = p;
        p = u;
    }
}

// 暂时没懂，先用上面那个
void Reverse(LNode *&L){
    LNode *p = L->next, *r = p->next;
    LNode *pre;
    p->next = NULL;
    while ( r != NULL){
        pre = p;
        p = r;
        r = r->next;
        p->next = pre;
    }
    L->next = p;
}

int main(){
    cout << "5、试编写算法将单链表就地逆置" << endl;
    LNode *L = aaaa();
    reverse(L);
    LNode *q = L->next;
    while (q != NULL){
        cout << q->data << " ";
        q = q->next;
    }
    return 0;
}