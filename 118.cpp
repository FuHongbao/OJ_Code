/*************************************************************************
	> File Name: 118.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月12日 星期三 21时19分43秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int y;
    cin>>y;
    char str[15][10]={"null","rat","ox","tiger","rabbit","dragon","snake","horse","sheep","monkey","rooster","dog","pig"};
    if (y > 1900) {
        y -= 1900;
        y %= 12;
        cout<<str[y+1]<<endl;
    } else if (y < 1900){
        y = 1900 - y;
        y %= 12;
        cout<<str[12-y+1]<<endl;
    } else {
        cout<<"rat"<<endl;
    }

    return 0;
}

