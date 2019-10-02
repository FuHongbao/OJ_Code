/*************************************************************************
	> File Name: 329.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月22日 星期四 20时39分30秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#define MAX_N 100000
int c[MAX_N + 5];
int lowbit(int x) {
    return x & (-x);
}

void add(int x, int val, int len) {
    while(x <= len) c[x] += val, x += lowbit(x);
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
    int n, m, pre = 0, now;
    char str[5];
    scanf("%d", &n);
    //s0不使用
    for (int i = 1; i <= n; i++) {
        scanf("%d", &now);
        add(i, now - pre, n);
        pre = now;
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%s", str);
        switch(str[0]) {
            case 'C': {
                int a, b, c;
                scanf("%d%d%d", &a, &b, &c);
                add(a, c, n);
                add(b+1, -c, n);
            }break;
            case 'Q': {
                int x;
                scanf("%d", &x);
                printf("%d\n", query(x));
            } break;
        }
    }
    
    return 0;
}


