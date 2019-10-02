/*************************************************************************
	> File Name: 188.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月27日 星期四 16时12分52秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 1000000
int prime[MAX_N + 5] = {0};
int num[MAX_N + 1] = {0};
int main() {
    int n, m;
    cin >> n >> m;
    num[0] = num[1] = 0;
    for (int i = 2; i <= n; i++) {
        if (!num[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i*prime[j] > n) break;
            num[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }

    for (int i = m; i <= n; i++) {
        if(!num[i]) {
            cout << i << endl;
        }
    }    
    return 0;
}



