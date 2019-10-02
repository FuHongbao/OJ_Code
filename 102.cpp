/*************************************************************************
	> File Name: 102.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月12日 星期三 19时28分22秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    double a, b, c, t; 
    cin >> a >> b >> c >> t;
    //a = 1.0 / a;
    //b = 1.0 / b;
    //c = 1.0 / c;
    //double h = (1.0 - (a + b) * t) / (a + b - c);
    double h = (a*b*c - (t/a+t/b)*(a*b*c)) / (b*c + a*c - a*b);
    printf("%.2lf\n", h+t);
    return 0;
}



