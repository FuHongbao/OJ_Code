/*************************************************************************
	> File Name: 135.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 19时18分28秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    int mth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int x;
    int y,m,d;
    cin>>x;
    cin>>y>>m>>d;
    d += x;
    for(int j = y; ; j++) {
        if((y%4==0 && y%100 != 0) || y%100 == 0) {
            mth[2] = 29;
        }else {
            mth[2] = 28;
        }
        for(int i = m; i <= 12; i++) {
            if(d - mth[i] < 0) {
                printf("%d %d %d\n",j,i,d);
                return 0;
            }
            d -= mth[i];
            m+=1;
            m=m%12;
        }
        y+=1;
    }
    return 0;
}


