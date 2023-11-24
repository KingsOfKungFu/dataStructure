// Created by 颜广 on 2023/11/24.
#include <iostream>
#include "headfun.cpp"
using namespace std;

int seq(LNode *A, LNode *B){
    LNode *p = A->next, *q = B->next;
    while (p != NULL && q != NULL){
        if(p->data == q->data){
            p = p->next;
            q = q->next;
        }else{
            p = p->next;
            q = B->next;
        }
    }
    if(q == NULL){
        return true;
    }else{
        return false;
    }
}

int main(){
    cout << "17、两个序列分别为 A、B，将其存放到链表中，\n"
            "判断B是否是A的连续子序列" << endl;
    LNode *A = aaaa();
    cout << "B:" << endl;
    LNode *B = aaaa();
    cout << seq(A,B);
    return 0;
}
