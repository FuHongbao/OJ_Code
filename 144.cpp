/*************************************************************************
	> File Name: 144.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月12日 星期三 21时38分23秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    char c[150];
    cin >> c;
    int len = strlen(c);
    int ans = 0;
    for(int i = 0 ; i < len; i++) {
        if (c[i]=='A'){
            ans ++;
        }
    }
    cout<<ans<<endl;
    return 0;
}


