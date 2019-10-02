/*************************************************************************
	> File Name: 333.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月24日 星期六 20时53分02秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 500000

#define lc(ind) (tree[ind].lind)
#define rc(ind) (tree[ind].rind)
#define SUM(ind) (tree[ind].sum)
#define MAX(ind) (tree[ind].m)
#define LMAX(ind) (tree[ind].lm)
#define RMAX(ind) (tree[ind].rm)


struct Node {
    int sum, m, lm, rm;
    int lind, rind;
    
} tree[(MAX_N << 1) + 5];
int root = 3, cnt = 4, ans = 0, temp = 1;
int getNode(){ 
    return cnt++; 
}

int arr[MAX_N + 5];


void up(int a, int b, int c) {
    SUM(a) = SUM(b) + SUM(c);
    LMAX(a) = max(LMAX(b), SUM(b) + LMAX(c));
    RMAX(a) = max(RMAX(c), SUM(c) + RMAX(b));
    MAX(a) = max( MAX(b), MAX(c) );
    MAX(a) = max(MAX(a), RMAX(b) + LMAX(c));
}

void up(int ind) {
    up(ind, lc(ind), rc(ind));
}


void build (int ind, int l, int r) {
    if (l == r) {
        SUM(ind) = MAX(ind) = LMAX(ind) = RMAX(ind) = arr[l];
        return;
    }
    int mid = (l + r) >> 1;
    lc(ind) = getNode();
    rc(ind) = getNode();
    build(lc(ind), l, mid);
    build(rc(ind), mid+1, r);
    up(ind);
}

void modify(int ind, int x, int y, int l, int r) {
    if (l == r) {
        SUM(ind) = MAX(ind) = LMAX(ind) = RMAX(ind) = y;
        return;
    }
    int mid = (l + r) >> 1;
    if (x <= mid) modify(lc(ind), x, y, l, mid);
    if (y >  mid) modify(rc(ind), x, y, mid + 1, r);
    up(ind);
}

void query(int ind, int x, int y, int l, int r) {
    if (x <= l && r <= y) {
        if (x == l) {
            tree[ans] = tree[ind];
        } else {
            up(temp, ans, ind);//访问是依次增大的
            swap(temp, ans); //ans,永远指向答案
        }
        return ;
    }
    int mid = (l + r) >> 1;
    if (x <= mid) query(lc(ind), x, y, l, mid);
    if (y > mid) query(rc(ind), x, y, mid + 1, r);
    return ;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    build(root, 1, n);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1) {
            if (b > c) swap(b, c);
            query(root, b, c, 1, n);
            cout << tree[ans].m << endl;
        } else {
            modify(root, b, c, 1, n);
        }
    }
    return 0;
}

