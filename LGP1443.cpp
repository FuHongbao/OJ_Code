/*************************************************************************
	> File Name: LGP1443.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月24日 星期三 09时29分37秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <queue>
#include <stdio.h>
using namespace std;

int n, m;
int ans[405][405];
int yd[8][2]={-1, -2, -2, -1, -2, 1, -1, 2, 1, 2, 2, 1, 2, -1, 1, -2};
struct node {
    int x;
    int y;
    int val;
};

bool pd (int x, int y) {
    if(x <= n && x >= 1 && y >= 1 && y <= m) {
        return true;
    }
    return false;
} 

int main() {
    int x, y;
    cin >> n >> m >> x >> y;
    struct node nod;
    nod.x = x;
    nod.y = y;
    memset(ans,-1,sizeof(ans));
    ans[x][y] = 0;
    queue<node> que;
    que.push(nod);
    
    int temp ;
    while (!que.empty()) {
        int dx = que.front().x;
        int dy = que.front().y;
        que.pop();
        for(int i = 0; i < 8; i++) {
            int nx = dx + yd[i][0];
            int ny = dy + yd[i][1];
            if (pd(nx,ny) && ans[nx][ny] == -1) {
                nod.x = nx;
                nod.y = ny;
                temp =  ans[dx][dy] + 1;
                if(temp > ans[nx][ny]){
                    ans[nx][ny] = temp;
                }
                que.push(nod);
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            printf("%-5d",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}



