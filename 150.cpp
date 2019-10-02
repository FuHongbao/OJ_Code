/*************************************************************************
	> File Name: 150.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月14日 星期五 10时07分11秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int a[205][205];
int main() {
    int n, m;
    cin >> n >> m; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[j][n - i - 1];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j != 0) cout<<" ";
            cout<<a[i][j];
        }
        cout<<endl;
    }

    return 0;
}




