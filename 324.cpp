/*************************************************************************
	> File Name: 324.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月22日 星期四 18时49分52秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define MAX_N 500000

struct UnionSet {
    int fa[MAX_N + 5], val[MAX_N + 5], size[MAX_N + 5];
    void init(int n) {
        for (int i = 1; i <= n; i++) {
            fa[i] = i;
            size[i] = 1;
            val[i] = 0;
        }
    }
    int get(int x) {
        if (x == fa[x]) return x;
        int root = get(fa[x]);
        val[x] += val[fa[x]];
        return fa[x] = root;
    }
    //a作为儿子
    void merge(int a, int b) {
        int aa = get(a), bb = get(b);
        if (aa == bb) return ;
        fa[aa] = bb;
        val[aa] = size[bb];
        size[bb] += size[aa];
    }
};

UnionSet u;

int main() {
    int n;
    scanf("%d", &n);
    u.init(n);
    char str[10];
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%s%d%d", str, &a, &b);
        switch(str[0]) {
            case 'M': {
                u.merge(a, b);
            }break;
            case 'C': {
                if (u.get(a) != u.get(b)) {
                    printf("-1\n");
                } else {
                    printf("%d\n",abs(u.val[a] - u.val[b]) - 1);
                }
            }break;
        }
    }
    return 0;
}

