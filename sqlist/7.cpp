// Created by 颜广 on 2023/11/14.
#include <iostream>
#include "sqlist.cpp"
using namespace std;

void del(Sqlist &L){
    int i , j;
    for (i = 0, j = 0; j < L.length; ++j) {
        if(L.data[i] != L.data[j]){
            L.data[++i] = L.data[j];
        }
    }
    L.length = i + 1;
}

int main(){
    cout << "7、从有序表中删除所有值重复的元素" << endl;
    Sqlist L = {{12, 13, 13, 13, 19}, 5};
    del(L);
    for (int j = 0; j < L.length; ++j)
        cout << L.data[j] << " ";
    return 0;
}