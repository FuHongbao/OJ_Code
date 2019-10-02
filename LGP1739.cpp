/*************************************************************************
	> File Name: LGP1739.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月26日 星期五 21时55分30秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stack>
#include <cstdio>
using namespace std;

int main() {

    char c;
    stack<char> st1,st2;
    int j = 0;
    while(cin>>c && c != '@') {
        if(c == '(') {
            st1.push(c);
        }
        if(c == ')') {
            st2.push(c);
        }
        if(st2.size() > st1.size()) {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(st1.size() == st2.size()) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}


