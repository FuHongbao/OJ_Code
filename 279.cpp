/*************************************************************************
	> File Name: 279.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月19日 星期一 14时46分15秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 1000000
#define BASE 31
#define MOD_P 10000009
char str[(MAX_N << 1) + 5];
char str2[MAX_N + 5];
long long h[(MAX_N << 1) + 5], base[MAX_N + 5];

void init() {
    base[0] = 1;
    for (int i = 1; i <= MAX_N;i ++) {
        base[i] = base[i - 1] * BASE % MOD_P;
    }
    return ;
}

void init_hash_code(char *str) {
    for (int i = 0; str[i]; i++) {
        h[i + 1] = (h[i] * BASE + str[i]) % MOD_P;
    }
    return ;
}

int check(char *a, char *b) {
    for (int i = 0; b[i]; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

int main() {
    init();
    scanf("%s%s", str, str2);
    int len1 = strlen(str);
    int len2 = strlen(str2);
    for (int i = 0; i < len1; i++) {
        str[i + len1] = str[i];
    }
    init_hash_code(str);
    long long code = 0;
    for (int i = 0; str2[i]; i++) {
        code = (code * BASE + str2[i]) % MOD_P;
    }
    int flag = 0;
    for(int i = 0; i < len1; i++) {
        long long temp_code = ((h[i + len1] - base[len1] * h[i]) % MOD_P + MOD_P) % MOD_P;
        if (temp_code - code) continue;
        if (!check(str+i, str2)) continue;
        flag = 1;
        break;
    }
    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

