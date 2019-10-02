/*************************************************************************
	> File Name: LGP1101.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月22日 星期一 18时26分36秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int n;
char a[10] = {' ','y','i','z','h','o','n','g'};
char yuan[105][105];
int bj[105][105];

bool pd(int x, int y) {
    if (x >= 1 && x <= n && y >= 1 && y <= n) {
        return true;
    } else {
        return false;
    }
}

int dfs (int x, int y, char c[], int m, int xi, int yi) {
    if (c[m] == 'g') {
        bj[x][y] = 1;
        return 1;
    }
    int nx = x + xi;
    int ny = y + yi;
    if (pd (nx, ny) && c[m] == yuan[x][y]) {
        if (dfs (nx, ny, c, m + 1, xi, yi)) {
            bj[nx][ny] = 1;
            return 1;
        }
    }

    return 0;
}
int main() {

    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> yuan[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
                if (yuan[i][j] == 'y') {   

                    for (int k = -1; k <= 1; k++)
                    for(int l = -1; l <= 1; l++) {
                        if (k == 0 && l == 0) continue;
                        if(yuan[i+k][j+l] == a[2])
                        if (dfs (i, j, a, 1,k,l)) bj[i][j] = 1;
                    }     
                }
        }
    }    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (bj[i][j] == 1) {
                cout << yuan[i][j];
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}




