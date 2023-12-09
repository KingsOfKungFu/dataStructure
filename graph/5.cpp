// Created by 颜广 on 2023/12/6.
#include <iostream>
#include "algraph.cpp"
using namespace std;

void DFS(AGraph *G, int v, int visit[]){
    visit[v] = 1;
    ArcNode *p = G->adjlist[v].firstarc;
    while (p != NULL){
        if(visit[p->adjvex] == 0){
            DFS(G,p->adjvex,visit);
        }
        p = p->nextarc;
    }
}

bool DFS1(AGraph *G, int i, int j){
    int k;
    int visit[maxsize];
    for (k = 0; k < G->numver; ++k) {
        visit[k] = 0;
    }
    DFS(G,i,visit);
    if(visit[j] == 1){
        return true;
    }else{
        return false;
    }
}

int main(){
    cout << "5、图采用邻接表存储，设计算法判断i和j结\n"
            "点之间是否有路径（以下全是邻接表存储）" << endl;
    AGraph *G = aaaa(4,3);
    if(DFS1(G,0,2)){
        cout << "有路径";
    }else{
        cout << "没有路径";
    }
    return 0;
}