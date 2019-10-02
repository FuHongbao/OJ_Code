/*************************************************************************
	> File Name: 186.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月27日 星期四 16时02分04秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 100000
int thb[MAX_N + 5];
int ans = 0;
int dg(int x, int n) {
    if (x > n) return ans;
    ans ++;
    dg(x + thb[x], n);
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> thb[i];
    }
    cout << dg(1, n) << endl;
    return 0;
}


