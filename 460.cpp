/*************************************************************************
	> File Name: 460.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月12日 星期一 10时35分10秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 2; i <= n; i++) {
        ans = (ans + k) % i;
    }
    cout << ans + 1 << endl;
    return 0;
}

