/*************************************************************************
	> File Name: 109.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月12日 星期三 20时33分29秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n) {
        if((n%10)%2 == 0) {
            cout<<"YES"<<endl;
            return 0;
        }
        n /= 10;
    }
    cout<<"NO"<<endl;
    return 0;
}


