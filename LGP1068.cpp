/*************************************************************************
	> File Name: LGP1068.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月12日 星期五 22时14分03秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

struct peo{
    int num ;
    int sco;
};

bool cmp(struct peo a,struct peo b)
{
    if(a.sco > b.sco){
        return true;
    }else if(a.sco == b.sco){
        return a.num<b.num;
    }else{
        return false;
    }

}

int main()
{
    struct peo p[10000];

    int n,m;
    cin>>n>>m;
    for(int i = 0;i < n; i++){
        cin>>p[i].num>>p[i].sco;
    }
    sort(p,p+n,cmp);
    m += m/2;
    int k = m;
    int temp = p[m-1].sco;
    for(int i = m;i<n;i++){
        if(p[i].sco == temp){
            k++;
        }else{
            break;
        }
    }
    cout<<temp<<" "<<k<<endl;
    for(int i = 0; i < n; i++){
        if(p[i].sco >= temp){
            cout<<p[i].num<<" "<<p[i].sco<<endl;
        }else{
            break;
        }
    }
    
    return 0;
}



