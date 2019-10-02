/*************************************************************************
	> File Name: 100.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月07日 星期五 12时35分18秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    double n;
    int k = 6;
    cin>>n;
    double t = 0;
    while (k--) {
        t += n;
        t *= 1.00417;
    }
    printf("$%.2lf\n",t);
    return 0;
}




