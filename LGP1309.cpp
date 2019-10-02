/*************************************************************************
	> File Name: LGP1309.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月13日 星期六 21时59分20秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

struct st{
    long long ssc;
    long long wi;
    long long sum;
    int num;
};

struct st s[200005];
bool cmp(struct st a,struct st b){
    if(a.ssc == b.ssc){
        return a.num <b.num;
    }else{
        return a.ssc>b.ssc; 
    }
}

void merge(int ll,int rr){
    if(rr - ll>=1) return ;
    int mid = (rr+ll)/2;
    merge(ll,mid);
    merge(mid,rr);
    struct st tt[200005];
    int p,q,sx;
    p = ll;
    q = mid;
    sx =ll;
    while(sx < rr){
        if(p>=mid){
            tt[sx++] = s[q++];
        }else if(q<rr){
            if(s[p].num == s[q].sum){
                if(s[p].num > s[q].num){
                    tt[sx++] = s[q++];
                }else{
                    tt[sx++] = s[p++];
                }
            }else{
                if(s[p].sum>s[q].sum){
                    tt[sx++] = s[p++];
                }else{
                    tt[sx++] = s[q++];
                }
            }
        }else{
            tt[sx++] = s[p++];
        }
    }
    for(int i = ll;i<rr;i++){
        s[i] = tt[i];
    }
}

int main()
{
    long long n,r,q;
    cin>>n>>r>>q;
    for(int i = 1;i <= 2*n; i++){
        cin>>s[i].ssc;
        s[i].num = i;
    }

    for(int i = 1;i <= 2*n; i++){
        cin>>s[i].wi;
    }
   sort(s+1,s+n*2+1,cmp);
    for(int i = 0; i < r; i++){
        for(int j = 1;j <= n*2-1;j+=2){
            if(s[j].wi>s[j+1].wi){
                s[j].sum+=1;
            }else{
                s[j+1].sum+=1;
            }
        }
   merge(1,n*2); 
    }
    //cout<<s[q].num;
    for(int i = 1;i<=n*2;i++){
        cout<<s[i].num<<" "<<s[i].sum<<endl;
    }
    return 0;
}




