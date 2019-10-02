/*************************************************************************
	> File Name: 283_tmp.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月22日 星期四 00时08分08秒
 ************************************************************************/


#include <stdio.h>
#include <string.h>
#define MAX_N 100000
#define MAX_M 10000

struct Node {
    int flag;
    int next[10];
} tree[MAX_N + 5];

int root = 1, cnt = 1;
char str[MAX_M + 5][15];

int getNode() { return ++cnt; }
void insert(const char *str) {
    int p = root;
    for (int i = 0; str[i]; i++) {
        int ind = str[i] - '0';
        if (tree[p].next[ind] == 0) tree[p].next[ind] = getNode();
        p = tree[p].next[ind];
    }
    tree[p].flag += 1;
    return ;
}

int query(const char *str) {
    int p = root, cnt = 0;
    for (int i = 0; str[i] && p; i++) {
        p = tree[p].next[str[i] - '0'];
        cnt += tree[p].flag;
    }
    for (int i = 0; i < 10; i++) {
        if (tree[p].next[i]) {
            cnt += 1;
            break;
        }
    }
    return cnt;
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
        insert(str[i]);
    }
    for (int i = 0; i < n; i++) {
        if (query(str[i]) > 1) {
            printf("NO\n");
            break;
        } else {
            if (i == n - 1) printf("YES\n");
        }
    }
    return 0;
}

