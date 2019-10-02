/*************************************************************************
	> File Name: 117.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月05日 星期三 20时23分22秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    char a[10];
    cin>>a;
    int len = strlen(a);
    for(int i = 0; i < len ; i++) {
        if(a[i] != a[len-i-1]) {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}


