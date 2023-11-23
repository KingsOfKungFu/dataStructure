// Created by 颜广 on 2023/11/13.
#include <iostream>
#include "sqlist.cpp"
using namespace std;

bool del(Sqlist &L, int s, int t){
    int i, k = 0;
    if(L.length == 0 || s >= t){
        return false;
    }
    for (i = 0; i < L.length; ++i) {
        if(L.data[i] >= s && L.data[i] <= t){
            ++k;
        }else{
            L.data[i - k] = L.data[i];
        }
    }
    L.length -= k;
    return true;
}

int main(){
    cout << "6、从顺序表中删除给定值在＄到t之间（包含s\n"
            "和t）的所有元素" << endl;
    Sqlist L = {{12, 13, 15, 18, 9}, 5};
    del(L, 13, 19);
    for (int j = 0; j < L.length; ++j)
        cout << L.data[j] << " ";
    return 0;
}