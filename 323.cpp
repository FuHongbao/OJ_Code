/*************************************************************************
	> File Name: 323.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月22日 星期四 18时15分18秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

#define MAX_N 10000


struct Data {
    int p, d;
} arr[MAX_N + 5];

bool cmp(const Data &a, const Data &b) {
    return a.p > b.p;
}

struct UnionSet {
    int fa[MAX_N + 5];
    void init(int n) {
        for (int i = 0; i <= n; i++) {
            fa[i] = i;
        }
    }
    int get(int x) {
        return (fa[x] = (x == fa[x] ? x : get(fa[x])));
    }
    //a作为儿子
    void merge(int a, int b) {
        fa[get(a)] = get(b);
    }
};

UnionSet u;


int solve() {
    int n;
    if(!(cin >> n)) return 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].p >> arr[i].d;
    }
    sort(arr, arr+n, cmp);
    u.init(MAX_N);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (u.get(arr[i].d) == 0) continue;
        ans += arr[i].p;
        int day = u.get(arr[i].d);
        u.merge(day, day - 1);
    }
    cout << ans << endl;
    return 1;
}

int main() {
    while(solve());
    return 0;
}

