/*************************************************************************
	> File Name: 190.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月05日 星期五 18时43分30秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 8000000
int prime[MAX_N + 5];
int is_prime[MAX_N + 5];

int main() {
    int n ;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (!is_prime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > n) break;
            is_prime[i*prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    int ans = 0;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] == 1) continue;
        int val = n - i;
        if (val < i) break;
        if (is_prime[val] == 0) ans ++;
    }
    cout << ans << endl;
    return 0;
}



