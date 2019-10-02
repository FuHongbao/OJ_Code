/*************************************************************************
	> File Name: 122.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 15时38分11秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    int index = 12*60*60;
    int pm_index = 13*60*60;
    char str[20][20]={"am", "midnoon", "pm"};
    int a ;
    cin>>a;
    if (a>=index && a <= pm_index) {
        int b,c,d;
        b = a / 3600;
        c = a / 60 % 60;
        d = a % 60;
        printf("%02d:%02d:%02d %s\n",b,c,d,str[1]);
    }else if(a<index){
        int b,c,d;
        b = a / 3600;
        c = a / 60 % 60;
        d = a % 60;
        printf("%02d:%02d:%02d %s\n",b,c,d,str[0]);
        
    }else if(a>pm_index) {
        a = a - index;
        int b,c,d;
        b = a / 3600;
        c = a / 60 % 60;
        d = a % 60;
        printf("%02d:%02d:%02d %s\n",b,c,d,str[2]);
          
    }
    return 0;
}



