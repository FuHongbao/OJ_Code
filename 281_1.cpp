/*************************************************************************
	> File Name: 281_1.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月21日 星期三 21时34分31秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

#define MAX_N 1000000
char str[MAX_N + 5] ;

struct Node {
    int flag;
    int next[26];
} tree[MAX_N + 5];
int root = 1, cnt = 1;

int getInd() {
    return ++cnt;
}

void insert(char *str) {
    int p = root;
    for (int i = 0; str[i]; i++) {
        int ind = str[i] - 'a';
        if (tree[p].next[ind] == 0) {
            tree[p].next[ind] = getInd();
        }
        p = tree[p].next[ind];
    }
    tree[p].flag += 1;
}

int getMax(char *t) {
    int p = root;
    int ans = 0;
    for (int i = 0; t[i] && p; i++) {
        int ind = t[i] - 'a';
        p = tree[p].next[ind];
        ans += tree[p].flag;
    }
    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;
    while (n--) {
        cin >> str;
        insert(str);
    }
    while (m--) {
        cin >> str;
        int ans = getMax(str);
        cout << ans << endl;
    } 
    return 0;
}

