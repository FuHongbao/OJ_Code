/*************************************************************************
	> File Name: LGP1141.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月23日 星期二 13时47分39秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <queue>
#include <string.h>
using namespace std;
char mg[1005][1005];
int fans[1005][1005];
int num[1000005];
struct node {
    int x;
    int y;
};
int yd[4][2] = {0,1,1,0,0,-1,-1,0};

bool pd (char x, char y) {
    if (x == '0' && y == '1') return true;
    if (x == '1' && y == '0') return true;
    return false;
}

int main() {
    queue<node> que;
    struct node nd;
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mg[i][j];
        }
    }
    int index = 0;
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++){
        int ans = 0;

        if(fans[i][j] == 0) {
            index ++;
        nd.x = i;
        nd.y = j;
        que.push(nd);
        while (!que.empty()) {
            int nx = que.front().x;
            int ny = que.front().y;
            fans[nx][ny] = index;
            que.pop();
            ans ++;
            for(int i = 0; i <= 4; i++){
                int newx = nx + yd[i][0];
                int newy = ny + yd[i][1];
                if (newx >= 1 && newx <= n && newy >= 1 && newy <= n && fans[newx][newy] != index) {
                    if (pd (mg[newx][newy], mg[nx][ny])){
                        fans[newx][newy] = index;
                        nd.x = newx;
                        nd.y = newy;
                        que.push(nd);
                    }
                }
            }
        }
            num[index] = ans;
        }
        }
    }
    while(m--){
        cin >> x >> y;
        cout << num[fans[x][y]] <<endl;
    }
    return 0;
}
