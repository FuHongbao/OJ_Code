/*************************************************************************
	> File Name: LGP1781.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月12日 星期五 23时06分19秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

bool cmp(char a[1000],char b[1000],int n){
    int len1 = strlen(a);
    int len2 = strlen(b);

    if(len1>len2){
        return true;
    }else if(len1 == len2){
        for(int i = 0; i < len1; i++){
            if(a[i]!=b[i]){
                return a[i]>b[i];
            }
        }
    }else{
        return false;
    }
}

int main(){
    int n;
    char a[1000];
    char maxx[1000]={'0'};
    cin>>n;
    int ans ;
    for(int i = 0; i<n;i++){
        cin>>a;
        if(cmp(a,maxx,n)){
            strcpy(maxx,a);
            ans = i+1;
        }
    }
    cout<<ans<<endl;
    cout<<maxx<<endl;
    
    return 0;
}




