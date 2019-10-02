/*************************************************************************
	> File Name: 72.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月21日 星期三 20时47分28秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 10000

struct UnionSet {
    //val 代表节点和父节点的关系, 1代表输, 2代表赢
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

void read(int &a, int &b) {
    cin >> a >> b;
    u.init(a);
    return;
}

int main() {
    int n, m;
    read(n, m);
    for (int i = 0; i < m; i++) {
        int a, b ,c;
        cin >> a >> b >> c;
        if (a == 1) {
            u.merge(b, c, 2);
        } else {
            //b到根与c到根
            if (u.get(b) != u.get(c)) {
                cout << "Unknown" << endl;
            } else {
                switch((u.val[b] - u.val[c] + 3) % 3) {
                    case 0: cout<< "Tie" << endl; break;
                    case 1: cout<< "Loss" << endl; break;
                    case 2: cout<< "Win" << endl; break;
                }
            }
        }
    }
    return 0;
}

