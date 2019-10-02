/*************************************************************************
	> File Name: EP47.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月01日 星期一 20时45分10秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 1000000
int prime[MAX_N + 5];


int main() {
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i; j <= MAX_N; j += i) {
            prime[j] += 1;
        }
    }
    for (int i = 2; i <= MAX_N; i++) {
        int flag = 1;
        for (int j = 0; j < 4 && flag; j++) {
            flag = (prime[i+j] == 4);
        }
        if (flag) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}




