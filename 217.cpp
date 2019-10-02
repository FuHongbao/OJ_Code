/*************************************************************************
	> File Name: 217.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月04日 星期四 09时51分19秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
using namespace std;
#define MAX_N 100000
int arr[MAX_N + 5];

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    sort(arr+1, arr+n+1, cmp);
    int tmp = n / 2;
    if (n % 2 == 1) tmp += 1;
    int index = 0;
    for (int i = 1; i <= n; i++) {
        if (arr[i] >= arr[tmp]) {
            index ++;
        }
    }
    cout << arr[tmp] << " " << index << endl;
    return 0;
}



