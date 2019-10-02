/*************************************************************************
	> File Name: 168.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月17日 星期一 13时00分56秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

char str[105][100];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        int len = strlen(str[i]);
        if(str[i][0] >= 'a' && str[i][0] <= 'z') {
            str[i][0] = str[i][0] - 32;
        }
        for (int j = 1; j < len; j++) {
            if (str[i][j] >= 'A' && str[i][j] <= 'Z') {
                str[i][j] = str[i][j] + 32;
            } 
        }
    }
    char tmp[100];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(tmp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], tmp);
            } 
        }
    }
    for(int i = 0; i < n; i++) {
        cout<<str[i]<<endl;
    }
    
    return 0;
}



