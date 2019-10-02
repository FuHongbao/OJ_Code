/*************************************************************************
	> File Name: 121.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月05日 星期三 20时51分42秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    char a[5] = {'O','Y','H'};
    char c,b;
    cin>>c>>b;
    if(c == b) {
        cout<<"TIE"<<endl;
        return 0;
    }
    if(c == a[0] ) {
        if(b == a[1]) {
            cout<<"MING"<<endl;
            return 0;
        }    
        if(b == a[2]) {
            cout<<"LI"<<endl;
            return 0;
        }
    }
    if(c == a[1] ) {
        if(b == a[0]) {
            cout<<"LI"<<endl;
            return 0;
        }    
        if(b == a[2]) {
            cout<<"MING"<<endl;
            return 0;
        }
    }
    if(c == a[2] ) {
        if(b == a[0]) {
            cout<<"MING"<<endl;
            return 0;
        }    
        if(b == a[1]) {
            cout<<"LI"<<endl;
            return 0;
        }
    }
    
     
    return 0;
}


