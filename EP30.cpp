/*************************************************************************
	> File Name: EP30.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月01日 星期一 22时29分59秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
using namespace std;
#define MAX_N 500000

bool is_valid(int x) {
    int tmp = x;
    int cnt = 0;
    while (x) {
        cnt += pow(x % 10, 5);
        x /= 10;
    }
    if (tmp == cnt) return true;
    else return false;
}


int main() {
    long long ans = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if(!is_valid(i)) continue;
        ans += i;
    }    
    cout << ans << endl;
    return 0;
}


