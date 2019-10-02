/*************************************************************************
	> File Name: LGP1031.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月13日 星期六 09时19分48秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[105];
    cin>>n;
    int ave=0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        ave += a[i];
    }
    ave /= n;
    for(int i = 0; i<n;i++){
        a[i] -= ave;
    }
    int ans = 0;
    for(int i= 0 ;i<n;i++){
        if(a[i]!=0){
            ans++;
            a[i+1] += a[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}









