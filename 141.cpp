/*************************************************************************
	> File Name: 141.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 19时49分02秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    char str[200];
    cin>>n;
    str[1] = 'A';
    for(int i = 2; i <= n+1; i++) {
        str[i] = str[i-1]+1;
    }
    for(int i = n+2; i <= 2*n+1; i++) {
        str[i] = str[i-1] - 1;
    }
    int cnt = 0;
    int nut = 1;
    int ent = 2*n+1;
    for(int i = 1; i <= n+1; i++) {
        for(int j = 0; j < cnt; j++) {
            cout<<" ";
        }
        cnt ++;
        for(int k = nut; k <= ent; k++) {
            cout<<str[k];
        }
        cout<<endl;
        nut++;
        ent--;
    }
    cnt-=2;
    nut -=2;
    ent +=2;
    for(int i = n+2; i <= n*2+1; i++) {
        for(int j = 0; j < cnt; j++) {
            cout<<" ";
        }
        cnt --;
        for(int k = nut; k <= ent; k++) {
            cout<<str[k];
        }
        cout<<endl;
        nut--;
        ent++;
    }
    return 0;
}
