/*************************************************************************
	> File Name: LGP1223.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月21日 星期日 12时57分03秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <queue>
#include <cstdio>
using namespace std;

struct node{
    int x;
    int y;
    bool operator < (const node a) const {
        if(x == a.x) return y > a.y;
        return x > a.x;
    }
};

int main() {
    int n;
    cin>>n;
    priority_queue <node> que;
    struct node nod;
    for (int i = 1;i <= n; i++) {
        cin>>nod.x;
        nod.y = i;
        que.push(nod);
    }
    double time = 0;
    double wait = 0;
    for(int i = 1; i <= n; i++){
        cout<<que.top().y;
        if(i != n){
            cout<<" ";
            wait += que.top().x;
            time += wait;
        }
        que.pop();
    }
    printf("\n%.2lf\n",time/n);
    return 0;
}

