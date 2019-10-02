/*************************************************************************
	> File Name: 108.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月12日 星期三 20时30分00秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    char c;
    cin>>c;
    double a, b;
    cin>>a>>b;
    if(c == 't') {
        printf("%.2lf\n", a*b/2);
    } else {
        printf("%.2lf\n", a*b);
    }
    return 0;
}



