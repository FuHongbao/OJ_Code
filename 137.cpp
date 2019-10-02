/*************************************************************************
	> File Name: 137.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 20时35分57秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m = n;
    char c = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout<<c;
            c += 1;
            if(c > 'Z') {
                c = 'A';
            }
        }
        cout<<endl;
        m--;
    }

    return 0;
}




