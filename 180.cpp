/*************************************************************************
	> File Name: 180.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月19日 星期三 19时32分34秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

long long my_pow(int n) {
    long long ans = 1;
    for (int i = 0; i < n; i++) {
        ans *= 2;
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    long long ans = my_pow(n);
    cout << ans << endl;
    return 0;
}



