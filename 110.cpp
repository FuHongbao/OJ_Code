/*************************************************************************
	> File Name: 110.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月12日 星期三 20时37分53秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    double x;
    cin>>x;
    double ans;
    if(x >= 15) {
        ans = 15 * 6.0;
        ans += (x-15)*9;
    } else {
        ans = x*6;
    }
    printf("%.2lf\n", ans);
    return 0;
}



