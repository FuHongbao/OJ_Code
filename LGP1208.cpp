/*************************************************************************
	> File Name: LGP1208.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月21日 星期日 13时39分39秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;

struct node {
    int prc;
    int num;
    bool operator <(const node a)const{
        return prc > a.prc;
    }
};

int main() {
    int n,m;
    priority_queue<node> que;
    cin>>n>>m;
    for(int i = 0; i < m; i++){
       struct node nod;
        cin>>nod.prc>>nod.num;
        que.push(nod);
    }
    long long ans = 0;
    for(int i = 0; i < m; i++){
        if(n == 0) break;
        int dj = que.top().prc;
        int num = que.top().num;
        if(n>=num){
            ans += dj*num;
            n -= num; 
        }else{
            ans += n*dj;
            n = 0;
        }
        que.pop();
    }
    cout<<ans<<endl;
    return 0;
}



