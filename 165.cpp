/*************************************************************************
	> File Name: 165.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月16日 星期日 21时42分36秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
using namespace std;
bool is_pf(long long x) {
    long long tmp = sqrt(x);
    if (tmp * tmp == x) return true;
    else return false;
}

int main() {
    long long c;
    cin >> c;
    int ans = 0;
    for (long long i = 1; i < c; i++) {
        long long tmp = c*c - i*i;
        if (is_pf(tmp)) ans ++;
    }
    cout << ans / 2 << endl;
    return 0;
}



