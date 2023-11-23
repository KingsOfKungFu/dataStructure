// Created by 颜广 on 2023/11/17.
#include <iostream>
#include "2struct.cpp"
using namespace std;

void Init(Stack &s){
    s.top[0] = -1;
    s.top[1] = maxsize;
}

bool push(Stack &s, int i, int x){
    if(i < 0 || i > 1){
        return false;
    }
    if(s.top[1] - s.top[0] == 1){
        return false;
    }
    if(i == 0){
        s.data[++s.top[0]] = x;
    }
    if(i == 1){
        s.data[s.top[1]--] = x;
    }
    return true;
}

int pop(Stack &s, int i){
    if(i < 0 || i > 1){
        return false;
    }
    if(i == 0){
        if(s.top[0] == -1){
            return -1;
        }else{
            return s.data[s.top[0]--];
        }
    }
    if(i == 1){
        if(s.top[1] == maxsize){
            return -1;
        }else{
            return s.data[s.top[1]++];
        }
    }
    return 0;
}

int main(){
    cout << "3、两个栈s1,s2 都采用顺序存储，并共享一个\n"
            "存储区[O,.,maxsize-1]。采用栈顶相向，迎面增\n"
            "长的存储方式，设计s1,s2入栈和出栈的操作。" << endl;
    Stack s;
    Init(s);
    push(s, 0, 15);
    push(s, 0, 13);
    push(s, 1, 10);
    // pop(s, 0);
    cout << s.data[s.top[0]];
    return 0;
}

