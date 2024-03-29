/*************************************************************************
	> File Name: 322.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月22日 星期四 14时53分43秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <map>
using namespace std;
#define MAX_N 1000000
map<int, int> ind;
int cnt = 0; //已经对多少点做了离散化

struct Data {
    int i, j, e;
} arr[MAX_N + 5];

struct UnionSet {
    int fa[(MAX_N << 1) + 5];
    void init(int n) {
        for (int i = 1; i <= n; i++) fa[i] = i;
    }
    int get(int x) {
        return (fa[x] = (x == fa[x] ? x : get(fa[x])));
    }
    void merge(int a, int b) {
        fa[get(a)] = get(b);
    }
} u;

int solve() {
    int n;
    cnt = 0;
    ind.clear();
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].i >> arr[i].j >> arr[i].e;
        if (ind.find(arr[i].i) == ind.end()) ind[arr[i].i] = (++cnt);
        if (ind.find(arr[i].j) == ind.end()) ind[arr[i].j] = (++cnt);
        arr[i].i = ind[arr[i].i];
        arr[i].j = ind[arr[i].j];
    }
    u.init(cnt);
    for (int i = 0; i < n; i++) {
        if (arr[i].e != 1) continue;
        u.merge(arr[i].i, arr[i].j);
    }
    int flag = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i].e == 1) continue;
        if (u.get(arr[i].i) != u.get(arr[i].j)) continue;
        flag = 0;
        break;
    }
    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}


