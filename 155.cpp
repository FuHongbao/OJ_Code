/*************************************************************************
	> File Name: 155.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月15日 星期六 08时44分56秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int base = 3;
    int incre = 2;
    long long ans = 0;
    while (n--) {
        ans += base;
        cout<<base<<endl;
        base += incre;
        incre += 2;
    }
    cout<<ans<<endl;
    return 0;
}



