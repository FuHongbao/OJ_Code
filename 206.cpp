/*************************************************************************
	> File Name: 206.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月09日 星期二 16时35分30秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
double moy[40][40];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> moy[i][j];
        }
    }
    for (int j = 0; j < m; j++) {
        double sum = 0;
        for (int i = 0; i < n; i++) {
            sum += moy[i][j];
        }
        cout << sum << endl;
    }
    return 0;
}

