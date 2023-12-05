// Created by 颜广 on 2023/11/28.
#include <iostream>
#include "stackfun.cpp"
using namespace std;

bool fun(Stack &s, string str){
    int i = 0;
    while (str[i] != '\0'){
        switch (str[i]) {
            case '(':
                push(s,'(');
                break;
            case '{':
                push(s,'{');
                break;
            case ')':
                if(pop(s) != '('){
                    return false;
                }
                break;
            case '}':
                if(pop(s) != '{'){
                    return false;
                }
                break;
            default:
                break;
        }
        ++i;
    }
    if(s.top == -1){
        return true;
    }else{
        return false;
    }
}

int main(){
    cout << "4、判断一个表达式中括号是否配对（假设只包含\n"
            "圆括号）" << endl;
    Stack s;
    Init(s);
    string S = "(15+())";
    cout << "结果为：";
    bool q = fun(s, S);
    if (q == true)
        cout << "括号匹配!" << endl;
    else
        cout << "括号不匹配!" << endl;
    return 0;
}