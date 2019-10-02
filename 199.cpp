/*************************************************************************
	> File Name: 199.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月28日 星期五 22时33分28秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 100000
int a[15];
int f[MAX_N + 5];
int func(int x, int m){
    if (x < 10) return x;
    if (f[x] != 0) return f[x];
    int ans = 0;
    for (int i = 1; i <= 10; i++) {
        ans += (a[i] * func(x - i, m)) % m;
        ans %= m;
    }
    f[x] = ans;
    return f[x];
}

int main() {
    int k, m;
    cin >> k >> m;
    for (int i = 1; i <= 10; i++) {
        cin >> a[i];
    }
    int ans = func(k, m);
    cout << ans << endl;
    return 0;
}
