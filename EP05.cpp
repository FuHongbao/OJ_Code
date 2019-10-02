/*************************************************************************
	> File Name: EP05.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月02日 星期二 10时32分56秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 20

long long gcd(long long a, long long b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    long long ans = 1;
    for (long long i = 1; i <= 20; i++) {
        ans *= i/gcd(i, ans);
    }
    cout << ans << endl;
    return 0;
}

