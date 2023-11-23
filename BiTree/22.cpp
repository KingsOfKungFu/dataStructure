// Created by 颜广 on 2023/11/23.
#include <iostream>
#include "BiTreefun.cpp"
using namespace std;
#define maxsize 50

void Nonpost(BTNode *bt, char x){
    BTNode *St[maxsize], *tag = NULL;
    int top = -1;
    while(bt || top != -1){
        if(bt != NULL){
            St[++top] = bt;
            bt = bt->lchild;
        }else{
            bt = St[top];
            if(bt->rchild && bt->rchild != tag){
                bt = bt->rchild;
            }else{
                bt = St[top--];
                if(bt->data == x){
                    while (top != -1){
                        cout << St[top--]->data << " ";
                    }
                }
                tag = bt;
                bt = NULL;
            }
        }
    }
}

int main(){
    cout << "22、在二叉树中查找值为x的结点，打印出值\n"
            "为x的所有祖先" << endl;
    BTNode *T = aaaa();
    printTree(T,0);
    Nonpost(T, '5');
    return 0;
}