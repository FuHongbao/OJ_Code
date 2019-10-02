/*************************************************************************
	> File Name: EP38.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月02日 星期二 16时52分40秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
using namespace std;

int digits(int x) {
    if (x == 0) return 1;
    return floor(log10(x)) + 1;
}

long long is_valid(int x) {
    int n = 1;
    long long ans = 0;
    while (digits(ans) < 9) {
        ans *= pow(10, digits(n * x));
        ans += n * x;
        n++;
    }
    if (digits(ans) != 9) return -1;
    int num[10] = {0};
    num[0] = 1;
    long long tmp = ans;
    while (tmp) {
        if (num[tmp % 10]) return -1;
        num[tmp % 10] += 1;
        tmp /= 10;
    }
    return ans;
}

int main() {
    long long ans = 0, tmp;
    for (int i = 1; i < 10000; i++) {
        tmp = is_valid(i);
        if (ans < tmp) ans = tmp;
    }
    cout << ans << endl;
    return 0;
}

