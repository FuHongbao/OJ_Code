/*************************************************************************
	> File Name: 111.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月12日 星期三 20时55分35秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if (n <= 3) {
        cout<<"14"<<endl;
    } else {
        double ans = 14;
        n-=3;
        ans += n*2.3;
        cout<<ans<<endl;
    }

    return 0;
}

