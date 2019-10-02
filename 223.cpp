/*************************************************************************
	> File Name: 223.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月24日 星期六 20时13分11秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

#define MAX_N 10000

#define lc(ind) (tree[ind].lind)
#define rc(ind) (tree[ind].rind)
#define tag(ind) tree[ind].tag
#define sum(ind) tree[ind].sum
#define cnt(ind) tree[ind].cnt


struct Node {
    long long lind, rind, sum;
    long long tag,cnt;
} tree[(MAX_N << 1) + 5];
int root = 0;
int cnt = 1;
long long arr[MAX_N + 5];
int getNode() {
    return ++cnt;
}

void up(int ind) {
    tree[ind].sum = tree[lc(ind)].sum + tree[rc(ind)].sum;
}

void Down(int ind) {
    if (tree[ind].tag) {
        tag(lc(ind)) += tag(ind);
        tag(rc(ind)) += tag(ind);
        sum(lc(ind)) += tag(ind) * cnt(lc(ind));
        sum(rc(ind)) += tag(ind) * cnt(rc(ind));
        tag(ind) = 0;
    }
}

void build (int ind, int l, int r) {
    tree[ind].cnt = (r- l + 1);
    if (l == r) {
        tree[ind].sum = arr[l];
        return ;
    }
    int mid = (l + r) >> 1;
    tree[ind].lind = getNode();
    tree[ind].rind = getNode();
    build(lc(ind), l ,mid);
    build(rc(ind), mid + 1, r);
    up(ind);
    return;
}

void modify(int ind, int x, int y, long long d, int l, int r) {
    if (x <= l && r <= y) {
        //懒标记
        tree[ind].tag += d;
        tree[ind].sum += (d*tree[ind].cnt);
        return;
    }
    Down(ind);
    int mid = (l + r) >> 1;
    if (x <= mid) modify(lc(ind), x, y, d, l, mid);
    if (y > mid) modify(rc(ind), x, y, d, mid + 1, r);
    up(ind);
    return; 
}

long long query(int ind, int x, int y, int l, int r) {
    if (x <= l && r <= y) {
        return sum(ind);
    }
    Down(ind);
    int mid = (l + r) >> 1;
    long long ans = 0;
    if (x <= mid) ans += query(lc(ind), x, y, l, mid);
    if (y > mid) ans += query(rc(ind), x, y, mid + 1, r);
    return ans; 
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &arr[i]);
    }
    build(root, 1, n);
    for (int i = 0; i < m; i++) {
        long long a, b, c, d;
        scanf("%lld%lld%lld", &a, &b, &c);
        if (a == 1) {
            scanf("%lld", &d);
            modify(root, b,c, d, 1, n);
        } else {
            printf("%lld\n", query(root, b, c, 1, n));
        }
    }
    return 0;
}

