/*************************************************************************
	> File Name: 142.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 20时26分24秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int huiwen(int x) {
   int a,b,c,d,e;
    a = x/10000;
    b = x%10000/1000;
    c = x%1000/100;
    d = x%100/10;
    e = x%10;
    if(e*10000+d*1000+c*100+b*10+a == x) {
        return 1;
    }else {
        return 0;
    }
}

int is_zhi(int x) {
    for(int i = 2; i < x; i++) {
        if(x%i==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a,b;
    cin>>a>>b;
    int index = 0;
    for(int i = a; i<=b; i++) {
        if(huiwen(i)) {
            if(is_zhi(i)) {
                if(index) {
                    cout<<" ";
                }
                cout<<i;
                index = 1;
            }
        }
    }
    cout<<endl;
    return 0;
}


