/*************************************************************************
	> File Name: 95.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月05日 星期三 19时55分36秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    int b = a%100/10;
    a = a%10;
    a = a*10+b;
    cout<<a<<endl;
    return 0;

}

