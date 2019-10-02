/*************************************************************************
	> File Name: 149.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月13日 星期四 16时47分07秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstdio>
using namespace std;

int main() {
    char s[100];
    scanf("%[^\n]s",s);
    int len = strlen(s);
    int ans = 0;
    for(int i = len - 1; i >= 0; i--) {
        if(s[i] == ' ') {
            break;
        }
        ans ++;
    }
    cout<<ans<<endl;
    return 0;
}



