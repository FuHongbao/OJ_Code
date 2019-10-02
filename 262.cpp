/*************************************************************************
	> File Name: 262.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月30日 星期二 21时56分13秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 60000
int arr[MAX_N + 5];

int main() {
    int n;
    cin >> n;
    arr[1] = 1;
    for (int i = 2; i <= n; i++) {
        arr[i] = (i - 1) * arr[i - 1] + 1;
    }
    cout << arr[n] << endl;
    return 0;
}

