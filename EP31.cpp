/*************************************************************************
	> File Name: EP31.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月02日 星期二 15时02分27秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

long long  dp[10][205];
int w[10] = {1, 2, 5, 10, 20, 50, 100, 200};


int main() {
    for (int i = 0; i < 8; i++) {
        dp[i][0] = 1;
        for (int j = 1; j <= 200; j++) {
            dp[i][j] = 0;
            if (i - 1 >= 0) {
                dp[i][j] += dp[i - 1][j];
            }
            if (j >= w[i])
                dp[i][j] += dp[i][j - w[i]];
        }
    }    
    cout << dp[7][200] << endl;
    return 0;
}


