/*************************************************************************
	> File Name: 130.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 19时06分07秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
int main() {
    double a;
    int n;
    cin>>a>>n;
    double ans = 0;
    for(int i = 1; i <= n; i++) {
        ans += a;
        ans = ans * 1.00417;
    }
    printf("$%.2lf\n",ans);
    return 0;
}



