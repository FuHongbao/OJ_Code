/*************************************************************************
	> File Name: 278_1.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月18日 星期日 18时57分50秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 1000000
char str[MAX_N + 5];
int nxt[MAX_N + 5];
int lenth[MAX_N + 5];


void get_next(char *str, int *nxt) {
    nxt[0] = -1;
    int j = -1;
    for (int i = 1; str[i]; i++) {
        j = nxt[i - 1];
        while (j != -1 && str[i] != str[j + 1]) j = nxt[j];
        if (str[i] == str[j + 1]) nxt[i] = j + 1;
        else nxt[i] = -1;
    }
}

int main() {
    int n;
    cin >> n;
    cin >> str;
    get_next(str, nxt);
    for (int i = 0; i < n; i++) {
        if (nxt[i] == -1 || i - nxt[i] != lenth[nxt[i]]) {
            lenth[i] = i + 1;
        } else {
            lenth[i] = lenth[nxt[i]];
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (lenth[i] == i+1) continue;
        cout << i + 1 << " " << (i + 1) / lenth[i] << endl;
    }
    
    return 0;
}

