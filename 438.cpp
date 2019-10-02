/*************************************************************************
	> File Name: 438.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月13日 星期二 11时19分35秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    double high = 0.7783;
    double mid = 0.5283;
    double low = 0.4783;
    cin >> n;
    double ans = 0;
    if (n <= 240) {
        printf("%.1lf\n", low * n);
    } else if (n <= 400 && n >= 241) {
        ans = 240 * low;
        ans += (n - 240) * mid;
        printf ("%.1lf\n", ans);
    } else {
        ans = 240 * low;
        ans += 160 * mid;
        ans += (n - 400) * high;
        printf("%.1lf\n", ans);
    }
    return 0;
}




