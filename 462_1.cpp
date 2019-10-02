/*************************************************************************
	> File Name: 462_1.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月11日 星期日 21时43分59秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int man = 0;
int woman = 0;


int main() {
    int n;
    cin >> n;
    int qcnt = 0;
    long long nums[10005];
    char ch, str[50];
    for (int i = 0; i < n; i++) {
        cin >> ch;
        switch(ch) {
            case 'i':{
                cin >> str;
                int len = strlen(str);
                if ((str[len-2] + '0') % 2 == 0) {
                    woman += 1;
                } else {
                    man += 1;
                }
            }break;
            case 'q':{
                cin >> nums[qcnt++];
            }break;
        }
    }
    long long ans = 0;
    for (int i = 0; i < qcnt; i++) {
        ans += nums[i];
    }
    if (qcnt != 0)
    ans /= qcnt;
    cout << man << " " << woman << " " << ans << endl;
    return 0;
}

