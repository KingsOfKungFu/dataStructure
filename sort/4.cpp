// Created by 颜广 on 2023/10/14.
#include <iostream>
using namespace std;
#define maxsize 50

void BubbleSort(int R[], int n){
    int i,j,temp,flag;
    for (i = n - 1; i >= 1 ; --i) {
        for (j = 1; j <= i; ++j) {
            if(R[j - 1] > R[j]){
                temp = R[j];
                R[j] = R[j - 1];
                R[j - 1] = temp;
                flag = 1;
            }
            if(flag == 0){
                return;
            }
        }
    }
}

int main(){
    cout << "冒泡排序" << endl;
    int A[] = {12, 6, 9, 2, 4};
    BubbleSort(A, 5);
    for (int i = 0; i < 5; i++){
        cout << A[i] << ' ';
    }
    return 0;
}