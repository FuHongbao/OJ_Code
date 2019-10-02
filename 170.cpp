/*************************************************************************
	> File Name: 170.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月19日 星期三 10时15分39秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

char str[100][500];
void change(char *str) {
    char mub[500], tub[500];
    int len = strlen(str);
    strcpy(mub, "Ban_smoking");
    strcpy(tub, "No_smoking");

    for (int i = 0; i < len; i++) {
        if (str[i] == 'B') {
            int j ;
            for (j = 0; j < 11 && j < len; j++) {
                if (str[i + j] != mub[j]) {
                    break;
                }
            }
            if (j == 11) {
                cout << tub;
                i += 10;
            } else {
                cout << str[i];
            }
        } else {
            cout << str[i];
        }
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> str[i];
    }
    for (int i = 0; i < n ; i++) {
        change(str[i]);
    }

    return 0;
}


