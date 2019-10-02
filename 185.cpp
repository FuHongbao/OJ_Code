/*************************************************************************
	> File Name: 185.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月15日 星期六 18时59分55秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int fbnq(int x) {
    if(x <= 2) return 1;
    return fbnq(x - 1) + fbnq(x - 2);
}

int main() {
    int n;
    cin>>n;
    cout<<fbnq(n)<<endl;
    return 0;
}

