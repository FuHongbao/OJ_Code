/*************************************************************************
	> File Name: 239.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月13日 星期四 20时54分07秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
#include <cstdio>
using namespace std;


void get_XY (long long n, long long s, long long &x, long long &y) {
    if (n == 0) {
        x = 0, y = 0;
        return ;
    }
    long long xx, yy;
    long long len_n_1 = (int)pow(2, n-1);
    long long total_n = len_n_1 * len_n_1;
    long long ind1 = s / total_n;
    long long ind2 = s % total_n;
    get_XY(n - 1, ind2, xx, yy);
    switch (ind1) {
        case 0:{
            x = yy,y = xx;
        }
        break;
        case 1: {
            x = xx, y = yy + len_n_1;
        }
        break;
        case 2: {
            x = xx + len_n_1, y = yy + len_n_1;
        }
        break;
        case 3: {
            x = 2 * len_n_1 - yy - 1, y = len_n_1 - xx - 1;
        }
        break;
    }
    return ;
}


int main() {
    int t;
    cin>>t;
    long long n, s, d;
    while(t--) {
        cin>>n>>s>>d;
        long long x1,y1,x2,y2;
        get_XY(n, s - 1, x1, y1);
        get_XY(n, d - 1, x2, y2);
        printf("%.0lf\n", sqrt((1.0*(x1-x2)*10)*(1.0*(x1-x2)*10) + (1.0*(y1-y2)*10)*(1.0*(y1-y2)*10)));
    }
    return 0;
}



