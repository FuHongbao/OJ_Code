/*************************************************************************
	> File Name: LGP1605.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月22日 星期一 17时20分52秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int n, m, t;
int ans;
int yd[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
int a[50][50];

bool pd (int x, int y) {

    if (a[x][y] == 0 && x >=1 && x <= n && y >= 1 && y <= m){
        return true;
    } else {
        return false;
    }
}

void dfs (int x, int y, int fx, int fy) {
    if (x == fx && y == fy) {
        ans ++;
        return ;
    }
    for (int i = 0; i < 4; i++) {
        int nx = x + yd[i][0], ny = y + yd[i][1];
        if (pd (nx, ny)) {
            a[nx][ny] = 1;
            dfs (nx, ny, fx, fy); 
            a[nx][ny] = 0;
        }
    }
    return ;
}

int main() {
    int sx, sy, fx, fy;
    int x, y;
    memset(a, 0, sizeof(a));
    cin >> n >> m >> t;
    cin >> sx >> sy >> fx >> fy;
    for(int i = 1; i <= t; i++) {
        cin >> x >> y;
        a[x][y] = 1;
    }
    a[sx][sy] = 1;
    dfs (sx, sy, fx, fy);
    cout << ans << endl;
    return 0;
}




