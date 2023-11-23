// Created by 颜广 on 2023/11/14.
#include <iostream>
#include "sqlist.cpp"
using namespace std;

int find(Sqlist A, Sqlist B){
    Sqlist C;
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
    return C.data[(A.length + B.length - 1) / 2];
}

int main(){
    cout << "9、求两个递增序列合并后的中位数（两种方法）" << endl;
    Sqlist A = {{11, 13, 15, 17, 19}, 5};
    Sqlist B = {{2, 4, 6, 8, 20}, 5};
    cout << find(A, B) << endl;
    return 0;
}