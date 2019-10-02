/*************************************************************************
	> File Name: 148.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月13日 星期四 16时44分59秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    char a[100];
    cin>>a;
    int len = strlen(a);
    for (int i = len - 1; i >= 0; i--) {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}


