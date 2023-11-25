// Created by 颜广 on 2023/11/25.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;

void trave(BTNode *p, int k, int &n){
    if(p != NULL){
        ++n;
        if(k == n){
            cout << p->data - '0';
            return;
        }
        // 这里一层节点n不同，加一不能必须放在外面不能放在方法的参数里面
        trave(p->lchild, k, n);
        trave(p->rchild, k, n);
    }
}

int main(){
    cout << "10、输出先序遍历第k个结点的值" << endl;
    BTNode *T = aaaa();
    int k = 2, n = 0;
    trave(T, k, n);
    return 0;
}
