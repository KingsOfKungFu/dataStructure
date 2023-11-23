// Created by 颜广 on 2023/10/13.
#include <iostream>
#include "linklist.cpp"
using namespace std;
/**
 *  顺序存储，直接插入排序，哨兵模式
 * @param R 目标数组
 * @param n 元素个数-1
 */
void InsertSort(int R[], int n){
    int i, j;
    for (i = 2; i <= n; ++i) {
        R[0] = R[i];
        for (j = i - 1; R[0] < R[j] ; --j) {
            R[j + 1] = R[j];
        }
        R[j + 1] = R[0];
    }
}

void linksort(LNode *&L){
    LNode *p = L->next;
    LNode *r = p->next;
    p->next = NULL;
    p = r;
    while(p != NULL){
        r = p->next;
        LNode *pre = L;
        while(pre->next != NULL && pre->next->data < p->data){
            pre = pre->next;
        }
        p->next = pre->next;
        pre->next = p;
        p = r;
    }
}

int main(){
    cout << "直接插入排序" << endl;
//    int R[] = {-1, 8, 3, 6, 15, 2};
//    InsertSort(R, 5);
//    for (int i = 1; i < 6; i++){
//        cout << R[i] << ' ';
//    }

    LNode *head = aaaa();
    linksort(head);
    LNode *p = head->next;
    while (p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
    return 0;
}
