/*************************************************************************
	> File Name: 204.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月09日 星期二 16时18分31秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int a[50][50];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n;i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n;i++) {
        for (int j = 0; j < n; j++) {
            if(i == j) cout << a[i][j] << endl;
        }
    }
    
    return 0;
}


