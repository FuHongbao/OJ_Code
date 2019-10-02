/*************************************************************************
	> File Name: 219.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月04日 星期四 11时22分11秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 10000
int arr[MAX_N + 5];

bool cmp1(int a, int b) {
    return a < b;
}
bool cmp2(int a, int b) {
    return a > b;
}

int main() {
    int n, l1, r1, l2, r2;
    cin >> n >> l1 >> r1 >> l2 >> r2;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    sort (arr + l1, arr + r1 + 1, cmp1);
    sort (arr + l2, arr + r2 + 1, cmp2);
    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << " ";
        cout << arr[i];
    }
    cout << endl;
    return 0;
}


