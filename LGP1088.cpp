/*************************************************************************
	> File Name: LGP1088.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月25日 星期四 11时20分05秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n, m;
    int a[15000];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while(next_permutation(a,a+n)){
        m--;
        if(m == 0) break;
    }
    for(int i = 0; i < n; i++) {
        cout<<a[i];
        if(i != n-1) {
            cout<<" ";
        } else {
            cout<<endl;
        }
    }
    return 0;
}


