/*************************************************************************
	> File Name: LGP1226.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月24日 星期三 13时25分55秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    long long b, p, k;
    cin >> b >> p >> k;
    cout << b << "^" << p << " mod " << k << "=";
    long long ans = 1;
    b = b % k;
    while (p > 0) {
        if (p & 1) {
            ans = (ans * b) % k;
        }
        b = ( b * b) % k;
        p >>= 1;
    }
    cout << ans%k << endl;
    return 0;
}



