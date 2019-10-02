/*************************************************************************
	> File Name: 128.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 18时49分44秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    int n;
    double a[1500];
    cin>>n;
    double sum = 0;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        sum += a[i];
    }
    printf("%.2lf\n",sum/n);
    return 0;
}



