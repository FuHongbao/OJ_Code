/*************************************************************************
	> File Name: 278.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月16日 星期五 13时47分44秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 1000000

char str[MAX_N + 5];
int pre[MAX_N + 5];
int ans[MAX_N + 5];

void get_next(char *str, int *nxt) {
    nxt[0] = -1;
    int j = -1;
    for (int i = 1; str[i]; i++) {
        while (j != -1 && str[i] != str[j + 1]) j = nxt[j];
        if (str[j + 1] == str[i]) j += 1;
        nxt[i] = j;
    }
}

int main() {
    int n;
    cin >> n;
    cin >> str;
    get_next(str, pre);
    for (int i = 0; i < n; i++) {
        if (pre[i] == -1 || i - pre[i] != ans[pre[i]]) {
            ans[i] = i + 1;
        } else {
            ans[i] = ans[pre[i]];
        }
    }
    for (int i = 0; i < n; i++) {
        if (ans[i] == i+1) continue;
        cout << i + 1 << " " << (i + 1)/ans[i] << endl;
    }
    return 0;
}


