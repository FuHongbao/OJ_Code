/*************************************************************************
	> File Name: EP11.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月02日 星期二 11时46分51秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 20
int grid[MAX_N + 5][MAX_N + 5];
int yd[4][2] = {1, 1, 1, 0, 1, -1, 0, -1};

long long get_sum(int x, int y) {
    long long ans = 0;
    for (int i = 0; i < 4; i++) {
        long long tmp = grid[x][y];
        int nx = x;
        int ny = y;
        for (int j = 0; j < 3; j++) {
            nx += yd[i][0];
            ny += yd[i][1];
            if (nx < 0 || nx >= MAX_N || ny < 0 || ny >= MAX_N) {
                tmp = 0;
                break;
            }
            tmp *= grid[nx][ny];
        }
        if (tmp > ans) ans = tmp;
    }
    return ans ;
}

int main() {
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j < MAX_N; j++) {
            cin >> grid[i][j];
        }
    }
    long long tmp, ans = 0;
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j < MAX_N; j++) {
            tmp = get_sum(i, j);
            if (tmp > ans) {
                ans = tmp;
            }
        }
    }
    cout << ans << endl;
    return 0;
}



