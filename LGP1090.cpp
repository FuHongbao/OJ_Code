/*************************************************************************
	> File Name: LGP1090.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月20日 星期六 22时46分22秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string.h>
#define MAXN 20010
using namespace std;

int main() {
    int n;
    long long a[20005];
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a,a+n);

    long long ans = 0;
    for(int i = 1; i < n; i++){
        a[i] += a[i-1];
        ans += a[i];
        for(int j = i; j < n-1; j++){
            if (a[j] > a[j+1]) {
                long long t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            } else {
              break;  
            } 
        }
    }
    cout<<ans<<endl;
    return 0;
}
