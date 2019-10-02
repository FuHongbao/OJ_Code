/*************************************************************************
	> File Name: 172.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月19日 星期三 11时41分58秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

char name[12][100]; 

int main() {
    int n = 10;
    for (int i = 0; i < n; i++) {
        cin >> name[i];
    }
    char tmp[100];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(name[i], name[j]) > 0) {
                strcpy(tmp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tmp);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }
    return 0;
}

