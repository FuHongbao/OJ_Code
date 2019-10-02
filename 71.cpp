/*************************************************************************
	> File Name: 71.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月21日 星期三 20时02分06秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 10000

struct UnionSet {
    int fa[MAX_N + 5], size[MAX_N + 5];
    void init(int n) {
        for (int i = 1; i <= n; i++) {
            fa[i] = i;
            size[i] = i;
        }
    }
    int get(int x) {
        return (fa[x] = (x == fa[x] ? x : get(fa[x])));
    }
    void merge(int a, int b) {
        int aa =get(a), bb = get(b);
        if(aa == bb) return;
        if (size[aa] < size[bb])  swap(aa, bb);
        fa[bb] = aa;
        size[aa] += size[bb];
    }
};

UnionSet u;

void read(int &n, int &m) {
    cin >> n >> m;
    u.init(n);
    return ;
}


int main() {
    int n, m;
    read(n, m);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1) {
            u.merge(b, c);
        } else {
            cout << (u.get(b) == u.get(c) ? "Yes" : "No") << endl;
        }
    }
    
    return 0;
}

