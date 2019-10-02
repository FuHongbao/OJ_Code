/*************************************************************************
	> File Name: 107.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月12日 星期三 20时27分55秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if (n % 7 == 0 && n % 2 == 1) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;  
    }
    return 0;
}


