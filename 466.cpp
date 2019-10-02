/*************************************************************************
	> File Name: 466.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月11日 星期日 22时20分09秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int is_valid(int x) {
    int val = 0;
    int tmp = x;
    while (x) {
        val *= 10;
        val += (x % 10);
        x /= 10;
    }
    return tmp == val;
}

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (is_valid(i)) {
            cnt += 1;
        }
    }
    cout << cnt << endl;
    return 0;
}

