#include <iostream>
#include "sqlist.cpp"
using namespace std;

void search(Sqlist &L, int x){
    int low = 0, high = L.length - 1, mid, temp, i;
    while(low <= high){
        mid = (low + high) / 2;
        if(L.data[mid] == x){
            break;
        }else if(L.data[mid] > x){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    if(L.data[mid] == x && mid != L.length - 1){
        temp = L.data[mid];
        L.data[mid] = L.data[mid + 1];
        L.data[mid + 1] = temp;
    }
    if(low > high){
        for (i = L.length - 1; i > high ; --i) {
            L.data[i + 1] = L.data[i];
        }
        L.data[i + 1] = x;
        L.length++;
    }
}

int main(){
    cout << "顺序表递增有序，设计算法在最少得时间内查找值为x的元素。"
            "若找到，则将其与后继元素交换位置，否则按照递增顺序插入顺序表" << endl;
    Sqlist A = {{2,5,9,13,19},5};
    search(A,5);
    for (int i = 0; i < A.length; ++i) {
        cout << A.data[i] << " ";
    }
    return 0;
}