/*************************************************************************
	> File Name: 214.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月01日 星期一 19时56分19秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX_N 30
int arr[MAX_N + 5];

bool cmp(int a, int b) {
    return a > b;
}

int is_vaild(double s, double x) {
    for (int i = 1; x*i <= s; i++) {
        if (x * i== s) return 1;
    }
    return 0;
}

int main() {
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    cin >> k;
    sort(arr, arr + n, cmp);
    double sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }
    double ans = sum / k;
    char tmp[20] = {0};
    sprintf(tmp, "%lf", ans);
    int len = strlen(tmp);
    for (int i = len - 1; i >= 0; i--) {
        if (tmp[i] == '0') continue;
        if (tmp[i] == '.') {
            tmp[i] = '\0';
            break;
        }
        tmp[i + 1] = '\0';
        break;
    }
    printf("%s\n", tmp);
    return 0;
}




