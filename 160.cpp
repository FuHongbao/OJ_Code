/*************************************************************************
	> File Name: 160.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月15日 星期六 10时34分36秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstdio>
#include <cmath>
#define PI 3.14
using namespace std;

int main() {
    double r, h;
    cin>>r>>h;
    double di, ce;
    double d = 2*r;
    di = PI * r * r + d * d;
    double xie = sqrt(2) * d, byuan = PI * r;
    ce = byuan * h + d * h + xie * h;
    printf("%.2lf\n", ce + di);
    return 0;
}




