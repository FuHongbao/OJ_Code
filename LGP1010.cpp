/*************************************************************************
	> File Name: LGP1010.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月24日 星期三 18时18分39秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

long long a[25];

void mem(int m){
    for(int i = 1; i <=m; i++) {
        a[m] *= 2;
    }
}
void dg(int n) {
    int t;
    if(n == 0) return ;
    for(int i = 19; i >= 0; i--){
        if (n >= a[i]) {
            n -= a[i];
          t = i;
            break;
        }
    }
    cout<<"2";
    if(t!=1) cout<<"(";
    if(t == 0 || t == 2) {
        cout<<t<<")";
    }
    if(t >= 3) {
        dg(t);
        cout<<")";
    }
    if(n!=0) {
        cout<<"+";
        dg(n);
    }

}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < 20; i++) {
        a[i] = 1;
        mem(i);
    }
    dg(n);
    return 0;
}


