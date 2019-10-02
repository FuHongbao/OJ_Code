/*************************************************************************
	> File Name: 193.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月09日 星期二 15时43分46秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 100000
long long num[MAX_N + 5];

bool binary_search(int x, int n) {
    int l = 0, r = n;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(num[mid] == x) return true;
        if (num[mid] > x) r = mid - 1;
        else if (num[mid] < x) l = mid + 1;
    }
    return false;
}


int main() {
    long long n, k, s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> k >> s;
    if (binary_search(s - k, n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}





