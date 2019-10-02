/*************************************************************************
	> File Name: 174.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月19日 星期三 11时48分42秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    char c;
    while (scanf("%c", &c)) {
        if(c == '\n') break;
        if (c != ' ') {
            cout << c;
            continue;
        }
        cout << "%20";
    }
    cout<<endl;
    return 0;
}




