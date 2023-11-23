// Created by 颜广 on 2023/11/8.
#include <iostream>
#include "sqlist.cpp"
using namespace std;

int Del_Min(Sqlist &L){
    int min = L.data[0];
    int pos = 0;
    for (int i = 0; i < L.length; ++i) {
        if(L.data[i] < min){
            min = L.data[i];
            pos = i;
        }
    }
    L.data[pos] = L.data[L.length - 1];
    L.length--;
    return min;
}

int main(){
    cout << "用顺序表最后一个元素覆盖整个顺序表中最小元素，并返回该最小元素" << endl;
    Sqlist L = {{12, 3, 5, 8, 9}, 5};
    int min = Del_Min(L);
    for (int j = 0; j < L.length; ++j)
        cout << L.data[j] << endl;
    cout << "×îÐ¡ÖµÎª£º" << min << endl;
    return 0;
}