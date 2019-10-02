/*************************************************************************
	> File Name: 63.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月12日 星期一 14时55分50秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
#define MAX_N 10000
#define MAX_M 40000

struct Edge {
    int t, next, c;
} g[MAX_M + 5];
int head[MAX_N + 5];
int cnt = 0;
int dis[MAX_N + 5], vis[MAX_N + 5];

inline void add(int a, int b, int c) {
    g[++cnt] = {b, head[a], c};
    head[a] = cnt;
}

void spfa(int s) {
    memset(dis, 0x3f, sizeof(dis));
    memset(vis, 0, sizeof(vis));
    queue<int> q;
    dis[s] = 0;
    vis[s] = 1;
    q.push(s);
    while(!q.empty()) {
        int ind = q.front();
        q.pop();
        vis[ind] = 0;
        for (int i = head[ind]; i; i = g[i].next) {
            int to = g[i].t, c = g[i].c;
            if (dis[ind] + c < dis[to]) {
                dis[to] = dis[ind] + c;
                if (!vis[to]) q.push(to), vis[to] = 1;
            }
        }
    }
    return ;
}

int n, m;
int ind(int i, int j) {
    return i * m + j + 1;
}
char cg[105][105] = {0};

int main() {
    cin >> n >> m;
    for (int i = 0; i < n - 1; i++) {
        cin >> cg[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            int val = (cg[i][j] != '/');
                if ((i + j) % 2) {
                    add(ind(i, j+1), ind(i+1, j), val);
                    add(ind(i+1, j), ind(i, j+1), val);
                } else {
                    add(ind(i, j), ind(i+1, j + 1), !val);
                    add(ind(i+1, j+1), ind(i, j ), !val);
                }
            
        }
    }
    spfa(ind(0,0));
    cout << dis[ind(n-1, m-1)] << endl;
    return 0;
}


