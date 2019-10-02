/*************************************************************************
	> File Name: 192.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月14日 星期日 10时49分51秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
#include <stdio.h>
using namespace std;
#define EPSN 1e-6

double func(double x, int a) {
    return x * exp(x) - a;
}

double binary_search(double l, double r, int a) {
    double mid = (l + r) / 2.0;
    while (r - l > EPSN) {
        if (func(mid, a) * func(l, a) < 0) {
            r = mid;
        } else if (func(mid, a) * func(r, a) < 0) {
            l = mid;
        }
        mid = (l + r) / 2.0;
    }
    return mid;
}

int main() {
    int a;
    cin >> a;
    if (a == 0) {
        cout << "0" << endl;
        return 0;
    }
    double ans = binary_search(0, (double)a, a);
    printf("%.4lf\n", ans);
    return 0;
}


