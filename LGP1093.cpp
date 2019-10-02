/*************************************************************************
	> File Name: LGP1093.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月13日 星期六 21时57分30秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

struct sco{
    int yu;
    int num;
    int sum;
};
bool cmp(struct sco a,struct sco b){
    if(a.sum == b.sum){
        if(a.yu == b.yu){
            return a.num<b.num;
        }else{
            return a.yu > b.yu;
        }
    }else{
        return a.sum>b.sum;
    }
}
int main(){
    int n;
     struct sco sc[305];
    int shu,eng;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>sc[i].yu>>shu>>eng;
        sc[i].sum = sc[i].yu+shu+eng;
        sc[i].num = i;
    }
    sort(sc+1,sc+n+1,cmp);
    for(int i = 1; i <= 5; i++){
        cout<<sc[i].num<<" "<<sc[i].sum<<endl;
    }
    
    return 0;
}

