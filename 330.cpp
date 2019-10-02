/*************************************************************************
	> File Name: 330.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月23日 星期五 19时59分58秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX_N 100000
#define lowbit(x) (x & (-x))

struct TreeArray {
    long long n, c[MAX_N + 5];
    void init(int n) {
        this->n = n;
        memset(c, 0, sizeof(int) * (n + 1));
    }
    void add(int x, long long val) {
        while(x <= n) {
            c[x] += val;
            x += lowbit(x);
        }
    }  
    long long query(int x) {
        long long sum = 0;
        while(x) {
            sum += c[x];
            x -=lowbit(x);
        }
        return sum;
    }

};

TreeArray b, B;

int main() {
    long long n,m, pre = 0, now;
    char str[10];
    scanf("%lld%lld", &n, &m);
    b.init(n);
    B.init(n);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &now);
        b.add(i, now - pre);
        B.add(i, i * (now - pre));
        pre = now;
    }
    while(m--) {
        scanf("%s", str);
        switch(str[0]) {
            case 'C' : {
                long long l, r, c;
                scanf("%lld%lld%lld", &l, &r, &c);
                b.add(l, c);
                b.add(r+1, -c);
                B.add(l, l * c);
                B.add(r + 1, -(r+1)*c);
            }break;
            case 'Q': {
                long long l, r;
                scanf("%lld%lld", &l, &r);
                l -= 1; //处理,先减一
                long long sr = (r + 1) * b.query(r) - B.query(r);
                long long sl = (l + 1) * b.query(l) - B.query(l);
                printf("%lld\n", sr - sl);
            }break;
        }
    }
    return 0;
}


