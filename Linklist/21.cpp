// Created by 颜广 on 2023/11/25.
#include <iostream>
#include "circlesinglefun.cpp"
using namespace std;

void link(LNode *&h1, LNode *&h2){
    LNode *p, *q;
    p = h1, q = h2;
    while (p->next != h1){
        p = p->next;
    }
    while (q->next != h2){
        q = q->next;
    }
    p->next = h2;
    q->next = h1;
}

int main(){
    cout << "21、有两个循环单链表，链表头指针分别为\n"
            "h1,h2,试编写函数将 h2 链表接到 h1之后，要求\n"
            "链接后仍保持循环链表形式" << endl;
    LNode *A = aaaa();
    cout << "B" << endl;
    LNode *B = aaaa();
    link(A,B);
    LNode *q = A->next;
    while (q != A){
        cout << q->data << " ";
        q = q->next;
    }
    return 0;
}
