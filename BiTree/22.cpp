// Created by 颜广 on 2023/11/22.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void Nonpost(BTNode *bt, char x){
    BTNode *st[maxsize], *tag = NULL;
    int top = -1;
    while (bt || top != -1){
        if(bt != NULL){
            st[++top] = bt;
            bt = bt->lchild;
        }else{
            bt = st[top];
            if(bt->rchild && bt->rchild != tag){
                bt = bt->rchild;
            }else{
                bt = st[top--];
                if(bt->data == x){
                    while (top != -1){
                        cout << st[top--]->data << " ";
                    }
                }
                tag = bt;
                bt = NULL;
            }
        }
    }
}

int main(){
    cout << "22、在二叉树中查找值为x 的结点，打印出\n"
            "为x的所有祖先" << endl;
    BTNode *T = aaaa();
    Nonpost(T,'5');
    return 0;
}
