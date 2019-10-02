/*************************************************************************
	> File Name: 176.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月19日 星期三 12时00分45秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

char mub[1005], src[1005];
int main() {
    scanf("%[^\n]s", mub);
    getchar();
    scanf("%[^\n]s", src);
    int cnt = 0;
    int len = strlen(mub);
    int len1 = strlen(src);
    for (int i = 0; i < len; i++) {
        if (mub[i] = src[0]) {
            int j;
            for (j = 0; j < len1; j++) {
                if (mub[i + j] != src[j]) {
                    break;
                }
            }
            if (j == len1) {
                cnt ++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}




