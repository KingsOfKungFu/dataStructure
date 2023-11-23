// Created by 颜广 on 2023/11/13.
#include <iostream>
#include "sqlist.cpp"
using namespace std;

void Reverse(int A[], int m, int n){
    int mid = (m + n) / 2;
    for (int i = m, j = 0; i < mid; ++i, ++j) {
        int temp = A[i];
        A[i] = A[n - j];
        A[n - j] = temp;
    }
}

void change(int A[], int m, int n){
    Reverse(A,0,m+n-1);
    Reverse(A,0,n-1);
    Reverse(A,n,m+n-1);
}

int main(){
    cout << "将 (a1,a2,a3⋯am,b1,b2，bn）转换成\n"
            "(b1,b2,⋯bn,a1,a2,a3,am)" << endl;
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    change(A, 3, 7);
    for (int i = 0; i < 10; ++i)
    {
        cout << A[i] << " ";
    }
    return 0;
}
