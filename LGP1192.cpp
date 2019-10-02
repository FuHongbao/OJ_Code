/*************************************************************************
	> File Name: LGP1192.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月25日 星期四 21时42分34秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int ans[150050];
int main() {
    int n,k;
    cin >> n >> k;
    memset(ans, 0, sizeof(ans));
    if(k == 1){
        cout<<"1"<<endl;
    } else {
        ans[0] = 1;
        ans[1] = 1;
        ans[2] = 2;
        for(int i = 3; i <= n; i++) {
            for(int j = 1; j <= k; j++) {
                if(i-j < 0) break;
                ans[i] += ans[i-j];
                ans[i] %= 100003;
            }
        }
        cout<<ans[n]%100003<<endl;
    }         
    return 0;
}






