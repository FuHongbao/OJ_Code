/*************************************************************************
	> File Name: EP46.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月01日 星期一 21时43分32秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
using namespace std;
#define MAX_N 1000000
int prime[MAX_N + 5];
int is_prime[MAX_N + 5];

int func(int n) {
    return n * n * 2;
}

bool binary_search(int (*f)(int ), int l, int r, int val) {
    if (l > r) return false;
    int mid = (l + r) / 2;
    if (f(mid) == val) return true;
    if (f(mid) > val) r = mid - 1;
    else l = mid + 1;
    return binary_search(f,l, r, val);
}

bool is_valid(int x) {
    for (int i = 1; i < prime[0] && prime[i] < x ; i++) {
        int val = x - prime[i];
        if (!binary_search(func, 1, val, val)) continue;
        return true;
    }
    return false;
}

int main() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_prime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j < prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    for (int i = 9; i <= MAX_N; i += 2) {
        if (!is_prime[i]) continue;
        if (!is_valid(i)) {
            cout << i <<endl;
            break;
        }
    }
    return 0;
}



