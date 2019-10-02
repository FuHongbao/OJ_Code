/*************************************************************************
	> File Name: 136.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 19时33分19秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++) {
        if(i%7 == 0) {
            printf("%d\n",i);
        }
    }

    return 0;
}


