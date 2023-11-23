// Created by 颜广 on 2023/11/15.
#include <iostream>
#include "Sqlist.cpp"
using namespace std;

int find(int A[], int n){
    int *B = new int[n];
    int i;
    for (int k = 0; k < n; ++k) {
        B[k] = 0;
    }
    for (i = 0; i < n; ++i) {
        if(A[i] > 0 && A[i] <= n){
            B[A[i] - 1] = 1;
        }
    }
    for (i = 0; i < n; ++i) {
        if(B[i] == 0){
            break;
        }
    }
    delete[] B;
    return i + 1;
}

int main(){
    cout << "10、设计一个时间上尽可能高效的算法，找出数\n"
            "组中未出现的最小正整数" << endl;
    int A[5] = {5, -2, 1, 4, 5};
    cout << find(A, 5) << endl;
    return 0;
}
