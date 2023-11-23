// Created by 颜广 on 2023/11/21.
#include <iostream>
#include "stackfun.cpp"
using namespace std;

void fun(string s){
    Stack stack;
    Init(stack);
    string newS = "";
    int i = 0, j = 0;
    while (s[i] != '\0'){
        if(s[i] == 'H'){
            push(stack,s[i++]);
        }else{
            newS[j++] = s[i++];
        }
    }
    while (stack.top != -1){
        newS[j++] = pop(stack);
    }
    i = 0;
    while (newS[i] != '\0'){
        cout << newS[i++];
    }
}

int main(){
    cout << "5、假设一个序列为 HSSHHHS，运用栈的知识，\n"
            "编写算法将§全部提到H之前，即为 SSSHHHH" << endl;
    string S = "HSSHHHS";
    fun(S);
    return 0;
}
