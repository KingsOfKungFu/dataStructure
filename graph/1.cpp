// Created by 颜广 on 2023/11/28.
#include <iostream>
#include "mgraph.cpp"
using namespace std;

int IsExistEL(mgraph G){
    int degree, i, j, count = 0;
    for (i = 0; i < G.numver; ++i) {
        degree = 0;
        for (j = 0; j < G.numver; ++j) {
            degree += G.Edge[i][j];
        }
        if(degree % 2 != 0){
            count++;
        }
    }
    if(count == 0 || count == 2){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    cout << "1、己知无向连通图G 由顶点集V 和边集E组\n"
            "成，[E/>0,当G中度为奇数的顶点个数为不大\n"
            "于2 的偶数时，G 存在包含所有边且长度为E\n"
            "的路径（称为 EL路径）。设图G采用邻接矩\n"
            "阵存储，设计算法判断图中是否存在EL路径，\n"
            "若存在返回1，否则返回0。" << endl;
    mgraph M = aaaa();
    if(IsExistEL(M)){
        cout << "存在";
    }else{
        cout << "不存在";
    }
    return 0;
}