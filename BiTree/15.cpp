// Created by 颜广 on 2023/11/22.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void change(char pre[], int L1, int R1, char post[], int L2, int R2){
    if(L1 <= R1 && L2 <= R2){
        post[R2] = pre[L1];
        change(pre,L1+1, (L1+R1+1)/2, post, L2, (L2+R2-1)/2);
        change(pre,(L1+R1+1)/2+1, R1, post, (L2+R2-1)/2+1, R2-1);
    }
}

int main(){
    cout << "15、已知满二叉树先序序列存在于数组中，设计算法将其变成后序序列" << endl;
    char pre[8] = "abdecfg";
    char mid[8] = "";
    change(pre, 0, 6, mid, 0, 6);
    int i = 0;
    while (mid[i] != '\0'){
        cout << mid[i];
        ++i;
    }
    return 0;
}
