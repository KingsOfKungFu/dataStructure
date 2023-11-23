// Created by 颜广 on 2023/11/2.
#include <iostream>
using namespace std;

#define maxsize 50
typedef struct{
    int data[maxsize];
    int front ,rear;
} queue;

void init(queue &q){
    q.rear = q.front = 0;
}

bool enqueue(queue &q, int x){
    if((q.rear + 1) % maxsize == q.front){
        return false;
    }
    q.data[q.rear] = x;
    q.rear = (q.rear + 1) % maxsize;
    return true;
}

int dequeue(queue &q){
    if(q.rear == q.front){
        return -100;
    }
    int x = q.data[q.front];
    q.front = (q.front + 1) % maxsize;
    return x;
}

