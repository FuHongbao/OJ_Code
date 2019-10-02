/*************************************************************************
	> File Name: 114.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月05日 星期三 20时15分17秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    char a[10] = {'h','l','c','d','w'};    
    char b[10][10] = {"He","Li","Cao","Duan","Wang"};
    char c;
    cin>>c;
    for(int i = 0; i< 5; i++) {
        if(c == a[i]) {
            printf("%s\n",b[i]);
            return 0;
        }
    }
    cout<<"Not Here"<<endl;
    return 0;
}


