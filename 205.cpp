/*************************************************************************
	> File Name: 205.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月09日 星期二 16时22分43秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;
int a[50][50];
int main() {
    int n, m;
    cin >> n >> m;
    double ave[50] = {0};
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }
        ave[i] = (sum * 1.0 / m);
    }
    for (int i = 0; i < n; i++) {
        printf("%.6lf\n", ave[i]);
    }
    return 0;
}



