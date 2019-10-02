/*************************************************************************
	> File Name: 282.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月21日 星期三 16时51分52秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
using namespace std;
#define MAX_N 3200000
#define MAX_NUM 100000
#define BASE 30
int arr[MAX_NUM + 5];

struct Node {
    int num;
    int next[2];
} tree[MAX_N + 5];
int root = 1, cnt = 1;

int getInd() {
    return ++cnt;
}

void insert(int num) {
    int p = root;
    for (int i = BASE; i >= 0; i--) {
        int ind = !!((1 << i) & num);
        if (tree[p].next[ind] == 0) tree[p].next[ind] = getInd();
        p = tree[p].next[ind];
    }
    tree[p].num = num;
    return;
}

int find(int num) {
    int p = root;
    for (int i = BASE; i >= 0; i--) {
        int ind = !!((1 << i) & num);
        int noind = !ind;
        if (tree[p].next[noind]) p = tree[p].next[noind];
        else p = tree[p].next[ind];
    }
    return num ^ tree[p].num;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        insert(arr[i]);
    } 
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, find(arr[i]));
    } 
    cout << ans << endl;
    return 0;
}

