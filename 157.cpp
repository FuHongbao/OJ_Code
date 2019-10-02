/*************************************************************************
	> File Name: 157.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月15日 星期六 09时50分55秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    char str[30] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T','U','V','W','X','Y','Z'};
    char c = 'A';
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for(int k = 1; k < i; k++) {
            cout<<" ";
        }
        char cc = c + i - 1;
        for (int j = i; j <= n; j++) {
            cout<<cc;
            cc += 1;
        }
        cc -= 2;
        for(int j = n+1; j <= n * 2 - i; j++) {
            cout<<cc;
            cc -= 1;
        }
        cout<<endl;
    }
    for (int i = n - 1; i > 0; i--) {
        for (int k = 1; k < i; k++) {
            cout<<" ";
        }
        char cc = c + i - 1;
        for (int j = i; j <= n; j++) {
            cout<<cc;
            cc += 1;
        }
        cc -= 2;
        for(int j = n+1; j <= n * 2 - i; j++) {
            cout<<cc;
            cc -= 1;
        }
        cout<<endl;

    }
    return 0;
}




