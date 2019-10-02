/*************************************************************************
	> File Name: 449.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月11日 星期日 22时10分44秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int arr[25][25];


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == j) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
            }
            cout << arr[i][j];
            if (i != j)
                cout <<" ";
        }
        cout << endl;
    }

    return 0;
}


