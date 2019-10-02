/*************************************************************************
	> File Name: 161.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月15日 星期六 16时11分33秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstdio>
using namespace std;

int main() {
    int x, n;
    cin>>x>>n;
    double xx = x;
    while (n--) {
        xx = xx * (1.0+0.06);
    }
    printf("%.6lf\n",xx);
    return 0;
}




