/*************************************************************************
	> File Name: 125.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 19时12分09秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
int main() {
    int h,m,s,t;
    cin>>h>>m>>s>>t;
    char ans[10];
    double bfb;
    h += t / 3600;
    m += t/60%60;
    s += t%60;
    if(s >= 60) {
        m++;
        s %= 60;
    }
    if(m >= 60) {
        h++;
        m%=60;
    }
    
    h %= 24;
    if(h >= 12) {
        strcpy(ans,"pm");
    }else {
        strcpy(ans,"am");
    }
    h %= 12;
    if(h == 0) {
        h = 12;
    }
        
    bfb = t*100.0/(24.0*60*60);
    printf("%d:%d:%d%s\n",h,m,s,ans);
    printf("%.2lf%%\n",bfb);
    return 0;
}


