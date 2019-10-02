/*************************************************************************
	> File Name: LGP1090_1.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月21日 星期日 11时26分36秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string.h>
#include<queue>
using namespace std;

int main() {
    int n,t;
    priority_queue < int, vector<int>, greater<int> > que;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>t;
        que.push(t);
    }
    long long ans = 0;
    while(que.size() > 1){
        long long t1 = que.top();
        que.pop();
        long long t2 = que.top();
        que.pop();
        ans += t1+t2;
        que.push(t1+t2);
    }
    cout<<ans<<endl;
    return 0;
}




