#include <iostream>
#include "sqlist.cpp"
#include "linklist.cpp"
using namespace std;

void fun(LNode *&L, int k){
    LNode *l = L;
    // 为第一个元素
    if(l->next->data == k){
        return;
    }
    while(l->next->next != NULL){
        if(l->next->next->data != k){
            l = l->next;
        }else{
            break;
        }
    }
    if(l->next->next != NULL){
        LNode *p = l->next;
        LNode *q = p->next;
        p->next = q->next;
        l->next = q;
        q->next = p;
    }
}

int main(){
    cout << "找到单链表中值为key的元素，将其与前一个节点位置互换" << endl;
    LNode *L = aaaa();
    fun(L,5);
    while(L->next != NULL){
        cout << L->next->data << " ";
        L = L->next;
    }
    return 0;
}

