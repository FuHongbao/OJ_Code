/*************************************************************************
	> File Name: 115.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月05日 星期三 20时30分13秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    char a[5],b[5];
    cin>>a>>b;
    if(!strcmp(a,b)){
        cout<<"100"<<endl;
        return 0;
    }
    if(a[0] == b[1] && a[1] == b[0]) {
        cout<<"20"<<endl;
    }else if(a[0] == b[1] || a[1] == b[0] ||a[0] == b[0] || a[1] == b[1]) {
        cout<<"2"<<endl;
    }else {
        cout<<"0"<<endl;
    }
    return 0;
}



