// Created by 颜广 on 2023/11/24.
#include <iostream>
#include "headfun.cpp"
using namespace std;

void fun(LNode *&head, int n){
    LNode *p = head;
    LNode *r;
    int *q = new int[n + 1];
    int m;
    for (int i = 0; i < n + 1; ++i) {
        q[i] = 0;
    }
    while (p->next != NULL){
        if (p->next->data > 0)
            m = p->next->data;
        else
            m = -p->next->data;
        if(q[m] == 0){
            q[m] = 1;
            p = p->next;
        }else{
            r = p->next;
            p->next = r->next;
            free(r);
        }
    }
    free(q);
}

int main(){
    cout << "19、用单链表保存m个整数，并且/datalsn,\n"
            "要求设计时间复杂度尽可能高效的算法，对于\n"
            "data 绝对值相等的点，仅保留第一次出现的点" << endl;
    LNode *L = aaaa();
    fun(L, 50);
    L = L->next;
    while (L != NULL){
        cout << L->data << " ";
        L = L->next;
    }
    return 0;
}
