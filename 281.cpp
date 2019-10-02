/*************************************************************************
	> File Name: 281.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月21日 星期三 16时07分42秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

#define MAX_N 1000000 
char str[MAX_N + 5];

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
        if (tree[p].next[ind] == 0) tree[p].next[ind] = getInd();
        p = tree[p].next[ind];
    }
    tree[p].flag += 1;
}

int get_max(char *str) {
    int p = root;
    int ans = 0;
    for (int i = 0; str[i] && p; i++) {
        p = tree[p].next[str[i] - 'a'];
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
    while(m--) {
        cin >> str;
        cout << get_max(str) << endl;
    } 
    return 0;
}

