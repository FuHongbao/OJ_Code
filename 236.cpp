/*************************************************************************
	> File Name: 236.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月13日 星期四 19时03分50秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int arr[50];
void output(int k, int m, int ind, int n) {
    if(k == m) {
        for( int i = 0; i < m; i++){
            if(i!=0) cout<<" ";
            cout<<arr[i];
        }
        cout<<endl;
        return ;
    }
    for (int i = ind + 1; i <= n; i++) {
        arr[k] = i;
        output(k+1, m, i, n);
    }
}

int main() {
    int n,m;
    cin>>n>>m;
    output(0, m, 0, n);

    return 0;
}

