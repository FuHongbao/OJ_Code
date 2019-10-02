/*************************************************************************
	> File Name: 56.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月27日 星期四 11时57分33秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX_N 10
int pl[MAX_N + 5];
int num[MAX_N + 5];

void init(int n) {
    pl[0] = 1;
    num[0] = 1;
    for (int i = 1; i <= n; i++) {
        pl[i] = pl[i - 1] * i;
        num[i] = 1;
    }
    return ;
}

int get_num(int k, int val, int &x) {
    int step = k / val;
    x = 1;
    for (int t = 0; t <= step; x += (t <= step)) {
        t += num[x];
    }
    k %= val;
    num[x] = 0;
    return k;
}


int main() {
    int x, y;
    cin >> x >> y ;
    int k = y - 1;
    init(x);
    for (int i = x; i >= 1; i--) {
        int pos;
        k = get_num(k, pl[i-1], pos);
        printf("%d", pos);
    }
    cout<<endl;
    return 0;
}



