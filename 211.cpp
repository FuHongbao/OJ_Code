/*************************************************************************
	> File Name: 211.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月29日 星期六 19时28分44秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

char str[30][100];


int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> str[i];
        int len = strlen(str[i]);
        for (int j = 0; j < len / 2; j++) {
            char tmp = str[i][j];
            str[i][j] = str[i][len - 1 - j];
            str[i][len - 1 - j] = tmp;
        }
    }
    for (int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                swap(str[i], str[j]);
            }
        }
        cout << str[i] << endl;
    } 
    return 0;
}

