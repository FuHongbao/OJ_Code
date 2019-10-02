/*************************************************************************
	> File Name: 158.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月15日 星期六 10时15分03秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = n;
    for (int i = 0; i <= n; i++) {
        for(int k = 0; k < i; k++) {
            cout<<" ";
        }
        if (m != 0)
            cout<<m;
        for(int j = 2 * n - 2*i - 1; j > 0; j--) {
            cout<<" ";
        }
        cout<<m<<endl;
        m --;
    }
    m = 1;
    for (int i = n - 1; i >= 0; i--) {
        for(int k = 0; k < i; k++) {
            cout<<" ";
        }
        if (m != 0)
            cout<<m;
        for(int j = 2 * n - 2*i - 1; j > 0; j--) {
            cout<<" ";
        }
        cout<<m<<endl;
        m ++;
    }
    return 0;
}




