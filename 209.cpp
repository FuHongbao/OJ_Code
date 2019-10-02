/*************************************************************************
	> File Name: 209.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月09日 星期二 16时57分54秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
double a[105];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    for (int i = 0; i < n; i++) {
        cout << a[i]<<endl;
    }
    return 0;
}


