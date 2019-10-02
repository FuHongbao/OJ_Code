/*************************************************************************
	> File Name: LGP1045.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月25日 星期四 13时08分14秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
using namespace std;

long long ans[2005];
long long base[2005];

void cheng1() {
    long long temp[2005];
    memset(temp,0,sizeof(temp));
    for (int i = 0; i <= 500; i++){
        for(int j = 0; j <= 500; j++) {
            temp[i + j] += ans[i] * base[j];
        }
    }
    for (int i = 0; i <= 500; i++) {
        if (temp[i] >= 10) {
           temp[i+1] += (temp[i] / 10);
            temp[i] %= 10;
        }
    }
    for(int i = 0; i<= 500; i++) {
        ans[i] = temp[i];
    }
}
void cheng2() {
    long long temp[2005];
    memset(temp,0,sizeof(temp));
    for (int i = 0; i <= 500; i++){
        for(int j = 0; j <= 500; j++) {
            temp[i + j] += base[i] * base[j];
        }
    }
    for(int i = 0; i<= 500; i++) {
        base[i] = temp[i];
    }
    for (int i = 0; i <= 500; i++) {
        if (base[i] >= 10) {
           base[i+1] += (base[i] / 10);
            base[i] %= 10;
        }
    }
}

int main() {
    
    int n;
    int ws;
    memset(ans,0,sizeof(ans));
    memset(base,0,sizeof(base));
    cin >> n;
    ws = n * log10(2) + 1;
    base[0] = 2;
    ans[0] = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            cheng1();
        }
        cheng2();
        n /= 2;
    }
    int t = 0;
    cout << ws <<endl;
    ans[0] --;
    for(int i = 499; i >= 0; i--) {
        t++;
        cout << ans[i];
        if(t == 50) {
            cout << endl;
            t = 0;
        }
    }
    return 0;
}


