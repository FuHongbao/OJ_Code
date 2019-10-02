/*************************************************************************
	> File Name: LG-P1060.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月12日 星期五 14时11分10秒
 ************************************************************************/
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    int v[50],p,vp[50];
    int a[30050];
    cin>>n>>m;
    int ans = 0;
    for(int i = 0; i < m; i++){
        cin>>v[i]>>p;
        vp[i] = v[i]*p;
    }
    for(int i = 1; i <= m;i++){
        for(int j = n; j >= 1; j--){
            if(v[i-1]<=j){
                a[j] = max(a[j],a[j-v[i-1]]+vp[i-1]);
            }
        }
    }

    cout<<a[n]<<endl;
    return 0;
}

