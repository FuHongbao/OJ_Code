/*************************************************************************
	> File Name: 177.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月19日 星期三 12时10分00秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    char str[50], tmp[50];
    cin >> str;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        cout << str << endl;
        tmp[0] = str[len - 2];
        tmp[1] = str[len - 1];
        sprintf(tmp+2, "%s",str);
        tmp[len] = '\0';
        strcpy(str, tmp);
    }
    return 0;
}




