// Created by 颜广 on 2023/11/8.
#include <iostream>
#include "sqlist.cpp"
using namespace std;

void Reverse(Sqlist &L){
    for (int i = 0; i < L.length / 2; ++i) {
        int temp = L.data[i];
        L.data[i] = L.data[L.length - 1 - i];
        L.data[L.length - 1 - i] = temp;
    }
}

int main(){
    cout << "将顺序表中的元素逆置" << endl;
    Sqlist L = {{12, 3, 5, 8, 9}, 5};
    Reverse(L);
    for (int j = 0; j < L.length; ++j)
        cout << L.data[j] << endl;
    return 0;
}