/*************************************************************************
	> File Name: 283.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月21日 星期三 23时22分20秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define MAX_M 200000
char str[MAX_M + 5];

struct Node {
    int flag;
    int next[10];
} tree[MAX_M + 5];
int root = 1, cnt = 1;

int getInd() {
    return ++cnt;
}

int insert(char *str) {
    int p = root;
    int ret = 1;
    for (int i = 0; str[i]; i++) {
        int ind = str[i] - '0';
        if (tree[p].flag) {
            ret = 0;
            return ret;
        }
        if (tree[p].next[ind] == 0) tree[p].next[ind] = getInd();
        p = tree[p].next[ind];
    }
    tree[p].flag = 1;
    if (ret == 0) return ret;
    for (int i = 0; i < 10; i++) {
        if (tree[p].next[i] != 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}


int main() {
    int n;
    int is_valild = 1;
    scanf("%d", &n);
    while (n--) {
        scanf("%s", str);
        if (is_valild)
        is_valild &= insert(str);
    }
    if (is_valild) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

