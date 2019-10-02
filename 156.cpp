/*************************************************************************
	> File Name: 156.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月15日 星期六 08时51分02秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
using namespace std;

bool iswq(int x) {
    for (int i = 1; i <= sqrt(x); i++) {
        if (x == i*i) {
            return true;
        }
    }
    return false;
  /*  if (sqrt(x) * sqrt(x) == x) {
        return true;
    } else {
        return false;
    }*/
}

bool iszs(int x) {
    for(int i = 2; i < x; i++) {
        if (x % i == 0) {
           return false; 
        }
    }
    return true;
}

int main() {
    int a, b;
    cin>>a>>b;
    int index = 0;
    int ans = 0;
    for (int i = a; i <= b; i++) {
        int w1,w2;
        w1 = i / 100;
        w2 = i % 100;
        if (iswq(w1) && iswq(w2) && iszs(i)) {
            ans ++;
            if (index) cout<<" ";
            cout << i;
            index = 1;
        }
    }
    cout << endl << ans << endl;
    return 0;
}



