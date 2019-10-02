/*************************************************************************
	> File Name: EP32.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月02日 星期二 15时57分56秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
using namespace std;
#define MAX_N 1000000

int digit(int x) {
    if (x == 0) return 1;
    return floor(log10(x)) + 1;
}

bool is_in (int x, int *num) {
    while (x) {
        if (num[x % 10]) return false;
        num[x % 10] += 1;
        x /= 10;
    }
    return true;
}

bool is_valid(int a, int b, int c) {
    if (digit(a) + digit(b) + digit(c) != 9) return false;
    int num[10] = {0};
    num[0] = 1;
    if (!is_in(a, num)) return false;
    if (!is_in(b, num)) return false;
    if (!is_in(c, num)) return false;
    return true;
}


int can[MAX_N + 5];
int main() {
    int sum = 0;
    for (int i = 1; i <= 99; i++) {
        for (int j = i + 1; j < 10000; j++) {
            if (!is_valid(i, j, i*j)) continue;
            if (can[i * j]) continue;
            sum += i * j;
            can[i * j] = 1;
        }
    }
    cout << sum << endl;
    return 0;
}



