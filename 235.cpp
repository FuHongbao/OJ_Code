/*************************************************************************
	> File Name: 235.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月13日 星期四 18时09分36秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

void output(int ind, int n, int k, int *buff) {
    if (ind == n) {
        return ;
    }
    for(int i = ind+1; i <= n; i++) {
        buff[k] = i;
        for (int j = 0; j <= k; j++) {
            if(j!=0) cout<<" ";
            cout << buff[j];
        }
        cout<<endl;
        output(i, n, k+1, buff);
    }
    return;
}

int main() {
    int n;
    cin>>n;
    int buff[50];
    output(0, n, 0, buff);

    return 0;
}


