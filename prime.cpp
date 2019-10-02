/*************************************************************************
	> File Name: prime.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月12日 星期一 16时54分57秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 100
int prime[MAX_N + 5];

int main() {
    for (int i = 2; i < MAX_N; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            prime[i*prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    for (int i = 1; i < prime[0]; i++) {
        cout << prime[i] << " ";
    }
    cout << endl;
    return 0;
}


