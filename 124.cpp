/*************************************************************************
	> File Name: 124.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 19时07分27秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a >= 1 || b <= 50) {
        if( c <= 25 || d >= 5) {
            cout<<"ok"<<endl;
        }else {
            cout<<"pass"<<endl;
        }
    } else {
            cout<<"pass"<<endl;
    }

    return 0;
}


