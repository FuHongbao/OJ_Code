/*************************************************************************
	> File Name: 210.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月29日 星期六 20时21分48秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
char str[30][100];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                swap(str[i], str[j]);
            }
        }
        cout << str[i];
        if (i != n-1) {
            cout <<" ";
        }
    }
    cout << endl;

    return 0;
}



