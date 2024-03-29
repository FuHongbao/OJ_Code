/*************************************************************************
	> File Name: 56_1.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月27日 星期四 15时19分56秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 10
int jc[MAX_N + 5];
int num[MAX_N + 5];

void init (int n) {
    jc[0] = 1;
    num[0] = 1;
    for (int i = 1; i <= n; i++) {
        jc[i] = jc[i-1] * i;
        num[i] = 1;
    }
    return ;
}

int get_num(int k, int pos, int &val) {
    val = 1;
    int step = k / pos;
    for (int t = 0; t <= step; val += (t <= step)) {
        t += num[val];
    }
    k %= pos;
    num[val] = 0;
    return k;
}
int main() {
    int x, y;
    cin >> x >> y;
    init(x);
    int k = y - 1;
    for (int i = x; i >= 1; i--) {
        int val;
        k = get_num(k, jc[i - 1], val);
        cout << val;
    }
    cout << endl;

    return 0;
}

