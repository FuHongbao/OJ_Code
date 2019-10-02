/*************************************************************************
	> File Name: 326.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月22日 星期四 15时07分48秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define MAX_N 50000

struct UnionSet {
    int fa[MAX_N + 5], val[MAX_N + 5];
    void init(int n) {
        for (int i = 1; i <= n; i++) {
            fa[i] = i;
            val[i] = 0;
        }
    }
    int get(int x) {
        if (x == fa[x]) return x;
        int root = get(fa[x]);
        val[x] = (val[x] + val[fa[x]]) % 3;
        return fa[x] = root;
    }
    void merge(int a, int b, int c) {
        int aa = get(a), bb = get(b);
        if (aa == bb) return;
        fa[aa] = bb;
        val[aa] = (c + val[b] - val[a] + 3) % 3;
    }   
};

UnionSet u;

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int wrong = 0;
    u.init(n);
    for (int i = 0; i < k; i++) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (b > n || c > n || (a == 2 && b == c)) {
            wrong += 1;
            continue;
        }
        int fb = u.get(b);
        int fc = u.get(c);
        if (fb == fc) {
            if (a == 1 && u.val[b] != u.val[c]) {
                wrong += 1;
            } else if (a == 2 && (u.val[b] - u.val[c] + 3) % 3 != 2) {
                wrong += 1;
            }
        } else {
            u.merge(c, b, a - 1);
        }
    }
    printf("%d\n", wrong);
    return 0;
}


