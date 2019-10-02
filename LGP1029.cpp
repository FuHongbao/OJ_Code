/*************************************************************************
	> File Name: LGP1029.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月25日 星期四 10时40分57秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;

int gcd (int a, int b) {
    return b == 0 ? a : gcd (b, a % b);
}

int main() {
    int x, y;
    cin >> x >> y;
    int ans = 0;
    if (y % x == 0) 
    for (int i = 1; i <= (int) sqrt((double) y / x); i++) {
        int temp = y / x;
        if (temp % i == 0) {
            int j = temp / i;
            if (gcd (j,i) == 1) {
                ans += 2;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

