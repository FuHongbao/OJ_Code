/*************************************************************************
	> File Name: EP08.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月02日 星期二 11时18分19秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX_N 1000
char num[MAX_N + 5];
int val[MAX_N + 5];

int main() {
    int len = 0;
    while(~scanf("%s", num + len)) len += strlen(num + len);
    long long p = 1, zero_cnt = 0, ans = 0;
    int ll = strlen(num);
    for (int i = 0; i < ll; i++) {
        val[i] = (num[i] - '0');
        if (val[i]) p *= val[i];
        else zero_cnt += 1;
        if (i < 13) continue;
        if (val[i - 13]) p /= val[i - 13];
        else zero_cnt -= 1;
        if (zero_cnt == 0 && p > ans ) ans = p;
    }
    cout << ans << endl;
    return 0;
}



