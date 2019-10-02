/*************************************************************************
	> File Name: 116.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月12日 星期三 21时07分12秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
using namespace std;

int main() {
    int a[5];
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    if (a[0]+a[1] <= a[2]) {
        cout<<"illegal triangle"<<endl;
    }else if (pow(a[0],2)+pow(a[1],2) > pow(a[2],2)) {
        cout<<"acute triangle"<<endl;
    }else if (pow(a[0],2)+pow(a[1],2) == pow(a[2], 2)) {
        cout<<"right triangle"<<endl;
    }else if (pow(a[0],2)+pow(a[1],2) < pow(a[2],2)) {
        cout<<"obtuse triangle"<<endl;
    }
    return 0;
}



