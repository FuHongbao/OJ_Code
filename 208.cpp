/*************************************************************************
	> File Name: 208.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月09日 星期二 16时53分33秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int num[200] = { 0 };

int main() {
    int m, n;
    cin >> m;
    int k;
    for (int i = 0; i < m; i++) {
        cin >> k;
        num[k] += 1;
    }
    cin >> n;
    for (int i = 100; i >= 0; i--) {
        if (num[i] >= n) {
            cout << num[i] << endl;
            return 0;
        }
    }
    return 0;
}


