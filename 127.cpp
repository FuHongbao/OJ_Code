/*************************************************************************
	> File Name: 127.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 18时40分51秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
int main() {
    double x,n;
    cin>>x>>n;
    for(int i = 0; i < n; i++) {
        x = x + (x*6/100);
    }
    printf("%d\n",(int)x);
    return 0;
}



