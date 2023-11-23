// Created by 颜广 on 2023/11/16.
#include <iostream>
#include "headfun.cpp"
using namespace std;

void print(LNode *L){
    if(L->next != NULL){
        print(L->next);
    }
    cout << L->data << " ";
}

int main(){
    cout << "4、从尾到头反向输出单链表每个结点的值" << endl;
    LNode *L = aaaa();
    print(L->next);
    return 0;
}
