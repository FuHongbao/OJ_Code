/*************************************************************************
	> File Name: 179.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月27日 星期四 15时36分50秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
#include <stdio.h>
using namespace std;
#define EPS 1e-7
double func(int p, int q, double x) {
    return p * x + q ;
}

double erfen(int p, int q) {
    double a = 20;
    double b = -20;
    double mid = (a + b) / 2;
    while (fabs(func(p, q, mid)) > EPS) {
        if (func(p, q, mid) * func(p, q, a) < 0) {
            b = mid;
        } else if(func(p, q, mid) * func(p ,q, b) < 0){
            a = mid;
        }
        mid = (a + b) / 2;
    }
    return mid;
}

int main() {
    int p, q;
    cin >> p >> q;
    printf("%.4lf\n", erfen(p, q));
    return 0;
}


