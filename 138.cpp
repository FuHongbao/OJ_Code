/*************************************************************************
	> File Name: 138.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 19时44分59秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main() {
    int n ;
    cin>>n;
    int m = 2*n;
    for(int i = 0; i<n; i++) {
        for(int j = m; j > 0; j--) {
            cout<<"A";
        }
        cout<<endl;
        m-=2;
    }

    return 0;
}

