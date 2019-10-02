/*************************************************************************
	> File Name: 191.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月06日 星期六 11时37分22秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX_N 8000000
int prime[MAX_N + 5] = {0};

int main() {
    int l, r;
    cin >> l >> r;
    for (int i = 2; i <= r; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > r) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    int min = MAX_N;
    int max = -9999;
    int a, b, c, d;
    int cnt = 0;
    for (int j = 1; prime[j + 1] <= r && j + 1 <= prime[0]; j++) {
        if (prime[j] < l) continue;
        cnt ++;
        if (prime[j + 1] - prime[j] < min) {
            a = prime[j];
            b = prime[j + 1];
            min = prime[j + 1] - prime[j];
        }
        if (prime[j + 1] - prime[j] > max) {
            c = prime[j];
            d = prime[j + 1];
            max = prime[j + 1] - prime[j];
        }
    } 
    if (cnt < 2) {
        cout << "There are no adjacent primes." << endl;
    } else {
        printf("%d,%d are closest, %d,%d are most distant.\n", a, b, c, d);
    }
    return 0;
}





