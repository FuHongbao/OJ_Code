/*************************************************************************
	> File Name: 126.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 18时43分33秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

double mj(double r1) {
    return 3.14*r1*r1;
}

int main() {
    double r1,r2;
    cin>>r1>>r2;
    double m1 = mj(r1);
    double m2 = mj(r2);
    if(m1 > m2)
        printf("%.2lf",m1 - m2);
    else 
        printf("%.2lf",m2-m1);

    return 0;
}


