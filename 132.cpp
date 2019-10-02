/*************************************************************************
	> File Name: 132.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 21时06分51秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    int a;
    cin>>n;
    long long ans = 1;
    while(n--) {
        cin>>a;
        ans *= a;
    }
    cout<<ans<<endl;
    return 0;
}



