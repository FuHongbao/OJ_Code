/*************************************************************************
	> File Name: LG-P1177.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月12日 星期五 14时06分11秒
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

long long a[100005];

void swap(int i,int j){
    long long temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void quicksort(int m,int n){
    long long  mid = a[(m+n)/2];
    int i = m;
    int j = n;
    if(i>=j) return ;
    
    while(i<=j){
    while(mid < a[j]){
        j--;
    }
    while(mid > a[i]){
        i++;
    }
        if(i<=j){
            swap(i,j);
            i++;j--;
        }
    }
    quicksort(m,j);
    quicksort(i,n);
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    quicksort(1,n);
    for(int i=1; i<=n; i++){
        cout<<a[i];
        if(i!=n){
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}


