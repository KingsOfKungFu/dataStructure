// Created by 颜广 on 2023/11/16.
#include <iostream>
#include "headfun.cpp"
using namespace std;

int findLoop(LNode *L){
    LNode *fast = L, *slow = L;
    while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return 1;
        }
    }
    return 0;
}

int main(){
    cout << "23、判断单链表是否有环" << endl;
    LNode *L = aaaa();
    LNode *p = L;
    while (p->next != NULL){
        p = p->next;
    }
    p->next = L;
    cout << findLoop(L);
    return 0;
}