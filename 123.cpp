/*************************************************************************
	> File Name: 123.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月05日 星期三 21时04分34秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main() {
    double a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    if(a == c && b == d) {
        cout<<"YES"<<endl;
        return 0;
    }
    if(a >= c) {
        if(b <= d){
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }else if(a <= c){
        if(b >= d) {
            cout<<"YES"<<endl;
        }else { 
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

