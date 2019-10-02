/*************************************************************************
	> File Name: 283.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月21日 星期三 23时22分20秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
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

void insert(char *str) {
    int p = root;
    for (int i = 0; str[i]; i++) {
        int ind = str[i] - '0';
        if (tree[p].next[ind] == 0) tree[p].next[ind] = getInd();
        p = tree[p].next[ind];
    }
    tree[p].flag = 1;
}


int findAns(int ind) {
    if (tree[ind].flag) {
        int i;
        for (i = 0; i < 10; i++) {
            if (tree[ind].next[i]) break;
        }
        if (i != 10) return 0;
        return 1;
    }
    for (int i = 0; i < 10; i++) {
        if (tree[ind].next[i] == 0) continue;
        int k = findAns(tree[ind].next[i]);
        if (!k) return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        cin >> str; 
        insert(str);
    }
    if (findAns(root)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

