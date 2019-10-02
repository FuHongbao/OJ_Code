/*************************************************************************
	> File Name: 440.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月13日 星期二 11时44分23秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int getNum(int n, int x) {
    int cnt = 0;
    while (n) {
        if (n % 10 == x) cnt ++;
        n /= 10;
    }
    return cnt;
}

int main() {
    int n, x;
    cin >> n >> x;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        cnt += getNum(i, x);
    }
    cout << cnt << endl;
    return 0;
}



