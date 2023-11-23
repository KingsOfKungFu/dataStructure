// Created by 颜广 on 2023/10/14.
#include <iostream>
using namespace std;
#define maxsize 50

void SelectSort(int R[], int n){
    int i, j, k, temp;
    for (i = 0; i < n; ++i) {
        k = i;
        for (j = i + 1; j < n; ++j) {
            if(R[k] > R[j]){
                k = j;
            }
        }
        temp = R[i];
        R[i] = R[k];
        R[k] = temp;
    }
}

int main(){
    cout << "选择排序" << endl;
    int A[] = {12, 6, 9, 2, 4};
    SelectSort(A, 5);
    for (int i = 0; i < 5; i++){
        cout << A[i] << ' ';
    }
    return 0;
}