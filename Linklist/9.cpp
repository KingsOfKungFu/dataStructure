// Created by 颜广 on 2023/11/21.
#include <iostream>
#include "headfun.cpp"
using namespace std;

void del_min(LNode *&head){
    while (head->next != NULL){
        LNode *pre = head;
        LNode *p = head->next;
        while (p->next != NULL){
            if(p->next->data < pre->next->data){
                pre = p;
            }
            p = p->next;
        }
        cout << pre->next->data << " ";
        LNode *u = pre->next;
        pre->next = u->next;
        free(u);
    }
    free(head);
}

int main(){
    cout << "9、给定一个单链表，按递增排序输出的单链表\n"
            "中各结点的数据元素，并释放节点所占空间" << endl;
    LNode *L = aaaa();
    del_min(L);
    return 0;
}
