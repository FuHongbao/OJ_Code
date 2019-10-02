/*************************************************************************
	> File Name: 189.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月27日 星期四 16时51分23秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX_N 1000000
int a[MAX_N + 5];
int b[MAX_N + 5];
int half_serach(int l, int r, int val){
    int mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (val == a[mid]) return mid;
        if (val > a[mid]) l = mid + 1;
        else r = mid - 1;
    }
    return 0;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int k;
    for (int i = 1; i <= m; i++) {
        cin >> k;
        b[i] = half_serach(1, n , k);
    }
    for (int i = 1; i <= m; i++) {
        if (i > 1) cout << " ";
        cout << b[i];
    }
    return 0;
}




