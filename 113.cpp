/*************************************************************************
	> File Name: 113.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月05日 星期三 20时00分15秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {

    int y,m;
    int moth[13] = {31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>y>>m;
    if (m == 2 &&(y%4==0 && y%100!=0)||y%400==0 ) {
         cout<<"29"<<endl;
    } else {
        cout<<moth[m-1]<<endl;
    }
    return 0;
}



