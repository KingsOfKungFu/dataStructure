// Created by 颜广 on 2023/11/13.
#include <iostream>
#include "sqlist.cpp"
using namespace std;

void del(Sqlist &L, int x){
    int k = 0;
    for (int i = 0; i <= L.length - 1; ++i) {
        if(L.data[i] != x){
            L.data[k] = L.data[i];
            ++k;
        }
    }
    L.length = k;
}

void Del(Sqlist &L, int x){
    int k = 0;
    for (int i = 0; i <= L.length - 1; ++i) {
        if(L.data[i] == x){
            ++k;
        }else{
            L.data[i - k] = L.data[i];
        }
    }
    L.length = L.length - k;
}
int main(){
    cout << "5、删除顺序表中所有值为x 的元素（两种方法）" << endl;
    Sqlist L = {{12, 3, 5, 8, 9, 3}, 6};
    del(L, 3);
    for (int j = 0; j < L.length; ++j)
        cout << L.data[j] << " ";
    return 0;
}