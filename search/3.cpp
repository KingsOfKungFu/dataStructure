// Created by 颜广 on 2023/10/12.
#include <iostream>
#include "sqlist.cpp"
using namespace std;

int binsearch(Sqlist L, int key){
    int low = 0, high = L.length - 1, mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(L.data[mid] == key){
            return mid;
        }else if(L.data[mid] < key){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}

int bi(Sqlist L, int key, int low, int high){
    if(low > high){
        return -1;
    }
    int mid = (low + high) / 2;
    if(L.data[mid] < key){
        // 这里必须加return资料上是错的
        return bi(L,key,mid + 1,high);
    }else if(L.data[mid] > key){
        return bi(L,key,low,mid - 1);
    }else{
        return mid;
    }
}


int main(){
    cout << "在有序顺序表中二分查找值为key的元素" << endl;
    Sqlist L = {{1,3,5,8,9},5};
    // cout << "result is:" << binsearch(L,9);
    cout << "result is:" << bi(L,8,0,4);
    return 0;
}