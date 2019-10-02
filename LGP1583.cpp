/*************************************************************************
	> File Name: LGP1583.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月13日 星期六 10时03分42秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

struct peo{
    int num;
    int wi;
};

bool cmp(struct peo a,struct peo b){
    if(a.wi == b.wi){
        return a.num <= b.num;
    }else{
        return a.wi > b.wi;
    }
}

int main()
{
    int n,k;
    int a[20005];
    struct peo p[20005];
    cin>>n>>k;
    for(int i = 1; i <= 10; i++){
        cin>>a[i];
    }
    for(int j = 1; j <= n; j++){
        cin>>p[j].wi;
        p[j].num = j;
    }
    sort(p+1,p+n+1,cmp);
    for(int i = 1; i<=n;i++){
        p[i].wi +=a[(i-1)%10+1];
    }
    sort(p+1,p+n+1,cmp);

    for(int i = 1; i <= k; i++){
        cout<<p[i].num;
        if(i!=k){
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}



