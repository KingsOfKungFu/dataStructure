// Created by 颜广 on 2023/11/21.
#include <iostream>
#include "stackfun.cpp"
using namespace std;

int len(char s[]){
    int i = 0, j = 0;
    while (s[i++] != '\0'){
        ++j;
    }
    return j;
}

void Next(char pattern[], int next[], int n){
    next[0] = 0;
    int i = 1, len = 0;
    while (i < n){
        if(pattern[i] == pattern[len]){
            next[i++] = ++len;
        }else{
            if(pattern[i] == pattern[0]){
                next[i++] = 1;
                len = 1;
            }else{
                next[i++] = 0;
                len = 0;
            }
        }
    }
    for (int j = n - 1; j > 0; --j) {
        next[j] = next[j - 1];
    }
    next[0] = -1;
}

void kmp(char pattern[], char test[]){
    int n = len(pattern);
    int m = len(test);
    int *next = new int[n];
    Next(pattern,next,n);
    int i = 0, j = 0;
    while (i < m){
        if(j == n - 1 && test[i] == pattern[j]){
            cout << "匹配成功!,位置为：";
            cout << i - j << endl;
            return;
        }
        if(test[i] != pattern[j]){
            j = next[j];
            if(j != -1){
                continue;
            }
        }
        ++i;
        ++j;
    }
    cout << "匹配失败" << endl;
}

int main(){
    cout << "7、 KMP 算法" << endl;
    char pattern[] = "ABABCAB";
    char test[] = "AACABABCABA";
    kmp(pattern, test);
    return 0;
}
