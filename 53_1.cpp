/*************************************************************************
	> File Name: 53_1.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月27日 星期四 19时58分19秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 1000000
long long prime[MAX_N + 5] = {0};
long long sum_num[MAX_N + 5] = {0};
long long min_num[MAX_N + 5] = {0};

int main() {
    sum_num[1] = 1;
    for (int i = 2; i <= MAX_N; i++) {
        if(!prime[i]) {
            prime[++prime[0]] = i;
            sum_num[i] = i + 1;
            min_num[i] = i;
        }
        for (int j = 0; j <= prime[0]; j++) {
            if(prime[j] * i > MAX_N ) break;
            prime[prime[j]*i] = 1;
            if(i % prime[j] == 1) {
                sum_num[prime[j] * i] = sum_num[prime[j]] * sum_num[i];
                min_num[prime[j] * i] = prime[j];
            } else {
                min_num[prime[j] * i] = min_num[i] * prime[j];
                long long min_prime = min_num[prime[j] * i];
                long long rest = (i * prime[j]) / min_prime;
                sum_num[prime[j] * i] = sum_num[min_prime] * sum_num[rest];
                if(rest == 1) sum_num[prime[j] * i] = (min_prime * prime[j] - 1) / (prime[j] - 1);
                break;
            } 
        }
    }
    long long ans = -1;
    for (int i = 0; i <= MAX_N; i++) {
        if (sum_num[i] > ans) ans = sum_num[i];
    }
    cout << ans <<endl;
    return 0;
}


