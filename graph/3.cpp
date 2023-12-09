// Created by 颜广 on 2023/12/6.
#include <iostream>
#include "algraph.cpp"
using namespace std;

void BFSmin(AGraph *G, int v, int d[]){
    int visit[maxsize];
    for (int i = 0; i < G->numver; ++i) {
        d[i] = INT16_MAX;
    }
    for (int i = 0; i < G->numver; ++i) {
        visit[i] = 0;
    }
    int que[maxsize];
    int front = 0, rear = 0;
    visit[v] = 1;
    d[v] = 0;
    que[++rear] = v;
    while (front != rear){
        int v = que[++front];
        ArcNode *p = G->adjlist[v].firstarc;
        while (p != NULL){
            if(visit[p->adjvex] == 0){
                d[p->adjvex] = d[v] + 1;
                visit[p->adjvex] = 1;
                que[++rear] = p->adjvex;
            }
            p = p->nextarc;
        }
    }
}

int main(){
    cout << "3、利用 BFS求无向图的最短路径" << endl;
    AGraph *G = aaaa(4,4);
    int d[maxsize];
    BFSmin(G,0,d);
    cout << d[3];
    return 0;
}