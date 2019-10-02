/*************************************************************************
	> File Name: 227.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月17日 星期一 13时34分19秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstdio>
using namespace std;

long long qmul(long long a,long long b,long long p){
    long long res=0;
    while(b){
        if(b&1)
            res=(res+a)%p;
        a=(a<<1)%p;b>>=1;
    }
    return res;
}


int main() {
    long long a, b, p;
    scanf("%lld%lld%lld", &a, &b, &p);
    a %= p;
    b %= p;
    printf("%lld\n", qmul(a, b, p));
    return 0;
}


