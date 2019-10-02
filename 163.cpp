/*************************************************************************
	> File Name: 163.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月03日 星期三 16时13分17秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    double x;
    cin >> a >> b >> x;
    double c = a*a + b*b - 2.0*a*b*cos(x * 3.141592653589793 / 180);
    printf("%.6lf\n", sqrt(c));
    return 0;
}




