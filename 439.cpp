/*************************************************************************
	> File Name: 439.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月13日 星期二 11时39分23秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    double x;
    cin >> x;
    double tmp = 2;
    int ans = 0;
    if (x == 0) {
        cout << "0" << endl;
        return 0;
    }
    tmp = 2;
    while (x > 0) {
        x -= tmp;
        ans += 1;
        tmp *= 0.98;
    }
    cout << ans << endl;
    return 0;
}



