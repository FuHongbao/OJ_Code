/*************************************************************************
	> File Name: 237.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月13日 星期四 19时26分28秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int arr[50];
int vis[20];
void output (int k, int n) {
    if (k == n) {
        for (int i = 0; i < n; i++) {
            if (i != 0) {
                cout << " ";
            }
            cout << arr[i];
        }
        cout<<endl;
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if (vis[i]) continue;
        arr[k] = i;
        vis[i] = 1;
        output (k+1, n);
        vis[i] = 0;
    }
}

int main() {
    int n;
    cin >> n;
    output (0, n);
    return 0;
}



