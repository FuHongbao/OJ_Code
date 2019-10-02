/*************************************************************************
	> File Name: 414.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月12日 星期一 16时15分38秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;


#define MAX_N 20000
#define MAX_M 100000
#define INF 0x3f3f3f3f
struct Edge {
    int t, next, c;
} g[MAX_N + 5];
int head[MAX_N + 5], cnt = 0;
int dis[MAX_N + 5], vis[MAX_N + 5];

inline void add(int a, int b, int c) {
    g[++cnt] = {b, head[a], c};
    head[a] = cnt;
}

void spfa(int s) {
    queue<int> q;
    memset(dis, 0x3f, sizeof(dis));
    memset(vis, 0, sizeof(vis));
    dis[s] = 0;
    vis[s] = 1;
    q.push(s);
    while(!q.empty()) {
        int ind = q.front();
        q.pop();
        vis[ind] = 0;
        for (int i = head[ind]; i ; i = g[i].next) {
            int to = g[i].t,c = g[i].c;
            if (dis[ind] + c < dis[to]) {
                dis[to] = dis[ind] + c;
                if (!vis[to]) q.push(to), vis[to] = 1;
            }
        }
    }
}


int main() {
    

    return 0;
}

