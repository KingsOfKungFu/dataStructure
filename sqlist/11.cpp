// Created by 颜广 on 2023/11/15.
#include <iostream>
#include "Sqlist.cpp"
using namespace std;

int fun(int A[], int n){
    int i, max = -1;
    int *B = new int[n];
    for (i = 0; i < n; ++i) {
        B[i] = 0;
    }
    for (i = 0; i < n; ++i) {
        ++B[A[i] - 1];
    }
    for (i = 0; i < n; ++i) {
        if(B[i] > n / 2){
            max = i + 1;
        }
    }
    delete[] B;
    return max;
}

int main(){
    cout << "11、若一个整数序列中有过半相同元素，则称其\n"
            "为主元素，设计算法找出数组 A( a0,a1,...\n"
            "an-1)的主元素。(其中 O<ai<n） 若存在主元\n"
            "素则输出，否则返回-1" << endl;
    int A[8] = {0, 5, 5, 5, 5, 1, 5, 7};
    cout << fun(A, 8) << endl;
    return 0;
}
