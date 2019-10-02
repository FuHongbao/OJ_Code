/*************************************************************************
	> File Name: EP36.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月02日 星期二 10时23分51秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 1000000

int resver(int n, int base) {
    int tmp = 0;
    while (n) {
        tmp = tmp * base + (n % base);
        n /= base;
    }
    return tmp;
}

int main() {
    int base2, base10;
    long long sum = 0;
    for (int i = 1; i < MAX_N; i++) {
        base2 = resver(i, 2);
        base10 = resver(i, 10);
        if (base2 == base10 && base2 == i && base10 == i) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}

