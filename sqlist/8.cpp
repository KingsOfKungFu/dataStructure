// Created by 颜广 on 2023/11/14.
#include <iostream>
#include "sqlist.cpp"
using namespace std;

bool merge(Sqlist &A, Sqlist &B, Sqlist &C){
    int i = 0, j = 0, k = 0;
    while (i < A.length && j < B.length){
        if(A.data[i] < B.data[j]){
            C.data[k++] = A.data[i++];
        }else{
            C.data[k++] = B.data[j++];
        }
    }
    while (i < A.length){
        C.data[k++] = A.data[i++];
    }
    while (j < B.length){
        C.data[k++] = B.data[j++];
    }
    C.length = k;
    return true;
}

int main(){
    cout << "8、两个递增有序表合并成一个递增有序表" << endl;
    Sqlist A = {{2, 5, 9, 13, 19}, 5};
    Sqlist B = {{1, 6, 7, 10}, 4};
    Sqlist C;
    merge(A, B, C);
    for (int j = 0; j < C.length; ++j)
        cout << C.data[j] << " ";
    return 0;
}