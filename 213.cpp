/*************************************************************************
	> File Name: 213.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月01日 星期一 19时47分41秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 30
int a[MAX_N + 5];
int b[10];

bool cmp(int a, int b) {
    return a > b ;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 100) b[1]++;
        else if (a[i] >= 90 && a[i] <= 99) b[2]++;
        else if (a[i] >= 80 && a[i] <= 89) b[3]++;
        else if (a[i] >= 70 && a[i] <= 79) b[4]++;
        else if (a[i] >= 60 && a[i] <= 69) b[5]++;
        else if (a[i] < 60) b[6]++;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    for (int i = 1; i <= 6; i++) {
        if (i > 1) cout << " ";
        cout << b[i];
    }
    return 0;
}


