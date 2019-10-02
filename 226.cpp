/*************************************************************************
	> File Name: 226.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月25日 星期四 21时18分46秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

long long quickpow(long long a, long long b, long long c) {
    long long ans = 1;
    while (b) {
        if (b & 1) {
            ans = (ans * a) % c;
        }
        a = (a * a) % c;
        b >>= 1;
    }
    return ans;
}


int main() {
    long long a, b ,c;
    cin >> a >> b >> c;
    cout << quickpow(a, b, c) % c << endl;
    return 0;
}

