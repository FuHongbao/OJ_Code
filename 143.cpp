/*************************************************************************
	> File Name: 143.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 20时40分38秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;

int is_zhi(int x) {
    for(int i = 2; i < x; i++) {
        if(x % i == 0) {
            return 0;
        }
    }
    return 1;
}
int is_pingf(int x) {
    for(int i = 1; i <= sqrt(x); i++) {
        if(x == i*i) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int a,b;
    cin>>a>>b;
    int index = 0;
    int n = 0;
    for (int i = a; i <= b; i++) {
        if(i % 6 == 0) {
            int w1,w2,w3,w4;
            w1 = i/1000;
            w2 = i%1000/100;
            w3 = i%100/10;
            w4 = i%10;
            if(is_zhi(w1*10+w2) && is_pingf(w3*10+w4)) {
                if(index) {
                    cout<<" ";
                }
                cout<<i;
                n++;
                index = 1;
            }
        }
    }
    cout<<endl<<n<<endl;
    return 0;
}





