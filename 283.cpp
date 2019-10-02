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
#define MAX_M 100000
char str[MAX_M + 5];

struct Node {
    int flag;
    int next[10];
} tree[MAX_M + 5];
int root = 1, cnt = 1;
int is_valild = 1;

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


void findAns(int ind) {
    if (tree[ind].flag) {
        int valid = 1;
        for (int i = 0; i < 10; i++) {
            if (tree[ind].next[i]) {
                valid = 0;
                break;
            }
        }
        if (!valid) {
            is_valild = 0;
        }
        return ;
    }
    for(int i = 0; i < 10; i++) {
        if (tree[ind].next[i] == 0) continue;
        findAns(tree[ind].next[i]);
        if (is_valild == 0) return;
    }
}

int main() {
    int n, t;
    cin >> t;
    while(t--) {
    memset(&tree, 0, sizeof(tree));
    cin >> n;
    while (n--) {
        cin >> str; 
        insert(str);
    }
    findAns(root);
    if (is_valild) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }
    return 0;
}

