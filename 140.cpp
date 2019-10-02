/*************************************************************************
	> File Name: 140.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 21时28分54秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    char c = 'A';
    int cnt = 1;
    int nut = n-2;
    for (int i = 1; i <= n; i++) {
        for(int k = 0; k <= nut; k++) {
            cout<<" ";
        }
        nut --;
        for ( int j = 1; j <= cnt; j++) {
            cout<<c;
        }
        c+=1;
        cnt += 2;
        cout<<endl;
    }
    c-=2;
    cnt-=4;
    nut+=2;
    for (int i = n + 1; i <= 2 * n - 1; i++) {
        for(int k = 0; k <= nut; k++) {
            cout<<" ";
        }
        nut++;
        for (int j = 1; j <= cnt; j++) {
            cout<<c;
        }
        cout<<endl;
        c-=1;
        cnt -= 2;
    }
    return 0;
}




