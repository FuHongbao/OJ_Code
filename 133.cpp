/*************************************************************************
	> File Name: 133.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 21时13分24秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m;
    for (int i = 1; i <= n; i++) {
            m = i;
        for(int j = 1; j <= n-i+1; j++){
            printf("%d*%d=%d",i,m,i*m);
            if(j != n-i+1) {
                printf("\t");
            }else {
                printf("\n");
            }
           m++; 
        } 
    }

    return 0;
}


