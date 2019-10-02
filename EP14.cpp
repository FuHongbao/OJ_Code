/*************************************************************************
	> File Name: EP14.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月02日 星期二 12时59分34秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 10000000
int klz[MAX_N + 5];

int get_len(long long n) {
    if (n == 1) return n;
    if (n <= MAX_N && klz[n] != 0) return klz[n];
    int ret ;
    if (n % 2 == 0) ret = get_len(n / 2) + 1;
    else ret = get_len(3 * n + 1) + 1;
    if (n < MAX_N) klz[n] = ret;
    return ret;
}

int main() {
    int ans = 0, num ;
    for (long long i = 13; i <= 1000000; i++) {
        int tmp = get_len(i);
        if (tmp > ans ) {
            ans = tmp;
            num = i;
        }
    }    
    cout << num << endl;
    return 0;
}


