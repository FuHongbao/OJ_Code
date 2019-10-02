/*************************************************************************
	> File Name: 331.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月23日 星期五 21时26分20秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#define MAX_N 80000
#define lowbit(x) (x & (-x))
int ans[MAX_N + 5];
struct TreeArray {
    int n, dno[MAX_N + 5], ind[MAX_N + 5];
    void init(int n) {
        this->n = n;
        for (int i = 1; i <= n; i++) {
            dno[i] = 0;
            ind[i] = 0;
        }
    }
    void add(int x, int val) {
        while(x <= n) {
            dno[x] += val;
            x += lowbit(x);
        }
    }
    int query(int x) {
        int sum = 0;
        while (x) {
            sum += dno[x];
            x -= lowbit(x);
        }
        return sum;
    }
};

TreeArray tree;

int half_search(int l, int r, int val) {
    int mid;
    while (l < r) {
        mid = (l + r) / 2;
        int tmp = tree.query(mid);
        if (tmp < val) l = mid + 1;
        else r = mid;
    }
    return l;//对应前缀和的真正位置
}

int main() {
    int n;
    scanf("%d", &n);
    tree.init(n);
    for (int i = 1; i <= n; i++) {
        tree.add(i, 1);
        if (i == 1) continue;
        scanf("%d", &tree.ind[i]);
    }
    for (int j = n; j >= 1; j--) {
        int tmp = tree.ind[j] + 1;
        int ind;
      /*  for (int k = 1; k <= n; k++) {
            val = tree.query(k);
            if (val == tmp) {
                ind = k;
                break;
            } 
        }*/
        ind = half_search(1, n, tmp);
        tree.add(ind, -1);
        ans[j] = ind;
    }
    for (int i = 1; i <= n; i++) {
        printf("%d\n", ans[i]);
    }
    return 0;
}

