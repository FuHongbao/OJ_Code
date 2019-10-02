/*************************************************************************
	> File Name: 131.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 21时02分18秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    int a[200];
    cin>>n;
    int max = -1,min = 999999;
    for(int i = 0;i < n; i++) {
        cin>>a[i];
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }
    cout<<max-min<<endl;
    return 0;
}



