/*************************************************************************
	> File Name: 202.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月09日 星期二 15时07分20秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX_N 1000

typedef struct Peo{
    int high;
    int num;
}Peo;
Peo a[MAX_N + 5];

bool cmp(Peo a, Peo b) {
    if (a.high == b.high) {
        return a.num < b.num;
    }
    return a.high < b.high;
}

int main() {
    int n ;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].high;
        a[i].num = i + 1;

    }
    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << a[i].num ;
    }
    cout << endl;
    return 0;
}



