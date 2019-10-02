/*************************************************************************
	> File Name: 200.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月09日 星期二 15时53分36秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 4, b = 7;
    double sum = 0;
    while (--n) {
        sum += (a*1.0)/(b*1.0);
        int t = a;
        a = b;
        b = t + b;
    }
    sum += (a*1.0)/b;
    printf("%d/%d\n%.2lf\n", a, b, sum);

    return 0;
}


