// Created by 颜广 on 2023/11/27.
#include <iostream>
#include "stackfun.cpp"
#include "queuefun.cpp"
using namespace std;

void reverse(Stack &s, queue &q){
    while (q.front != q.rear){
        push(s, dequeue(q));
    }
    while (s.top != -1){
        enqueue(q, pop(s));
    }
}

int main(){
    cout << "1、Q是一个队列，S是一个空栈，编写算法使\n"
            "得队列中元素逆置" << endl;
    Stack s;
    Init(s);
    queue q;
    init(q);
    int x;
    cout << "请输入(-1结束):";
    cin >> x;
    while (x != -1){
        enqueue(q,x);
        cout << "请输入(-1结束):";
        cin >> x;
    }
    reverse(s,q);
    while (q.front != q.rear){
        cout << q.data[q.front] << " ";
        q.front = (q.front + 1) % maxsize;
    }
    return 0;
}
