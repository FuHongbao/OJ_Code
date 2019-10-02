/*************************************************************************
	> File Name: 169.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月19日 星期三 10时03分09秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int is_in(char c, char *pass, int n) {
    for (int i = 0; i < n; i++) {
        if (pass[i] == c) {
            return i;
        }
    }
    return -1;
}

int main() {
    char pas_chr[30];
    int pas_num[30];
    char str[105];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> pas_chr[i];
        cin >> pas_num[i];
    }
    cin >> str;
    int len = strlen(str);
    int k, ans = 0;
    for (int i = 0; i < len; i++) {
        if ((k = is_in(str[i], pas_chr, n)) >= 0) {
            ans += pas_num[k];
        }
    }
    cout << ans << endl;
    return 0;
}




