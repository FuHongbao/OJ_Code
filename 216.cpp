/*************************************************************************
	> File Name: 216.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月02日 星期二 20时02分13秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
char name[105][200];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        int len = strlen(name[i]);
        for (int j = 0;j < len - 3; j++) {
            name[i][j] = name[i][j+3];
        }
        name[i][len-3] = '\0';
    }
    for (int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if (strcmp(name[i], name[j]) > 0) {
                swap(name[i], name[j]);
            }
            
        }
        cout << name[i] << endl;
    }
    return 0;
}




