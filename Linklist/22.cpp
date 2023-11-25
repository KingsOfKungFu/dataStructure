// Created by 颜广 on 2023/11/25.
#include <iostream>
#include "circlesinglefun.cpp"
using namespace std;

void del(LNode *&L){
    LNode *p, *minp, *u;
    while (L->next != L){
        p = L->next;
        minp = L;
        while (p->next != L){
            if(p->next->data < minp->next->data){
                minp = p;
            }
            p = p->next;
        }
        cout << "依次输出位：";
        cout << minp->next->data << endl;
        u = minp->next;
        minp->next = u->next;
        free(u);
    }
    free(L);
}

int main(){
    cout << "22、设有一个带头结点的循环单链表，其结点值\n"
            "为正整数，设计算法反复找出链表内最小值并不\n"
            "断输出，并将结点从链表中删除，直到链表为空，\n"
            "再删除表头结点" << endl;
    cout << "输入A链表：" << endl;
    LNode *A = aaaa();
    del(A);
    return 0;
}
