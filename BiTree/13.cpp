// Created by 颜广 on 2023/11/27.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void link(BTNode *p, BTNode *&head, BTNode *&tail){
    if(p != NULL){
        if(!p->lchild && !p->rchild){
            if(head == NULL){
                head = p;
                tail = p;
            }else{
                tail->rchild = p;
                tail = p;
            }
        }
        link(p->lchild,head,tail);
        link(p->lchild,head,tail);
    }
}

int main(){
    cout << "13、利用结点的右孩子指针将一个二叉树的叶子\n"
            "节点从左向右连接成一个单链表 (head 指向第\n"
            "一个，tail 指向最后一个）" << endl;
    BTNode *T = aaaa();
    BTNode *head = NULL, *tail = NULL;
    link(T,head,tail);
    while (head != NULL){
        cout << head->data << " ";
        head = head->rchild;
    }
    return 0;
}
