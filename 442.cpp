/*************************************************************************
	> File Name: 442.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月13日 星期二 15时12分45秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int arr[50];

int main() {
    int n;
    cin >> n;
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    for (int i = 4; i <= n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i];
        if (i != n) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}


