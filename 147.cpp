/*************************************************************************
	> File Name: 147.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月12日 星期三 21时55分40秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    char c[15000];
    cin>>c;
    int len = strlen(c);
    int tmp = c[len-1] - '0';
    if(tmp % 2 == 0) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
    return 0;

}


