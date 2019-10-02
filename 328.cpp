/*************************************************************************
	> File Name: 328.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月23日 星期五 19时03分18秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#define MAX_N 200000

int c[MAX_N + 5];

inline int lowbit(int x) {return x & (-x);}

void add(int x, int val, int n) {
    while(x <= n) {
        c[x] += val;
        x += lowbit(x);
    }
}

int query(int x) {
    int sum = 0;
    while(x) {
        sum += c[x];
        x -= lowbit(x);
    }
    return sum;
}

int main() {
    long long n, a;
    scanf("%lld", &n);
    long long ans1 = 0, ans2 = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &a);
        //不重复
        long long val1 = query(a);
        long long val2 = (a - 1 - val1);
        long long val3 = (i - 1 - val1);
        long long val4 = (n - a - val3);
        ans1 += val1 * val2;
        ans2 += val3 * val4;
        add(a, 1, n);
    }
    printf("%lld %lld\n", ans2, ans1);
    return 0;
}

