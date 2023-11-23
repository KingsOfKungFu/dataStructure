// Created by 颜广 on 2023/11/2.
#include <iostream>
using namespace std;
#define maxsize 50

typedef struct{
    int data[maxsize];
    int top;
} Stack;

void Init(Stack &s){
    s.top = -1;
}

bool push(Stack &s, int x){
    if(s.top == maxsize - 1){
        return false;
    }
    s.data[++s.top] = x;
    return true;
}

int pop(Stack &s){
    if(s.top == -1){
        return false;
    }
    return s.data[s.top --];
}