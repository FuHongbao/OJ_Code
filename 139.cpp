/*************************************************************************
	> File Name: 139.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 19时35分34秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int cnt = n-1;
    int nut = 2;
    for(int i = 1; i <= n; i++) {
        for(int j = cnt; j > 0; j--) {
            cout<<" ";
        }
        cnt--;
        for(int k = 0; k < nut; k++) {
            cout<<"A";
        }
        nut+=2;
        cout<<endl;
    }
    cnt = 0;
    for(int i = n+1; i <= 2*n -1; i++) {
        cnt++;
        for(int j = cnt; j > 0; j--) {
            cout<<" ";
        }
        for(int k = nut-4; k > 0;k--) {
            cout<<"A";
        }
        cout<<endl;
        nut -= 2;
    }

    return 0;
}


