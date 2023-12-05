// Created by 颜广 on 2023/11/28.
#include <iostream>
using namespace std;
#define maxsize 50

typedef struct {
    char verticle[maxsize];
    int Edge[maxsize][maxsize];
    int numver, numedg;
} mgraph;

mgraph aaaa() {
    int x;
    mgraph M;
    M.numver = 5;
    M.numedg = 5;
    for (int i = 0; i < M.numver; ++i) {
        for (int j = 0; j < M.numver; ++j) {
            cout << "请输入:";
            cin >> x;
            M.Edge[i][j] = x;
        }
    }
    return M;
}
